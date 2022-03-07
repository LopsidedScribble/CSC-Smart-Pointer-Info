//allows the use of cin and cout
#include <iostream>
//allows the use of strings
#include <string>
//allows smart pointers
#include <memory>
//includes the contents of the Class.h file
#include "Class.h"

//removes the need for std:: before cin and cout
using namespace std;

//prototypes
void SmartPtrInfo();
void SmartPtrEx();

//function controlling the main flow of the program
int main()
{
	//runs SmartPtrInfo() to display information
	SmartPtrInfo();

	//runs SmartPtrEx() to show example of a unique pointer
	SmartPtrEx();
	//checks for errors
	return 0;
}

//displays info on smart pointers to the screen
void SmartPtrInfo()
{
	cout << "----------------------------------------------------" << endl;
	cout << "Information on the Unique, Shared, and Smart Pointer" << endl;
	cout << "----------------------------------------------------\n\n" << endl;

	cout << "std::unique_ptr: This is a smart Pointer that owns a dynamically allocated memory space in the system." << endl;
	cout << "Positives: Unique Pointers are owners of the object they point too, no other pointers access it.  Once out of scope, it frees the allocated memory." << endl;
	cout << "Negatives: You can only reference data in the same scope, meaning it can not be recalled later, or once out of scope." << endl;
	cout << "When to use: When dynamically allocated memory is needed it shines.\n\n" << endl;

	cout << "std::shared_ptr: This smart pointer is also an owner of the object it points too, but it allows for multiple refrences. It does not delete until all references are accounted for." << endl;
	cout << "Positives: It allows for multiple references and can point out of scope." << endl;
	cout << "Negatives: It requires extra memory to maintain a count for the references, and every time a shared_ptr is created or destroyed it needs to update the reference." << endl;
	cout << "When to use: It is useful when you want to be able to go out of scope, and give a large amount of access (such as google docs).\n\n" << endl;

	cout << "std::weak_ptr: A non-owning pointer that allows multiple instances." << endl;
	cout << "Positives: Allows multiple references and points out of scope. Helps deal with the circular dependencies shared_ptrs can create." << endl;
	cout << "Negatives: To use it the actual owning object needs to hold the pointee in a std::shared_ptr." << endl;
	cout << "When to use: When a system wants to check if the object still exists before using it.\n\n\n" << endl;
	cout << "An example using the unique smart pointer:\n\n" << endl;
}

//shows an example of a unique pointer
void SmartPtrEx()
{
	//makes a unique pointer using class UniqueExample
	unique_ptr<UniqueExample> User = std::make_unique<UniqueExample>();
	
	//prototypes
	string PName;
	int PAge;
	string PQuote;



	cout << "Please enter your Name:" << endl;
	//gets user input and sets the response to PName
	getline(cin, PName);
	//sets the value of the User's name to the value
	User->SetName(PName);

	cout << "Please enter your Age:" << endl;
	//gets user input for an age and sets PAge equal to that value
	cin >> PAge;
	//sets the value of the User's age to the value
	User->SetAge(PAge);

	//displays the name and age of User across a few sentences
	User->DisplayStat(", nice to meet you!");
	User->GetAge();

}