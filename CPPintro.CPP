1. Introduction to C++
2. Variables, Datatypes
3. Storage Classes
4. Operators
5. Decision Making
6. Loops
7. Functions
8. Arrays
9. Strings
10. Pointers
11. Structures
------------ OOPS --------------------
12. OOPS
13. Overloading(operator & function)
14. Inheritance
15. Polymorphism
16. Data Abstraction
17. Data Encapsulation
18. Files I/O

------------------------------------------------------

1. Introduction to C++:

C++ was developed by Bjarne Stroustrup & Dennis Ritchie starting in 1979
at Bell Labs in Murray Hill, New Jersey, U.S.A.
C++ enhancement to the C language and originally named C with Classes
but later it was renamed C++ in 1983.
*C++ is regarded as a middle-level language, as it comprises a combination
of both high-level and low-level language features.
*C++ is a statically typed, compiled, general-purpose, case-sensitive,
free-form programming language that supports procedural, object-oriented,
and generic programming.

Object-Oriented Programming C++ fully supports object-oriented
programming, including the four pillars of object-oriented development:
-Data Encapsulation
-Data abstraction/hiding
-Inheritance
-Polymorphism

---------------------------
Learning C++:
The most important thing while learning C++ is to focus on concepts.
The purpose of learning a programming language is to become a better
programmer; that is, to become more effective at designing and implementing
new systems and at maintaining old ones.
It can achieve its aims effectively while maintaining runtime and
space efficiency.
----------------------------
Use of C++:
C++ is used by hundreds of thousands of programmers in essentially
every application domain.
C++ is being highly used to write device drivers and other software
that rely on direct manipulation of hardware under real-time constraints.
C++ is widely used for teaching and research.
C++ follows bottom to up approach.

-------------------------------
C++ Program Structure:

#include <iostream.h>
//using namespace std;
// main() is where program execution begins.
int main()
{
 cout << "Hello World";
 return 0;
}

o/p:
------------------------------------------------------
C++ Keywords:     63 keywords

asm 	     	else 			new 			this
auto 		enum 			operator 		throw
bool 		explicit 		private 		true
break 		export 			protected 		try
case 		extern 			public 			typedef
catch 		false 			register 		typeid
char 		float 			reinterpret_cast 	typename
class 		for 			return 			union
const 		friend 			short 			unsigned
const_cast 	goto 			signed 			using
continue 	if 			sizeof 			virtual
default 	inline 			static 			void
delete 		int 			static_cast 		volatile
do 		long 			struct 			wchar_t
double 		mutable 		switch 			while
dynamic_cast 	namespace 		template

------------------------------------------------------
2. Variables & Datatypes:
Variables:

syntax:
variable_name =  value ;
ex:	   a  =  100;

Datatypes: It specifies the type of data that a variable can store.
syntax:
datatype variable_name =  value ;
	   ex: int  a  =  100;
These are 3 types:
	1. Primary datatypes
	2. User-defined datatypes
	3. Reference datatypes

1. Primary datatypes:
Type		 			Keyword
Boolean 	 			bool
Character  	 	       		char
Integer 	 			int
Floating point 	 			float 	3.4e-38 to  +1.2e+38
Double floating point 			double	3.4e-128 to 1.2e+128
Valueless 				void
Wide character 				wchar_t


 Example: int
#include<iostream.h>
void main()
{
int a=100;
cout<<"Value of A:"<<a;
}

Example: Char
#include<iostream.h>
void main()
{
char a='K';
cout<<"Value of A:"<<a;
}

Example: string
#include<iostream.h>
void main()
{
char a[10]="Sindhu";
cout<<"Value of A:"<<a;
}


Float:
#include<iostream.h>
void main()
{
float a;
cout<<"Enter your amount:";
cin>>a;
cout<<"Value of A:"<<a;
}


------------------------------------------
Type 		Typical Bit Width 	Typical Range
char 		1byte			-127 to 127 or 0 to 255
unsigned char 	1byte 			0 to 255
signed char 	1byte 			-127 to 127
int 		4bytes 			-2147483648 to 2147483647
unsigned int 	4bytes 			0 to 4294967295
signed int 	4bytes 			-2147483648 to 2147483647
short int 	2bytes 			-32768 to 32767
unsigned short 	int Range 		0 to 65,535
signed short int Range 			-32768 to 32767
long int 		4bytes 		-2,147,483,647 to 2,147,483,647
signed long int 	4bytes 		-2,147,483,647 to 2,147,483,647
unsigned long int 	4bytes 		0 to 4,294,967,295
float 		4bytes 			+/- 3.4e +/- 38 (~7 digits)
double 		8bytes 			+/- 1.7e +/- 308 (~15 digits)
long double 	8bytes 			+/- 1.7e +/- 308 (~15 digits)
wchar_t 	2 or 4 bytes 		1 wide character



------------------------------------------------------

