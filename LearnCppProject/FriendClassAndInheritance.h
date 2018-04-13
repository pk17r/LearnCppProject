// learn friend class and inheritance concepts
#pragma once
#include <iostream>
#include <string>

using namespace std;

class FriendClassAndInheritance {

private:
	int a;
	string b;
	friend class FriendClass;
	void PrivatePrintFn();

protected:
	int c;

public:
	int d;
	FriendClassAndInheritance();
	~FriendClassAndInheritance();
	void PrintValues();
};

class FriendClass {
public:
	void FriendClassFn();
};

class InheritedClass : private FriendClassAndInheritance {
public:
	void InheritedClassFn();
};

class FriendClassAndInheritanceRun {
public:
	FriendClassAndInheritanceRun();
	void AnyClassFn();
};

class OtherFunctionsClass {
public:
	void ScopeVarsFn();
	void CharStringOperationsFn();
	void PointerOperationsFn();
	void Polymorphism();
	void VirtualFunctions();

};
