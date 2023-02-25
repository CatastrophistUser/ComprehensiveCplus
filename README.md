# A Comprehensive Guide to C++

### Index
- **Basics** 
   - Access Specifiers
   - Manipulators and Operator Precedence
   - Scope Resolution Operator
   - Pointers (p*)

- **Constructors**
   - Overloading
   - Copy Constructor
   - Destructor

- **Operator Overloading**
   - Unary Operator Overloading
   - Binary Operator Overloading

- **Inheritance**
   - Single Inheritance
   - Multiple Inheritance
   - Heirarchical Inheritance
   - Multilevel Inheritance
   - Hybrid Inheritance
   - Advanced Inheritance
   - Implementation
 
- **Advanced Function**
   - Inline Function
   - Friend Function
   - Virtual Function
   - Overriding Function
   - Pure Virtual Function

- Templating
  - Class Template  
  - Function Template
  - Default Parameters
  - Multiple Parameters

<br>
<br>

### Access Specifier
There are three types of access specifiers/modifiers.
public
private
protected
Public:
These members are declared under the 'public' keyword. In this, the data members and member functions can be accessed by other classes too.

Private:
No one can access the class member declared inside the class, from outside the class. It's the default case when declaring class variables or member functions.

Protected:
Similar to private as no member can be accessed from outside the class, but can be accessed by subclasses within the same program.

<br>
<br>

### Manipulators and Operator Precedence
<ul>
<li><span style="color:steelblue">setw(): helps in setting the width of the field. </span>                  <br>
                  Example:                                                                                  <br>
                  int a=7, b=563                                                                            <br>
                  cout&lt;&lt;"Value of a:"&lt;&lt;setw(3)&lt;&lt;a;                                        <br> 
                  cout&lt;&lt;"Value of b:"&lt;&lt;setw(3)&lt;&lt;b;                                        <br>
                  <h5>Output:</h5>
                  Value of a:&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7                                                <br>
                 Value of  b: 563                                                                           <br>
</li>
<li><span style="color:steelblue">setprecision(): define upto how many decimal places to display.</span>                  
<br>
                              Example:                                                                                                                                                                                                   <br>
                              float a=3.14159;                                                              <br>
                              cout&lt;&lt;setprecision(3)&lt;&lt;"The Value is: "&lt;&lt;a;                 <br>
                              <h5>Output:</h5>                                                              <br>
                              The Value is: 3.141
</li>
</ul>

<br>
<br>

### Scope Resolution Operator
Scope Resolution Operator (::)

It is necessary for for the library programmer to define member functions outside their respective classes. This is made possible using the scope resolution operator.

<br>
<br>

### Pointers
A data type which stores the address of another variable as it's value.
<br>
<div>
<h4>Example Code</h4>
    <span style="color:darkgrey">                                                                           <br>
    int a=1095;  //declaring and initializing variable                                                      <br>
    int *p=&a; //declaring a pointer;  &=Address of operator                                                <br>
    cout&lt;&lt;"Address of a: "&lt;&lt;p;  //prints address of variable a                                  <br>
    </span>

<h4>Output</h4>
Address of a:  <span style="color:red">0x1e93dffd74</span>
<br/><br/>
<mark>
In the above program, the ''&'' is known as the reference operator and gives the address of a variable.<br>
While "*" is known as the de-referencing oprator and gives the value from the address.
</mark>
</div>

### Pointer to Pointer
A type of pointer which stores the address of another pointer.

<div>
<h4>Syntax</h4>
 <span style="color:darkgrey">
 int a=3;             <br>
 int *p=&a;           <br>
 int **pp=&p;         <br>
 cout&lt;&lt;pp;      <br>
 </span>
<br/><br/>
The above code will print the address of the pointer "p" which is storing the address of variable "a"
</div>

<br>
<br>

### Constructors & Destructors
There exist three types of constructors in C++
- Default Constructor
- Overloaded Constructor
- Copy Constructor
<br>

#### Default Constructors

Constructors are special member functions that are called automatically when an object of a class is created. The purpose of a constructor is to initialize the data members of the class. In C++, constructors have the same name as the class and are declared like regular member functions, but with no return type specified. Constructors can be overloaded, which means that a class can have multiple constructors with different parameter lists. 
The most common type of constructor is the default constructor, which takes no arguments and initializes the object to default values


#### Overloading

Overloading constructors means defining multiple constructors in a class with different parameter lists. This allows objects to be created with different initial values depending on the arguments passed to the constructor. Overloaded constructors are defined using the same name as the class, but with different parameter lists. C++ will automatically select the correct constructor to use based on the arguments passed to it.

#### Copy Constructor

Copy constructors are special constructors that are used to create a new object as a copy of an existing object of the same class. The copy constructor takes a reference to an object of the same class as its parameter, and initializes the new object with the values of the data members of the existing object. The purpose of a copy constructor is to create a new object that is identical to an existing object, which is useful when passing objects by value, returning objects from functions, or initializing objects with values from another object.

#### Destructor

Destructors are special member functions that are called automatically when an object is destroyed. The purpose of a destructor is to release any resources that the object has acquired during its lifetime, such as memory or file handles. In C++, destructors have the same name as the class, but with a tilde (~) character in front of it. Destructors do not take any arguments and have no return type. Like constructors, a class can have only one destructor. Destructors are important for managing resources and preventing memory leaks.

##### Example
    #include <iostream>
    #include <string>
    using namespace std;
    class Person {
    private:
        string name;
        int age; 
    public:
        // Default constructor
        Person() {
            name = "John Doe";
            age = 0;
            cout << "Default constructor called" << endl;
        }
        // Overloaded constructor with parameters
        Person(string n, int a) {
            name = n;
            age = a;
            cout << "Overloaded constructor called" << endl;
        }
        // Copy constructor
        Person(const Person &p) {
            name = p.name;
            age = p.age;
            cout << "Copy constructor called" << endl;
        }
        
        // Destructor
        ~Person() {
            cout << "Destructor called" << endl;
        }
        // Setter methods
        void setName(string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        // Getter methods
        string getName() const {
            return name;
        }
        int getAge() const {
            return age;
        }
    };
    int main() {
    // Create a default Person object
    Person p1;
    cout << "Name: " << p1.getName() << endl;
    cout << "Age: " << p1.getAge()

<br>
<br>

### Operator Overloading

#### Binary Operator Overloading

Specifying more than one definition for an operator is known as **operator overloading**
Operator overloading is a special type of <b>polymorphism</b> in which the operator is overloaded to provide special meaning to the user-defined data type.
The keyword **operator** is used for this.

##### Syntax
     classname operator
     {
        statement;
     }
     
##### Example
     opOver +(opOver var)
      {
      opOver temp;    
      temp.real=real+op.real;
      temp.imag=imag+op.imag;
      return temp;
      }
      
In the above example, A class with name "opOver" is created with two global variables, real and imag declared.

<br>
<br>

### Inheritance

The capability of a class to derive properties and characteristics from another class is called Inheritance.
Properties of an existing class can be reused using inheritance.
The class from which properties are derived from is known as base class, while the class which inherits the properties is known as derived class.

Types of Inheritance

Single Inheritance - A derived class with only one base class.
Multiple Inheritance - A derived class from more than one base class.
Heirarchical Inheritance - Multiple derived classes from one base class.
Multilevel Inheritance - Deriving a class from an already derived class.
Hybrid Inheritance - A mix of multiple and multilevel inheritance.

#### General Syntax
     class [derived-class-name] : visibility-mode [base-class-name]

Visibility Modes
Defines how a class is inherited. Can be either public or private.

Public Inheritance: If a class is derived with public visibility, the public members of the base class will become the public members of the derived class.

Private Inheritance: If a class is derived with private visibility, the public members of the base class will become the private members of the derived class.

Note:

Default visibility mode is private
Only public members of a class are inherited
Private members of base class are not inherited

Single Inheritance
![zxscreen-singleinherit](https://user-images.githubusercontent.com/93388196/221350985-4806a441-ecd2-4edf-a5b7-aadebef20a6c.jpg)

Multiple Inheritance
![zxscreen-multipleinherit](https://user-images.githubusercontent.com/93388196/221350992-d39909c8-cd16-45f7-81d8-d1a74e960314.jpg)

Heirarchical Inheritance
![zxscreen-hierinherit](https://user-images.githubusercontent.com/93388196/221351004-ca92cfab-818b-46df-9f88-db70f60f06a7.jpg)

Multi-Level Inheritance
![zxscreen-multilevelinherit](https://user-images.githubusercontent.com/93388196/221351010-4a68c674-da86-4282-9c53-1374f489358f.jpg)

Hybrid Inheritance
![zxscreen-hybridnherit](https://user-images.githubusercontent.com/93388196/221351045-d846cbce-cfec-4d6a-ac20-cb17af400749.jpg)

<br>
<br>

### Advanced Functions

#### Inline Function
C++ provides inline functions to reduce the function call overhead. Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.

Exception cases
Compiler may not perform inlining in such circumstances like:
1) If a function contains a loop. (for, while, do-while)
2) If a function contains static variables.
3) If a function is recursive.
4) If a function return type is other than void, and the return statement doesn’t exist in function body.
5) If a function contains switch or goto statement.

##### Example Code
      #include <iostream>
      using name space std;
      int inline product(int a, int b)
      {
      return a*b;
      }
      int main()
      {
      cout<<"The product is: "<<product(a,b);
      return 0;
      }

In the above program the inline function is calculating the product, on running the program the statement within the inline function (a*b) will be pasted where the function was called so as to save time.

<br>

#### Friend Function
A friend function is a function that is not a member of a class, but has access to the private and protected members of the class. Friend functions are declared inside the class, but are defined outside the class using the `friend` keyword.

##### Example Code
    #include <iostream>
    using namespace std;
    class MyClass {
    private:
        int x;
    public:
        MyClass() {
            x = 0;
        }
        // Declare the friend function
        friend void myFriendFunction(MyClass obj);
	};
	// Define the friend function
	void myFriendFunction(MyClass obj) {
	    cout << "The value of x is: " << obj.x << endl;
	}
	int main() {
	    MyClass obj;
	    myFriendFunction(obj); // Call the friend function
	    return 0;
	}

<br>

#### Virtual Function
a virtual function is a function that can be overridden by a derived class. When a function is declared as virtual in a base class, a derived class can provide its own implementation of the function that is used instead of the base class implementation when the function is called on an object of the derived class.

##### Example Code
	#include <iostream>
	using namespace std;
	// Base class
	class Shape {
	    protected:
	        double width;
	        double height;
	    public:
	        Shape(double w = 0, double h = 0) {
	            width = w;
	            height = h;
	        }
	        // Virtual function
	        virtual double getArea() {
	            cout << "Parent class area: ";
	            return 0;
	        }
	};
	// Derived class
	class Rectangle : public Shape {
	    public:
	        Rectangle(double w = 0, double h = 0) : Shape(w, h) {}
	        // Override the virtual function
	        double getArea() {
	            cout << "Rectangle area: ";
	            return width * height;
	        }
	};
	// Derived class
	class Triangle : public Shape {
	    public:
	        Triangle(double w = 0, double h = 0) : Shape(w, h) {}
	        // Override the virtual function
	        double getArea() {
	            cout << "Triangle area: ";
	            return (width * height) / 2;
	        }
	};
	int main() {
	    Shape* shape; // Declare a pointer to the base class
	    Rectangle rect(5, 6);
	    Triangle tri(5, 6);
	    shape = &rect; // Point the pointer to the Rectangle object
	    cout << shape->getArea() << endl; // Call the getArea function on the Rectangle object
	    shape = &tri; // Point the pointer to the Triangle object
	    cout << shape->getArea() << endl; // Call the getArea function on the Triangle object
	    return 0;
	}

<br>
<br>

### Templating
It works on the DRY Principle. The simple idea is to pass data type as a parameter so that we don’t need to write the same code for different data types. Templates are also known as ==parameterized classes==
 
*Example:* 
A software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass data type as a parameter.

#### Syntax
      template <class T>
        class class_name
        {
           T* variable_name;
           public:
           class_name(T* variable_name1)
           {
               //your code goes here
           }
        };     
        
In the above syntax, keyword "template" is used to define a template.
After the creation of template, T* becomes a data type whose type will depend on the type of parameter passed for it's type. 
Then a constructor is created which has the unspecified data type (will be specified in main) T.

#### Main Function
      int main()
        {
            class_name <type to be specified here> variable_name2 (parameter to invoke constructor);
        }
