// MindTest01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
using namespace std;

void one()
{
	int ctr = 0;
	cout << "Hello program spectator, please take your seats.\nGet ready to enjoy my game. It\'s very fun game.\nYou have to do some simple tasks:- \n";
	int a;
	cout << "1. Test your eye power\nCount number of lines in this program:- \n - - - - -\n";
	cin >> a;
	if (a == 5)
	{
		cout << "Wrong, You are blind! There are 7 lines\n";
		cout << "One from \"task:-\" and another from \"program:-\":-)";
		ctr += 2;
	}
	else if (a != 7) 
	{ 
		cout << "Count properly you blind man!\n";
	}
	else
	{
		cout << "Good boy\n";
		ctr += 5;
	}	
	int b, as;
	cout << "2. Test your math:- \nAdd the following numbers\n8 6 7\n>";
	cin >> b;
	if (b == 21)
	{
		do
		{
			cout << "Same mistake again?\nCheck that I'm included \"1.\" and \"2.\"in this page";
			cout << "\nBe honest!\n1. Sorry, I've not seen!\n2. I was confident with my answer anyhow. Proceed\n>";
			cin >> as;
			if (as == 1)
			{
				cout << "Okay, wrong answer you've typed!";
				ctr += 2;
			}
			else if (as == 2)
			{
				cout << "Correct answer!\n";
				ctr += 5;
			}
			else
			{
				cout << "Type again...";
			}
		} while (as != 1 && as != 2);
	}
	else if (b == 24)
	{
		cout << "I've asked for following program!\nWrong amswer!";
		ctr += 2;
	}
	else cout << "You are poor in maths\nWrong answer!";
	cout << "\nYour score is " << ctr << endl;
}

void two()
{ 
	cout << "Under Development!!!";
}

int main()
{
	int g;
	cout << "Select the program to execute";
	cout << "\n1. Mind game";
	cout << "\n2. Game";
	cout << endl << '>';
	cin >> g;
	if (g == 1) one();
	else if (g == 2) two();
	else cout << "Wrong Input. Exitting...";
	Sleep(5000);
	return 0;
}

