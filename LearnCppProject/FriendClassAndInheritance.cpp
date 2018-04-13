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
	//FriendClass clObj;
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
	
void OtherFunctionsClass::ScopeVarsFn()
{
	cout << "\n\n*** Start of scope variables function ***\n" << endl;
	int x = 10;
	{
		int x = 50;
		cout << "inner scope x: " << x << endl;
		int y = 60;
	}
	cout << "outer scope x: " << x << endl;
	cout << "\n*** End of scope variables function ***\n" << endl;
}

void OtherFunctionsClass::CharStringOperationsFn()
{
	cout << "\n\n*** Start of Char String Operations function ***\n" << endl;
	int arr[5] = { 1, 2, 3, 4, 5 };
	cout << "arr: " << arr
		<< "\n&arr: " << &arr
		<< "\n&arr + 1: " << &arr + 1
		<< "\n&arr[0]: " << &arr[0]
		<< "\n&arr[0] + 1 - arr: " << &arr[0] + 1 - arr
		<< "\n&arr[4] - &arr[0]: " << &arr[4] - &arr[0]
		<< "\n*(&arr + 1): " << *(&arr + 1)
		<< "\n*(&arr + 1) - arr: " << *(&arr + 1) - arr
		<< endl;

	char myword[] = "hello";
	char myword2[] = { 'h','e','l','l','o' };
	char myword3[] = { 'h','e','l','l','o','\0' };
	cout << myword << "\n" << myword2 << "\n" << myword3 << endl;
	cout << sizeof(myword) << "\n" << sizeof(myword2) << "\n" << sizeof(myword3) << endl;

	cout << "\n*** End of Char String Operations function ***\n" << endl;
}

// pointer to functions
int addition(int a, int b)
{
	return (a + b);
}
int subtraction(int a, int b)
{
	return (a - b);
}
int operation(int x, int y, int(*functocall)(int, int))
{
	int g;
	g = (*functocall)(x, y);
	return (g);
}

void OtherFunctionsClass::PointerOperationsFn()
{
	cout << "\n\n*** Start of Pointer Operations function ***\n" << endl;
	
	cout << " & is Reference operator while * is De-reference operator \n\n";
	int a = 10;
	int *b = &a;
	cout << "a: " << a << "\n&a: " << &a << "\nb: " << b << "\n*b: " << *b << endl;

	cout << "Example1:\n";
	int firstvalue, secondvalue;
	int * mypointer;
	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';

	cout << "\nExample2:\n";
	firstvalue = 5, secondvalue = 15;
	int * p1, *p2;
	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue
	*p1 = 20;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 30;          // value pointed to by p1 = 20
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';

	cout << "\nPointer of Pointer :) :\n";
	int **p3;
	p3 = &p1;
	cout << "secondvalue = " << secondvalue
		<< "\n&p1 = " << &p1
		<< "\np1 = " << p1
		<< "\np3 = &p1; i.e., pointer of pointer"
		<< "\np3 = " << p3
		<< "\n*p3 = " << *p3
		<< "\n**p3 = " << **p3
		<< "\ntypeid(**p3).name() = " << typeid(**p3).name()
		<< "\ntypeid(*p3).name() = " << typeid(*p3).name()
		<< "\ntypeid(p3).name() = " << typeid(p3).name()
		<< endl;
	
	char aaa = 'aaa';
	char *paaa = &aaa;
	cout << "typeid(aaa).name() = " << typeid(aaa).name()
		<< "\ntypeid(*aaa).name() = " << typeid(&aaa).name()
		<< "\ntypeid(paaa).name() = " << typeid(paaa).name()
		<< endl;

	cout << "\nPointers to arrays can be initialized by array name or pointer to first element of array!" << endl;
	int numbers[5];
	int * p;
	p = numbers; *p = 10;
	p++;  *p = 20;
	p = &numbers[2];  *p = 30;
	p = numbers + 3;  *p = 40;
	p = numbers;  *(p + 4) = 50;
	for (int n = 0; n<5; n++)
		cout << numbers[n] << ", ";
	cout << endl;

	cout << "\nint pointers increment by 4 while char pointers by 1. This is because they increment to next int or char value which is after 4 or 1 bytes away, respectively." << endl;
	int intVal = 10;
	char charVal = 5;
	int *pt_int = &intVal;
	char *pt_char = &charVal;
	cout << "pt_int= " << pt_int << " pt_char= " << (void*)pt_char << endl;
	cout << "++pt_int= " << ++pt_int << " ++pt_char= " << (void*)++pt_char << endl;
	cout << "pt_int++= " << pt_int++ << " pt_char++= " << (void*)pt_char++ << endl;
	cout << "pt_int= " << pt_int << " pt_char= " << (void*)pt_char << endl;

	cout << "\nPointers can themselves be const as well as point to const values:" << endl;
	cout <<"\tint x;\n"
		<< "\tint *       p1 = &x;  // non-const pointer to non-const int\n"
		<< "\tconst int *       p2 = &x;  // non-const pointer to const int\n"
		<< "\tint * const p3 = &x;  // const pointer to non-const int\n"
		<< "\tconst int * const p4 = &x;  // const pointer to const int\n"
		<< "And defining const value convention can be tricky:\n"
		<< "\tconst int * p2a = &x;  //      non-const pointer to const int\n"
		<< "\tint const * p2b = &x;  // also non-const pointer to const int\n";

	cout << "\nPointer to functions!!!" << endl;
	// pointer to functions
	int m, n;
	int(*minus)(int, int) = subtraction;
	m = operation(7, 5, addition);
	n = operation(20, m, minus);
	cout << n << endl;

	cout << "\n*** End of Pointer Operations function ***\n" << endl;
}


//Polymorphism

class Polygon {
protected:
	int width, height;
public:
	void set_values(int a, int b) {
		width = a; height = b;
	}
};

class Rectangle : public Polygon {
public:
	int area() {
		return width * height;
	}
};

class Triangle : public Polygon {
public:
	int area() {
		return width * height / 2;
	}
};

void OtherFunctionsClass::Polymorphism() {
	cout << "\n\n*** Start of Polymorphism function ***\n" << endl;
	Rectangle rect;
	Triangle trgl;
	Polygon * ppoly1 = &rect;
	Polygon * ppoly2 = &trgl;
	ppoly1->set_values(4, 5);
	ppoly2->set_values(4, 5);
	cout << rect.area() << '\n';
	cout << trgl.area() << '\n';
	cout << "\n*** End of Polymorphism function ***\n" << endl;
}


// Virtual Functions

class Base
{
public:
	virtual void show() { cout << " In Base \n"; }
};

class Derived : public Base
{
public:
	void show() { cout << "In Derived \n"; }
};

class Employee {
public:
	Employee() {};
	Employee(string na, int sal) :name(na), salary(sal) {};
	string name;
	int salary;
	virtual void raiseSalary() {  /* common raise salary code */ cout << "Employee: Raise by 5%" << endl; }
};

class Manager : public Employee {
public:
	Manager(string na, int sal) : Employee(na, sal) {};
	//Manager(string na, int sal) : name(na), salary(sal) { this->name = na, this->salary = sal; };
	virtual void raiseSalary() {  /* Manager specific raise salary code, may contain increment of manager specific incentives*/
		cout << "Manager: Raise by 10%" << endl;
	}
};

void OtherFunctionsClass::VirtualFunctions() {
	cout << "\n\n*** Start of Virtual function operations ***\n" << endl;
	//Pointers of Base class type.
	Base *dp = new Derived;
	dp->show();  // RUN-TIME POLYMORPHISM -> Derived Class implementation
	Base *bp = new Base;
	bp->show();  // RUN-TIME POLYMORPHISM -> Base Class implementation

	cout << endl << "*** NOTE: Only base class pointers can access derived class virtual functions!" << endl << endl;

	Employee* empList[] = { &Employee("Prashant", 100000), &Employee("Diya", 120000), &Manager("Peter", 130000) };
	for (int i = 0; i < sizeof(empList)/sizeof(empList[0]); i++) {
		empList[i]->raiseSalary();
	}
	printf("sizeof Employee is %d and size of empList[0] is %d\n", sizeof(Employee), sizeof(empList[0]));
	cout << "\n*** End of Virtual function operations ***\n" << endl;
}
