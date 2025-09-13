# Constructor-Overloading
Implement-Constructor-Overloading-in-CPP
Aim:
To study and implementation of Constructor Overloading in C++

Software used:
Mingw compiler, visual studio code, online C++ compiler

Program a: Constructor Overloading - 1
Theory with explanation of the code: This C++ program demonstrates constructor overloading using the fetch class. It defines three constructors: a default constructor that sets num to 146, a parameterized constructor that assigns a user-defined value, and a copy constructor that copies num from another object and increments it by 1. The disp() method displays the value of num. In main(), three objects are created using different constructors: f1 (default), f2 (parameterized), and f3 (copy of f1).

Algorithm:

- Start
- Define a class fetch with an integer data member num
- Create a default constructor that sets num = 146
- Create a parameterized constructor that sets num = x
- Create a copy constructor that sets num = b.num + 1
- Define a method disp() to print num
- In main(), create three objects: f1, f2, and f3 using different constructors
- Call disp() for each object
- End

Program b: Constructor Overloading - 2
Theory with explanation of the code: This C++ program demonstrates constructor overloading through a Car class that calculates mileage. It includes three constructors: a default constructor initializing preset values, a parameterized constructor accepting user-defined distance and fuel, and a copy constructor duplicating an existing object’s data. The calculateMileage() method divides distance by fuel to compute mileage, with a safeguard against zero fuel. The displayMileage() method prints the result. In main(), three objects are created using different constructors, showcasing how each initialization path affects the output.

Algorithm:

- Start
- Define a class Car with data members distance and fuel
- Create three constructors: default, parameterized, and copy
- Define a method to calculate mileage as distance / fuel
- Define a method to display the mileage
- In main(), create three Car objects using different constructors
- Call the display method for each object
- End
  
Conclusion:
Both programs effectively demonstrate the concept of constructor overloading in C++, showcasing how different constructors can initialize objects with varied logic. The first code calculates the area using default, parameterized, and copy constructors, while the second computes mileage and fetches numeric values with similar constructor patterns. These examples reinforce key object-oriented principles like encapsulation, reusability, and flexibility. By varying initialization methods, the programs highlight how constructors influence object behavior and output. Such implementations not only deepen understanding of class design but also prepare the foundation for more complex applications involving dynamic data handling, user interaction, and modular programming in C++.
