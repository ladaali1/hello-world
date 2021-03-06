//test.cpp

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	while (1)
	{
		int rand1 = (rand() % 10) + 1;
		int rand2 = (rand() % 10) + 1;
		int type = (rand() % 4) + 1;
		string sign = "-";
		switch (type) {
		case 1:
			sign = "+";
			break;
		case 2:
			sign = "-";
			break;
		case 3:
			sign = "x";
			break;
		case 4:
			sign = "÷";
			break;
		}

		bool gotTrue = false;
		int guess;

		while (!gotTrue)
		{
			cout << "What is " << rand1 << " " << sign << " " << rand2 << "?" << endl;
			cin >> guess;

			int answer = 0;
			switch (type)
			{
			case 1:
				answer = rand1 + rand2;
				break;
			case 2:
				answer = rand1 - rand2;
				break;
			case 3:
				answer = rand1 * rand2;
				break;
			case 4:
				answer = rand1 / rand2;
				break;
			}

			if (guess == answer) {
				cout << "Well done!" << endl;
				gotTrue = true;
				break;// This doesnt make a difference
			}
			else {
				cout << "That's not right." << endl;
			}
		}
	}
}