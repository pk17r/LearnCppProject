// TestConsoleApp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "FunctionTemplates.h"

using namespace std;

class TestClass {
private:
	int a;
	string b;
	friend class FriendClass;
public:
	TestClass()
	{
		cout << "Constructor for TestClass" << endl;
		a = 10;
		b = "Yo man!!\n";
	}

	~TestClass()
	{
		cout << "a is " << a << " and b is " << b << endl;
	}
};

class FriendClass {
public:
	void FriendClassFn()
	{
		TestClass obj;
		
	}
};

int main()
{
	FunctionTemplates();
	TestClass a;
	
	//system("pause");
	return 0;
}

