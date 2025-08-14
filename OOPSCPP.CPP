Classes and Objects: 
*The main purpose of C++ programming is to add object orientation
to the C programming language and classes are the central feature of
C++ that supports object-oriented programming and are often called
user-defined types.

*A class is used to specify the form of an object and it combines data
representation and methods for manipulating that data into one neat package.
The data and functions within a class are called members of the class.

*A class definition starts with the keyword class followed by the class name;
and the class body, enclosed by a pair of curly braces.
A class definition must be followed either by a semicolon or a list of
declarations.

Syntax:
class class-name {
	access-modifier:
	    	data-members1;
		data-members2;
		data-members3;
};

Example:
class Box {
   public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

Define C++ Objects:
A class provides the blueprints for objects, so basically an object is
created from a class. We declare objects of a class with exactly the
same sort of declaration that we declare variables of basic types.
Following statements declare two objects of class Box
main(){
Box Box1;          // Declare Box1 of type Box
Box Box2;          // Declare Box2 of type Box
}

Accessing the Data Members
The public data members of objects of a class can be accessed using
the direct member access operator (.)

example:
s.name;

Classes & Objects in Detail:
Class member functions: A member function of a class is a function
that  has its definition or its prototype within the class definition
like any other variable.

Class access modifiers: A class member can be defined as public, private
or protected. By default members would be assumed as private.

Constructor & destructor: A class constructor is a special function in a
class that is called when a new object of the class is created. A destructor
is also a special function which is called when created object is deleted.

C++ copy constructor :The copy constructor is a constructor which creates
an object by initializing it with an object of the same class,
which has been created previously.

C++ friend functions : A friend function is permitted full access to
private and protected members of a class.

C++ inline functions: With an inline function, the compiler tries to expand
the code in the body of the function in place of a call to the function.

this:The this pointer in C++ Every object has a special pointer this which
points to the object itself.

Pointer to C++ classes: A pointer to a class is done exactly the same way
a pointer to a structure is. In fact a class is really just a structure
with functions in it.

Static members of a class: Both data members and function members of a
class can be declared as static.

*Class member functions
A member function of a class is a function that has its definition or its
prototype within the class definition like any other variable. It operates
on any object of the class of which it is a member, and has access to all the
members of a class for that object.

Ex:
class Box
{
 public:
 double length; // Length of a box
 double breadth; // Breadth of a box
 double height; // Height of a box
 
double getVolume(void);// Returns box volume
};
-----------------------------------------------

class Box 
{ 
 public:
 double length; // Length of a box
 double breadth; // Breadth of a box
 double height; // Height of a box
 
 double  getVolume( )
 {
 return length * breadth * height;
 }
};
void main()
{
Box b;
b.getVolume(2,3,4)
}


Accessing Private Data:
*To define the same function outside the class using the
scope resolution operator ( :: )

ex:
double Box :: getVolume(void)
{
 return length * breadth * height;
}


-----------------------------------------------------
Data abstraction:
Representing the essential features without including its background details
is called data abstraction.
It is the mechanism that hides the implementation details and shows only
the functionality.

Encapsulation:
Encapsulation is the mechanism of binding data members and corresponding
methods into a single module or class in-order to protect them from being
accessed by the outside code.
The data and functions in a class are called as members of the class.
The data defined in the class are called data members and the functions
defined are called member functions.
The main idea behind the concept of encapsulation is to obtain high
maintenance and to handle the application's code.


Inheritance:
Acquiring or getting properties from base class to the derived class
is called as inheritance.
The class which gives properties to the other classes is called
base class and the class
which accepts properties from the other class is called derived class.
The main advantage of inheritance is code reusability.
The following are the types of inheritance
a) Single level inheritance
b) Multi-level inheritance
c) Multiple inheritance
d) Hybrid inheritance
e) Hierarchical inheritance

Polymorphism:
Poly means many and morph means forms. So the ability to make more
than one form is called polymorphism.
It is used in inheritance programs.
It can be divided as two ways
a) Static polymorphism ( Compile-time polymorphism )
b) Dynamic polymorphism ( Run-time polymorphism )
