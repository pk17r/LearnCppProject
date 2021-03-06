// TestConsoleApp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "FunctionTemplates.h"
#include "FriendClassAndInheritance.h"

using namespace std;

class testclass {
public:
	int dd = 69;
	testclass(int dd = 60)
	{
		cout << "default constructor" << endl;
		cout << c << endl;
		cout << this->dd << endl;
		this->dd = dd;
		cout << this->dd << endl;
	}
private:
	int c = 77;
};

int main()
{
	if (true)
	{
		//Learn Function templates concept
		FunctionTemplates();
		// learn friend class and inheritance concepts
		FriendClassAndInheritanceRun a;
		//Scope variables function
		OtherFunctionsClass b;
		b.ScopeVarsFn();
		//Char String Operations
		b.CharStringOperationsFn();
		//Pointer Operations
		b.PointerOperationsFn();
		//Polymorphism
		b.Polymorphism();
		//Virtual Functions
		b.VirtualFunctions();
	}

	testclass hhdi(40);
	//system("pause");
	return 0;
}