#Assignment 1
##What is a class?
####A class is a C++ vehicle for translating an abstraction to a user-defined type.It combines data representation and methods for manipulating that data into one neat package.

##How does a class accomplish abstraction, encapsulation, and data hiding?
####A class design attempts to separate the public interface from the specifics of the implementation.
####The public interface represents the abstraction component of the design.Gathering the implementation details together and separating them from the abstraction is called encapsulation.
####To hide the data, data items normally go into the private section as it can’t be accessed outside the class. 

##What is the relationship between an object and a class?
####A class is a user-defined type, and an object is an instance of a class.This means an object is a variable of that type or the equivalent of a variable, such as memory allocated by new according to the class specification.

##In what way, aside from being functions, are class function members different from class data members?
####The information you decided to store appears in the form of class data Members, and the desired operations appear as class function members

## When are class constructors called? When are class destructors called?
####A constructor is a special class member function that’s called whenever an object of that class is created. Just as a program invokes a constructor when an object is created, it invokes a destructor when an object is destroyed.

##What is a default constructor? What is the advantage of having one?
####A default constructor is a constructor that is used to create an object when you don’t provide explicit initialization values. The fact that the default constructor has no arguments reflects the fact that no values appear in the declaration. A curious fact about default constructors is that the compiler provides one only if you don’t define any constructors.


##What are this and *this?
####The  this pointer is available to class methods. It points to the object used to invoke the method. Thus, this is the address of the object, and *this represents the object itself.
