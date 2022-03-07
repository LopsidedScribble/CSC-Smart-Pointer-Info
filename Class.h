//makes sure the information is only included once
#pragma once
//allows the use of strings
#include <string> 
//allows the use of cin and cout
#include<iostream>

//removes the need for std:: for cin and cout
using namespace std;

//a class called UniqueExample
class UniqueExample
{
//private info of UniqueExample
private:
	//hold the name of the class
	string Name;
	//hold the age of the class
	int Age = 0;

public:
	//function to display name with additonal text
	void DisplayStat(string);

	//sets the value of Name equal to the value of N
	void SetName(string N) { Name = N; }
	//sets the value of Age equal to the value of a
	void SetAge(int a) { Age = a; }

	//displays the class name and age
	void GetAge()
	{
		cout << Name << " is " << Age << " years old!" << endl;
	}

};

