// TestConsoleApp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "FunctionTemplates.h"
#include "FriendClassAndInheritance.h"

using namespace std;


int main()
{
	if (true)
	{
		//Learn Function templates concept
		FunctionTemplates();
		// learn friend class and inheritance concepts
		FriendClassAndInheritanceRun a;
		//Scope variables function
		ScopeVariablesClass b;
		b.ScopeVarsFn();
	}


	//system("pause");
	return 0;
}

