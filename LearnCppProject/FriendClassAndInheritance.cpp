// learn friend class and inheritance concepts
#include "stdafx.h"
#include "FriendClassAndInheritance.h"

FriendClassAndInheritance::FriendClassAndInheritance()
{
	cout << "default constructor for FriendClassAndInheritance" << endl;
	a = 10;
	b = "FriendClassAndInheritance()";
	c = 20;
	d = 30;
	PrintValues();
}

FriendClassAndInheritance::~FriendClassAndInheritance()
{
	cout << "default destructor for FriendClassAndInheritance" << endl;
}

void FriendClassAndInheritance::PrintValues()
{
	cout << "a is " << a << " and b is " << b << " c is " << c << " and d is " << d << endl;
}

void FriendClassAndInheritance::PrivatePrintFn()
{
	cout << "this is private print fn" << endl;
}

void FriendClass::FriendClassFn()
{
	cout << "** Create FriendClass obj inside FriendClassFn **" << endl;
	cout << "Note: FriendClass obj can only access FriendClass members and not members of base class!" << endl;
	FriendClass clObj;
	cout << "** End FriendClass obj inside FriendClassFn **" << endl;

	cout << "** Create FriendClassAndInheritance obj inside FriendClassFn **" << endl;
	FriendClassAndInheritance obj;
	obj.a = 11;
	obj.b = "FriendClassFn()";
	obj.c = 21;
	obj.d = 31;
	obj.PrintValues();
	obj.PrivatePrintFn();
	cout << "** End FriendClassAndInheritance obj inside FriendClassFn **" << endl;
}

void InheritedClass::InheritedClassFn()
{
	cout << "** Create InheritedClass obj inside InheritedClass fn **" << endl;
	InheritedClass obj;
	obj.c = 22;
	obj.d = 32;
	obj.PrintValues();
	cout << "** End InheritedClassFn **" << endl;
}

void FriendClassAndInheritanceRun::AnyClassFn()
{
	cout << "** Create FriendClassAndInheritance obj inside AnyClassFn **" << endl;
	FriendClassAndInheritance obj;
	obj.d = 33;
	obj.PrintValues();
	cout << "** End AnyClassFn **" << endl;
}

FriendClassAndInheritanceRun::FriendClassAndInheritanceRun()
{
	cout << "\n\n**** Start of FriendClassAndInheritanceRun ****\n\n";

	cout << "** Base class obj in Friend class can access and modify even private members of base class **" << endl;
	FriendClass a;
	a.FriendClassFn();
	cout << "** End Friend class fn **\n" << endl;

	cout << "** Base class obj in Inherited class object can modify only protected and public variables of base class **" << endl;
	InheritedClass b;
	b.InheritedClassFn();
	cout << "** End Inherited class fn **\n" << endl;

	cout << "** Base class obj in Any other function can access only the public members of a public class **" << endl;
	AnyClassFn();
	cout << "** End Any class fn **\n" << endl;

	cout << "\n**** End of FriendClassAndInheritanceRun ****\n";
}
	
void ScopeVariablesClass::ScopeVarsFn()
{
	cout << "\n\n*** Start of scope variables function ***\n" << endl;
	int x = 10;
	{
		int x = 50;
		cout << "inner scope x: " << x << endl;
	}
	cout << "outer scope x: " << x << endl;
	cout << "\n*** Start of scope variables function ***\n" << endl;
}