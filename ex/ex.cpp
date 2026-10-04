#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

#include "Participant.h"
#include "Human.h"
#include "Cat.h"
#include "Robot.h"

#include "Obstacle.h"
#include "Wall.h"
#include "Treadmill.h"

using namespace std;

int main()
{
	srand(time(0));

	vector<Participant*> participants = {
		new Human ( "Human", 12, 30, 8 + rand() % 10 ),
		new Cat ( "Cat", 20, 20, 3 ),
		new Robot ( "Robot", 10, 40 )
	};

	int c = 0;
	vector<Obstacle*> obstacles;

	cout << "Enter number of obstacles: ";
	cin >> c;

	for (size_t i = 0; i < c; i++)
	{
		if (rand() % 2)
		{
			obstacles.push_back(new Wall("Wall", 5 + rand() % 10));
		}
		else
		{
			obstacles.push_back(new Treadmill("Treadmill", 10 + rand() % 20));
		}
	}

	vector<int> scores;
	for (size_t i = 0; i < participants.size(); i++)
	{
		scores.push_back(0);
	}

	for (size_t i = 0; i < participants.size(); i++)
	{
		system("pause");
		cout << "\n----------- PARTICIPANT " << i+1 << " -----------\n";
		for (size_t j = 0; j < obstacles.size(); j++)
		{
			cout << "Participant \"" << participants[i]->GetName() << "\" ";
			Sleep(1000);
			if (obstacles[j]->Overcome(*participants[i]))
			{
				cout << "overcame obstacle \"" << obstacles[j]->GetName() << "\" on distance " << j+1 << endl;
				scores[i]++;
			}
			else
			{
				cout << "couldn't overcome obstacle \"" << obstacles[j]->GetName() << "\" on distance " << j+1 << endl;
				break;
			}
		}
	}

	cout << "\n ------------- RESULTS -------------\n";
	system("pause");
	for (size_t i = 0; i < participants.size(); i++)
	{
		cout << participants[i]->GetName() << ": " << scores[i] << endl;
	}

	for (size_t i = 0; i < participants.size(); i++) { delete participants[i]; }
	for (size_t i = 0; i < obstacles.size(); i++) { delete obstacles[i]; }
}