# 🚩1️⃣🥇

Here's a breakdown of C++ and Java using the same categories for comparison: 

---

### 1. Variables:

   - **C++**: Variables are declared with an explicit data type (e.g., `int`, `double`, `string`). C++ is statically typed, so each variable must have a declared type.
   - **Java**: Variables are also declared with an explicit data type. Java is a statically typed language, meaning data types are explicitly defined when declaring variables.

### 2. Comments:

   - **C++**: Single-line comments start with `//`, and multi-line comments are enclosed between `/*` and `*/`.
   - **Java**: Single-line comments start with `//`, and multi-line comments are enclosed between `/*` and `*/`.

### 3. Data Types:

   - **C++**: Supports basic data types like `int`, `double`, `float`, `char`, `bool`, and more complex structures like arrays, classes, and pointers.
   - **Java**: Has basic data types like `int`, `double`, `float`, `char`, `boolean`, as well as reference types (e.g., `String`, arrays, and objects).

### 4. Control Structures:

   - **C++**: Uses control structures like `if`, `else`, `while`, `for`, `switch`, and `do-while`.
   - **Java**: Similar control structures like `if`, `else`, `while`, `for`, `switch`, and `do-while`.

### 5. Functions (Methods in Java):

   - **C++**: Functions are defined with a return type and use parentheses for parameters. Functions can be outside classes or within classes (methods).
   - **Java**: Functions (methods) must be within a class and are declared with a return type, parameter list, and `void` if they do not return a value.

### 6. String Manipulation:

   - **C++**: Uses the `+` operator for string concatenation if using the `std::string` class. C-style strings (character arrays) are also supported.
   - **Java**: Uses the `+` operator for string concatenation. The `String` class provides various methods for string manipulation.

### 7. Arrays/Lists:

   - **C++**: Arrays are declared with a fixed size and type (e.g., `int arr[10];`). Dynamic arrays can be created with `std::vector` from the Standard Template Library (STL).
   - **Java**: Arrays are created with a fixed size and type (e.g., `int[] arr = new int[10];`). `ArrayList` is commonly used for dynamic lists.

### 8. Object-Oriented Programming (OOP):

   - **C++**: Supports OOP with classes, objects, inheritance, polymorphism, and encapsulation. Allows multiple inheritance and includes features like access specifiers (`public`, `protected`, `private`).
   - **Java**: Fully OOP-based, supporting classes, objects, inheritance, polymorphism, and encapsulation. Java does not support multiple inheritance directly but uses interfaces to achieve similar functionality.

### 9. Error Handling:

   - **C++**: Uses `try`, `catch`, and `throw` for exception handling. Not all errors are caught by exceptions; some can lead to undefined behavior.
   - **Java**: Uses `try`, `catch`, `finally`, and `throw` for exception handling. Java enforces exception handling for checked exceptions, making code more robust.

### 10. Looping:

   - **C++**: Uses `for`, `while`, `do-while` loops, and `for-each` syntax (with C++11 and above) for iterating over collections.
   - **Java**: Uses `for`, `while`, `do-while` loops, and enhanced `for` (for-each) loop for iterating over collections.

---

By following these, you’ll notice that both languages share many similarities, yet C++ allows more control over memory, while Java’s strict OOP model and garbage collection simplify memory management.

## 1. Basic Datatypes
<table>
<tr>
<td>
---

### C++

1. **Strings**:
   ```cpp
   #include <string>
   std::string str = "Hello, World!";
   ```

2. **Integers**:
   ```cpp
   int num = 42;
   ```

3. **Floats (or Doubles)**:
   ```cpp
   float floatNum = 3.14f;
   double doubleNum = 3.14159;
   ```

4. **Arrays**:
   ```cpp
   int arr[] = {1, 2, 3}; // Fixed size
   std::string fruits[] = {"apple", "banana", "cherry"};
   ```

5. **Objects**:
   ```cpp
   #include <string>

   class Person {
   public:
       std::string name;
       int age;
   };

   Person person;
   person.name = "John";
   person.age = 30;
   ```

---
</td>
<td>

### Java

1. **Strings**:
   ```java
   String str = "Hello, World!";
   ```

2. **Integers**:
   ```java
   int num = 42;
   ```

3. **Floats (or Doubles)**:
   ```java
   float floatNum = 3.14f;
   double doubleNum = 3.14159;
   ```

4. **Arrays**:
   ```java
   String[] fruits = {"apple", "banana", "cherry"};
   int[] numbers = {1, 2, 3};
   ```

5. **Objects**:
   ```java
   class Person {
       String name;
       int age;
   }

   Person person = new Person();
   person.name = "John";
   person.age = 30;
   ```

---


</td>
</tr>
</table>

## 2.Control staements 
<table>
<tr>
<td>

---

### C++

1. **If-else statement**:
   ```cpp
   int x = 10;
   if (x > 0) {
       std::cout << "Positive";
   } else if (x < 0) {
       std::cout << "Negative";
   } else {
       std::cout << "Zero";
   }
   ```

2. **While loop**:
   ```cpp
   int x = 1;
   while (x <= 5) {
       std::cout << "The number is: " << x << std::endl;
       x++;
   }
   ```

3. **For loop**:
   ```cpp
   for (int x = 0; x <= 10; x++) {
       std::cout << "The number is: " << x << std::endl;
   }
   ```

4. **Range-based For loop** (C++11 and above):
   ```cpp
   std::vector<std::string> colors = {"red", "green", "blue"};
   for (const auto& color : colors) {
       std::cout << color << std::endl;
   }
   ```

5. **Switch statement**:
   ```cpp
   int x = 2;
   switch (x) {
       case 1:
           std::cout << "One";
           break;
       case 2:
           std::cout << "Two";
           break;
       default:
           std::cout << "Other";
   }
   ```

---
</td>
<td>

### Java

1. **If-else statement**:
   ```java
   int x = 10;
   if (x > 0) {
       System.out.println("Positive");
   } else if (x < 0) {
       System.out.println("Negative");
   } else {
       System.out.println("Zero");
   }
   ```

2. **While loop**:
   ```java
   int x = 1;
   while (x <= 5) {
       System.out.println("The number is: " + x);
       x++;
   }
   ```

3. **For loop**:
   ```java
   for (int x = 0; x <= 10; x++) {
       System.out.println("The number is: " + x);
   }
   ```

4. **Enhanced For loop** (for arrays or collections):
   ```java
   String[] colors = {"red", "green", "blue"};
   for (String color : colors) {
       System.out.println(color);
   }
   ```

5. **Switch statement**:
   ```java
   int x = 2;
   switch (x) {
       case 1:
           System.out.println("One");
           break;
       case 2:
           System.out.println("Two");
           break;
       default:
           System.out.println("Other");
   }
   ```

---

</td>
</tr>
</table>

## 3. Function

<table>
<tr>
<td>
---

### C++

1. **Function with No Parameters**:
   ```cpp
   #include <iostream>
   void sayHello() {
       std::cout << "Hello, World!" << std::endl;
   }
   ```

2. **Function with Parameters**:
   ```cpp
   int add(int a, int b) {
       return a + b;
   }
   ```

3. **Calling the Functions**:
   ```cpp
   int main() {
       sayHello();
       std::cout << add(3, 5) << std::endl; // Outputs: 8
       return 0;
   }
   ```

---
</td>
<td>

### Java

1. **Method with No Parameters**:
   ```java
   public class Main {
       public static void sayHello() {
           System.out.println("Hello, World!");
       }
   }
   ```

2. **Method with Parameters**:
   ```java
   public static int add(int a, int b) {
       return a + b;
   }
   ```

3. **Calling the Methods**:
   ```java
   public class Main {
       public static void main(String[] args) {
           sayHello();
           System.out.println(add(3, 5)); // Outputs: 8
       }
   }
   ```

---

</td>
</tr>
</table>

## 3. String

<table>
<tr>
<td>

---

### C++

1. **Concatenation**:
   ```cpp
   #include <iostream>
   #include <string>

   std::string str1 = "Hello";
   std::string str2 = "World";
   std::string result = str1 + " " + str2;
   std::cout << result << std::endl; // Outputs: Hello World
   ```

2. **String Length**:
   ```cpp
   std::string str = "Hello, World!";
   int length = str.length();
   std::cout << length << std::endl; // Outputs: 13
   ```

3. **Substring**:
   ```cpp
   std::string str = "Hello, World!";
   std::string substring = str.substr(0, 5); // Start index = 0, Length = 5
   std::cout << substring << std::endl; // Outputs: Hello
   ```

4. **String to Uppercase/Lowercase**:
   ```cpp
   #include <algorithm>

   std::string str = "Hello, World!";
   std::transform(str.begin(), str.end(), str.begin(), ::toupper);
   std::cout << str << std::endl; // Outputs: HELLO, WORLD!

   std::transform(str.begin(), str.end(), str.begin(), ::tolower);
   std::cout << str << std::endl; // Outputs: hello, world!
   ```

5. **String Replace**:
   ```cpp
   #include <iostream>
   #include <string>

   std::string str = "Hello, World!";
   size_t pos = str.find("World");
   if (pos != std::string::npos) {
       str.replace(pos, 5, "C++");
   }
   std::cout << str << std::endl; // Outputs: Hello, C++!
   ```

---

</td>
<td>

### Java

1. **Concatenation**:
   ```java
   String str1 = "Hello";
   String str2 = "World";
   String result = str1 + " " + str2;
   System.out.println(result); // Outputs: Hello World
   ```

2. **String Length**:
   ```java
   String str = "Hello, World!";
   int length = str.length();
   System.out.println(length); // Outputs: 13
   ```

3. **Substring**:
   ```java
   String str = "Hello, World!";
   String substring = str.substring(0, 5); // Start index = 0, End index = 5
   System.out.println(substring); // Outputs: Hello
   ```

4. **String to Uppercase/Lowercase**:
   ```java
   String str = "Hello, World!";
   String uppercase = str.toUpperCase();
   String lowercase = str.toLowerCase();
   System.out.println(uppercase); // Outputs: HELLO, WORLD!
   System.out.println(lowercase); // Outputs: hello, world!
   ```

5. **String Replace**:
   ```java
   String str = "Hello, World!";
   String newStr = str.replace("World", "Java");
   System.out.println(newStr); // Outputs: Hello, Java!
   ```

---


</td>
</tr>
</table>

## 4. Array

<table>
<tr>
<td>

---

### C++

1. **Defining Arrays**:
   ```cpp
   #include <iostream>
   #include <string>

   // Fixed-size array
   std::string fruits[3] = {"apple", "banana", "cherry"};
   ```

2. **Accessing by Index**:
   ```cpp
   std::cout << fruits[0] << std::endl; // Outputs: apple
   ```

3. **Iterating Through Array**:
   ```cpp
   for (int i = 0; i < 3; i++) {
       std::cout << fruits[i] << std::endl;
   }
   ```

4. **Using `std::vector` (Dynamic Array)**:
   ```cpp
   #include <vector>

   std::vector<std::string> fruits = {"apple", "banana", "cherry"};
   fruits.push_back("date"); // Adds an element

   for (const auto& fruit : fruits) {
       std::cout << fruit << std::endl;
   }
   ```

5. **Associative Arrays**:
   C++ doesn’t have associative arrays but uses `std::map` for key-value pairs.
   ```cpp
   #include <map>

   std::map<std::string, std::string> fruitColors = {{"a", "apple"}, {"b", "banana"}, {"c", "cherry"}};
   std::cout << fruitColors["b"] << std::endl; // Outputs: banana
   ```

---

</td>
<td>

### Java

1. **Defining Arrays**:
   ```java
   String[] fruits = {"apple", "banana", "cherry"};
   ```

2. **Accessing by Index**:
   ```java
   System.out.println(fruits[0]); // Outputs: apple
   ```

3. **Iterating Through Array**:
   ```java
   for (String fruit : fruits) {
       System.out.println(fruit);
   }
   ```

4. **Using `ArrayList` (Dynamic Array)**:
   ```java
   import java.util.ArrayList;

   ArrayList<String> fruits = new ArrayList<>();
   fruits.add("apple");
   fruits.add("banana");
   fruits.add("cherry");

   for (String fruit : fruits) {
       System.out.println(fruit);
   }
   ```

5. **Associative Arrays**:
   Java doesn’t have associative arrays like PHP, but it uses `HashMap` for key-value pairs.
   ```java
   import java.util.HashMap;

   HashMap<String, String> fruitColors = new HashMap<>();
   fruitColors.put("a", "apple");
   fruitColors.put("b", "banana");
   fruitColors.put("c", "cherry");

   System.out.println(fruitColors.get("b")); // Outputs: banana
   ```

---

In **C++**, arrays are fixed in size unless using `std::vector`. **Java** arrays are also fixed in size, but dynamic arrays can be created with `ArrayList`. Both languages use `map` or `HashMap` for associative array functionality.
</td>
</tr>
</table>

## 5. OOP & Error handling

<table>
<tr>
<td>

---

### C++

1. **Class Declaration**:
   ```cpp
   #include <iostream>
   #include <string>

   class MyClass {
   public:
       // Property
       std::string property;

       // Constructor
       MyClass(std::string prop) : property(prop) {}

       // Method
       std::string myMethod() {
           return "Hello, I'm a method!";
       }
   };

   int main() {
       // Creating an object
       MyClass obj("value");

       // Accessing properties and methods
       std::cout << obj.property << std::endl;
       std::cout << obj.myMethod() << std::endl;

       return 0;
   }
   ```

2. **Inheritance**:
   ```cpp
   class ChildClass : public MyClass {
   public:
       // Additional properties and methods
       ChildClass(std::string prop) : MyClass(prop) {}
   };
   ```

---

</td>
<td>

### Java

1. **Class Declaration**:
   ```java
   public class MyClass {
       // Property
       private String property;

       // Constructor
       public MyClass(String prop) {
           this.property = prop;
       }

       // Method
       public String myMethod() {
           return "Hello, I'm a method!";
       }

       // Getter for property
       public String getProperty() {
           return property;
       }

       public static void main(String[] args) {
           // Creating an object
           MyClass obj = new MyClass("value");

           // Accessing properties and methods
           System.out.println(obj.getProperty());
           System.out.println(obj.myMethod());
       }
   }
   ```

2. **Inheritance**:
   ```java
   public class ChildClass extends MyClass {
       public ChildClass(String prop) {
           super(prop);
       }

       // Additional properties and methods
   }
   ```

---
</td>
</tr>
</table>

## 6.Error Handling
<table>
<tr>
<td>
---

#### C++

1. **Try-Catch Block**:
   ```cpp
   #include <iostream>
   #include <stdexcept>

   int main() {
       try {
           int result = 10 / 0; // Division by zero, will cause an error
       } catch (const std::exception& e) {
           std::cout << "Error: " << e.what() << std::endl;
       }
       return 0;
   }
   ```

2. **Custom Exception**:
   ```cpp
   #include <iostream>
   #include <stdexcept>

   class MyException : public std::exception {
   public:
       const char* what() const noexcept override {
           return "Custom error occurred!";
       }
   };

   int main() {
       try {
           throw MyException();
       } catch (const MyException& e) {
           std::cout << "Error: " << e.what() << std::endl;
       }
       return 0;
   }
   ```

---
</td>
<td>

#### Java

1. **Try-Catch Block**:
   ```java
   public class Main {
       public static void main(String[] args) {
           try {
               int result = 10 / 0; // Division by zero
           } catch (ArithmeticException e) {
               System.out.println("Error: " + e.getMessage());
           }
       }
   }
   ```

2. **Custom Exception**:
   ```java
   class MyException extends Exception {
       public MyException(String message) {
           super(message);
       }
   }

   public class Main {
       public static void main(String[] args) {
           try {
               throw new MyException("Custom error occurred!");
           } catch (MyException e) {
               System.out.println("Error: " + e.getMessage());
           }
       }
   }
   ```

---

In **C++**, exceptions are managed using `std::exception`, and custom exceptions can be created by inheriting from this class. **Java** has a similar approach but with more built-in exception types and `Exception` inheritance for custom exceptions. Both languages use `try-catch` blocks for error handling.
</td>
</tr>
</table>

## 7. Loops

<table>
<tr>
<td>
Here’s a look at **Looping** in **C++** and **Java**.

---

### C++

1. **For Loop:**
   ```cpp
   #include <iostream>

   int main() {
       for (int i = 0; i < 5; i++) {
           std::cout << i << std::endl;
       }
       return 0;
   }
   ```

2. **Range-Based For Loop (for iterating through arrays or vectors):**
   ```cpp
   #include <iostream>
   #include <vector>

   int main() {
       std::vector<std::string> array = {"apple", "banana", "cherry"};
       for (const std::string& value : array) {
           std::cout << value << std::endl;
       }
       return 0;
   }
   ```

3. **While Loop:**
   ```cpp
   #include <iostream>

   int main() {
       int i = 0;
       while (i < 5) {
           std::cout << i << std::endl;
           i++;
       }
       return 0;
   }
   ```

---

</td>
<td>

### Java

1. **For Loop:**
   ```java
   public class Main {
       public static void main(String[] args) {
           for (int i = 0; i < 5; i++) {
               System.out.println(i);
           }
       }
   }
   ```

2. **Enhanced For Loop (for iterating through arrays or collections):**
   ```java
   public class Main {
       public static void main(String[] args) {
           String[] array = {"apple", "banana", "cherry"};
           for (String value : array) {
               System.out.println(value);
           }
       }
   }
   ```

3. **While Loop:**
   ```java
   public class Main {
       public static void main(String[] args) {
           int i = 0;
           while (i < 5) {
               System.out.println(i);
               i++;
           }
       }
   }
   ```

4. **Do-While Loop:**
   ```java
   public class Main {
       public static void main(String[] args) {
           int i = 0;
           do {
               System.out.println(i);
               i++;
           } while (i < 5);
       }
   }
   ```

---

In **C++**, loops include the standard `for`, range-based `for`, and `while` loops. In **Java**, in addition to `for` and `while`, you can use `do-while` and enhanced `for` loops for iterating through arrays and collections.
</td>
</tr>
</table>

# C++ OOP 🚩2️⃣🥈

---

### 1. **C++ Classes**

```cpp
class MyClass {
public:
    int myNumber;  // Public attribute
    void myMethod();  // Public method declaration
};
```

### 2. **C++ OOP (Object-Oriented Programming) Concepts**

C++ supports the main pillars of OOP:
- **Encapsulation**: Grouping data and methods in a single unit, i.e., a class.
- **Inheritance**: Creating a new class (derived class) from an existing class (base class).
- **Polymorphism**: Ability to use a derived class object in place of a base class object.
- **Abstraction**: Hiding internal implementation details and exposing only essential features.

Example:
```cpp
class BaseClass {
public:
    void display() { cout << "BaseClass display" << endl; }
};

class DerivedClass : public BaseClass {
public:
    void display() { cout << "DerivedClass display" << endl; }
};
```

### 3. **C++ Classes and Objects**

- **Defining a Class**: Use the `class` keyword.
- **Creating an Object**: Instantiate the class by creating an object.

```cpp
class MyClass {
public:
    int attribute;  // Attribute
    void display() { cout << "Attribute: " << attribute << endl; }  // Method
};

// Create an object
int main() {
    MyClass obj;
    obj.attribute = 10;
    obj.display();
}
```

### 4. **C++ Class Methods**

Methods are functions defined inside a class that operate on the class’s attributes.

```cpp
class MyClass {
public:
    int number;

    // Method to set the number
    void setNumber(int n) {
        number = n;
    }

    // Method to display the number
    void display() {
        cout << "Number: " << number << endl;
    }
};

int main() {
    MyClass obj;
    obj.setNumber(5);
    obj.display();
}
```

### 5. **C++ Constructors**

Constructors are special methods automatically called when an object is created. Constructors have the same name as the class and no return type.

```cpp
class MyClass {
public:
    int value;

    // Constructor
    MyClass(int v) : value(v) {
        cout << "Constructor called with value: " << value << endl;
    }
};

int main() {
    MyClass obj(10);  // Outputs: Constructor called with value: 10
}
```

### 6. **C++ Access Specifiers**

C++ has three access specifiers:
- **public**: Members are accessible from outside the class.
- **private**: Members are accessible only within the class.
- **protected**: Members are accessible within the class and derived classes.

```cpp
class MyClass {
private:
    int privateVar;  // Accessible only within MyClass

public:
    int publicVar;  // Accessible from anywhere
    void setPrivateVar(int x) { privateVar = x; }  // Public method to modify privateVar

protected:
    int protectedVar;  // Accessible in MyClass and its subclasses
};
```

### 7. **C++ Encapsulation**

Encapsulation is implemented by keeping data members private and providing public methods to access and modify them.

```cpp
class MyClass {
private:
    int value;  // Encapsulated data member

public:
    // Setter for value
    void setValue(int v) {
        value = v;
    }

    // Getter for value
    int getValue() const {
        return value;
    }
};

int main() {
    MyClass obj;
    obj.setValue(10);
    cout << "Value: " << obj.getValue() << endl;  // Outputs: Value: 10
}
```

--- 


---

### 1. **C++ Inheritance**

Inheritance allows one class to inherit attributes and methods from another. This establishes a relationship between base and derived classes.

```cpp
class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
    // Inherits display() from Base
};
```

### 2. **Inheritance Types**

There are several inheritance types in C++: 

1. **Single Inheritance**: A class derives from a single base class.
2. **Multilevel Inheritance**: A class derives from another derived class.
3. **Multiple Inheritance**: A class derives from more than one base class.

### 3. **Multilevel Inheritance**

In multilevel inheritance, a derived class becomes the base class for another class.

```cpp
class Base {
public:
    void baseMethod() {
        cout << "Base method" << endl;
    }
};

class Intermediate : public Base {
public:
    void intermediateMethod() {
        cout << "Intermediate method" << endl;
    }
};

class Derived : public Intermediate {
public:
    void derivedMethod() {
        cout << "Derived method" << endl;
    }
};
```

### 4. **Multiple Inheritance**

In multiple inheritance, a class can inherit from multiple base classes.

```cpp
class Base1 {
public:
    void method1() {
        cout << "Method from Base1" << endl;
    }
};

class Base2 {
public:
    void method2() {
        cout << "Method from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
    // Inherits method1() and method2()
};
```

### 5. **Access Specifiers in Inheritance**

When inheriting, you can modify the access level of base class members in the derived class:
- **public**: Keeps access level as in the base class.
- **protected**: Makes all public and protected members of the base class protected in the derived class.
- **private**: Makes all public and protected members of the base class private in the derived class.

```cpp
class Base {
public:
    int x;
protected:
    int y;
private:
    int z;
};

class PublicDerived : public Base {
    // x is public, y is protected, z is not accessible
};
```

### 6. **C++ Polymorphism**

Polymorphism allows functions or methods to behave differently based on the object that invokes them. It includes function overloading and runtime polymorphism (achieved using virtual functions).

#### Function Overloading
```cpp
class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    void display(double d) {
        cout << "Double: " << d << endl;
    }
};
```

#### Virtual Functions (Runtime Polymorphism)
```cpp
class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }
};
```

### 7. **C++ Files**

File handling in C++ uses classes like `fstream`, `ifstream` (for reading), and `ofstream` (for writing) to handle files.

```cpp
#include <fstream>

int main() {
    std::ofstream file("example.txt");  // Open file for writing
    file << "Hello, File!";  // Write to the file
    file.close();  // Close the file

    std::ifstream fileRead("example.txt");  // Open file for reading
    std::string line;
    while (getline(fileRead, line)) {
        std::cout << line << std::endl;  // Output file contents
    }
    fileRead.close();
}
```

### 8. **C++ Exceptions**

Exceptions provide a way to handle runtime errors. C++ uses `try`, `catch`, and `throw` keywords for exception handling.

```cpp
#include <iostream>

int main() {
    try {
        int x = 0;
        if (x == 0) throw "Division by zero error!";
    } catch (const char* msg) {
        std::cerr << "Caught an exception: " << msg << std::endl;
    }
}
```

### 9. **C++ Date and Time**

C++ provides the `<ctime>` library for date and time operations.

```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t now = time(0);  // Get current time
    char* dt = ctime(&now);  // Convert to string form
    std::cout << "Current date and time: " << dt;

    tm* gmtm = gmtime(&now);  // Convert to UTC format
    std::cout << "UTC time: " << asctime(gmtm);
}
```

---








# Java OOP 🚩3️⃣🥉


---

### 1. **Java Classes**

A class in Java is a blueprint for creating objects with properties (attributes) and behaviors (methods). 

```java
public class MyClass {
    // Class attributes
    int x = 5;
    int y = 10;

    // Class method
    public void display() {
        System.out.println("This is a method in MyClass");
    }
}
```

### 2. **Java OOP Principles**

Java supports Object-Oriented Programming (OOP) principles, including encapsulation, inheritance, polymorphism, and abstraction.

- **Encapsulation**: Restricting direct access to object data.
- **Inheritance**: Creating new classes based on existing ones.
- **Polymorphism**: Methods behave differently based on the calling object.
- **Abstraction**: Focusing on essential qualities, hiding complexity.

### 3. **Java Classes/Objects**

In Java, classes are templates, and objects are instances created from classes.

```java
public class Main {
    public static void main(String[] args) {
        MyClass obj = new MyClass(); // Creating an object of MyClass
        System.out.println(obj.x); // Accessing attribute
        obj.display(); // Calling method
    }
}
```

### 4. **Java Class Attributes**

Attributes in Java are variables defined within a class. They can be initialized directly or through a constructor.

```java
public class Car {
    String model; // Class attribute
    int year;

    // Constructor to initialize attributes
    public Car(String model, int year) {
        this.model = model;
        this.year = year;
    }
}
```

### 5. **Java Class Methods**

Methods in Java define behaviors that objects can perform. They can take parameters and return values.

```java
public class Calculator {
    // Method with parameters
    public int add(int a, int b) {
        return a + b;
    }
    
    // Method with no return value
    public void displayMessage() {
        System.out.println("Calculator is ready to use!");
    }
}
```

### 6. **Java Constructors**

Constructors initialize new objects and set initial values for attributes. A constructor has the same name as the class and no return type.

```java
public class Person {
    String name;
    int age;

    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    public void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

// Usage
public class Main {
    public static void main(String[] args) {
        Person person1 = new Person("Alice", 25); // Creates a new Person object with initial values
        person1.display();
    }
}
```

### Summary of Key Concepts

- **Classes**: Blueprint for creating objects.
- **Objects**: Instances of classes.
- **Attributes**: Variables within a class.
- **Methods**: Define behaviors of a class.
- **Constructors**: Initialize new objects with initial attribute values.



---

### 1. **Java Modifiers**

Java provides two types of modifiers: *access modifiers* and *non-access modifiers*.

- **Access Modifiers**:
  - `public`: The code is accessible from any other class.
  - `protected`: The code is accessible in the same package and subclasses.
  - `private`: The code is only accessible within the declared class.

- **Non-access Modifiers**:
  - `final`: Prevents inheritance, overrides, or reassignment.
  - `static`: Belongs to the class, rather than instances.
  - `abstract`: Used in abstract classes and methods.

```java
public class MyClass {
    public int publicVar = 10;       // Accessible from anywhere
    protected int protectedVar = 20; // Accessible within package and subclasses
    private int privateVar = 30;     // Accessible only within this class

    public static final int CONSTANT = 100; // Non-access modifiers
}
```

---

### 2. **Java Encapsulation**

Encapsulation restricts direct access to class attributes, allowing control over values through getters and setters.

```java
public class EncapsulatedClass {
    private String name; // private attribute

    // Getter method
    public String getName() {
        return name;
    }

    // Setter method
    public void setName(String name) {
        this.name = name;
    }
}

public class Main {
    public static void main(String[] args) {
        EncapsulatedClass obj = new EncapsulatedClass();
        obj.setName("Alice"); // Using setter to assign value
        System.out.println(obj.getName()); // Using getter to access value
    }
}
```

---

### 3. **Java Packages / API**

Java packages group related classes, and the Java API provides a vast collection of built-in packages for use.

- **Creating a Package**:
    ```java
    package com.example.myapp; // Declare package at the top

    public class MyClass {
        // Class content
    }
    ```

- **Importing a Package**:
    ```java
    import com.example.myapp.MyClass; // Import a class
    import java.util.*; // Import all classes from a package
    ```

---

### 4. **Java Inheritance**

Inheritance allows one class to inherit attributes and methods from another. Use `extends` to define inheritance.

```java
// Parent class
class Animal {
    public void sound() {
        System.out.println("Animal sound");
    }
}

// Child class inherits from Animal
class Dog extends Animal {
    public void sound() {
        System.out.println("Bark");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sound(); // Outputs: Bark
    }
}
```

---

### 5. **Java Polymorphism**

Polymorphism allows methods to have different behaviors based on the object calling them. Method overriding is a common example.

```java
class Animal {
    public void sound() {
        System.out.println("Animal sound");
    }
}

class Cat extends Animal {
    @Override
    public void sound() {
        System.out.println("Meow");
    }
}

public class Main {
    public static void main(String[] args) {
        Animal myAnimal = new Cat(); // Polymorphic reference
        myAnimal.sound(); // Outputs: Meow
    }
}
```

---

### 6. **Java Inner Classes**

An inner class is a class defined within another class. It can be used to logically group classes.

```java
public class OuterClass {
    private String message = "Hello from Outer";

    // Inner class
    public class InnerClass {
        public void displayMessage() {
            System.out.println(message); // Accessing outer class member
        }
    }
}

public class Main {
    public static void main(String[] args) {
        OuterClass outer = new OuterClass();
        OuterClass.InnerClass inner = outer.new InnerClass();
        inner.displayMessage(); // Outputs: Hello from Outer
    }
}
```

---

### 7. **Java Abstraction**

Abstraction focuses on essential details and hides unnecessary complexity. Abstract classes and interfaces are used for abstraction.

- **Abstract Class**:
    ```java
    abstract class Shape {
        // Abstract method
        public abstract void draw();

        // Non-abstract method
        public void info() {
            System.out.println("This is a shape.");
        }
    }

    class Circle extends Shape {
        public void draw() {
            System.out.println("Drawing a circle");
        }
    }
    ```

- **Interface**:
    ```java
    interface Drawable {
        void draw();
    }

    class Rectangle implements Drawable {
        public void draw() {
            System.out.println("Drawing a rectangle");
        }
    }

    public class Main {
        public static void main(String[] args) {
            Drawable rect = new Rectangle();
            rect.draw(); // Outputs: Drawing a rectangle
        }
    }
    ```

---

---

### 1. **Java Interface**

Interfaces define methods that a class can implement. An interface can be thought of as a contract: any class that implements the interface must provide implementations for its methods.

```java
interface Animal {
    void sound(); // abstract method, no body
    void eat();
}

class Dog implements Animal {
    public void sound() {
        System.out.println("Bark");
    }
    public void eat() {
        System.out.println("Dog is eating");
    }
}

public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.sound(); // Outputs: Bark
        dog.eat();   // Outputs: Dog is eating
    }
}
```

---

### 2. **Java Enums**

An enum is a special Java type used to define collections of constants. Enums provide a way to define a fixed set of values.

```java
enum Level {
    LOW,
    MEDIUM,
    HIGH
}

public class Main {
    public static void main(String[] args) {
        Level myLevel = Level.MEDIUM;

        switch(myLevel) {
            case LOW:
                System.out.println("Low level");
                break;
            case MEDIUM:
                System.out.println("Medium level");
                break;
            case HIGH:
                System.out.println("High level");
                break;
        }
    }
}
```

---

### 3. **Java User Input**

To take input from the user, Java provides the `Scanner` class from `java.util`.

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine(); // Read a line of text
        System.out.println("Hello, " + name);

        System.out.print("Enter your age: ");
        int age = scanner.nextInt(); // Read an integer
        System.out.println("You are " + age + " years old.");

        scanner.close();
    }
}
```

---

### 4. **Java Date**

The `java.util.Date` and `java.time.LocalDate` classes allow you to work with dates and times. `LocalDate` (Java 8+) is part of the newer date-time API.

```java
import java.util.Date;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Main {
    public static void main(String[] args) {
        // Using java.util.Date
        Date currentDate = new Date();
        System.out.println("Current date (Date): " + currentDate);

        // Using java.time.LocalDate
        LocalDate date = LocalDate.now();
        System.out.println("Current date (LocalDate): " + date);

        // Formatting date
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        String formattedDate = date.format(formatter);
        System.out.println("Formatted date: " + formattedDate);
    }
}
```

---

### 5. **Java ArrayList**

`ArrayList` is a resizable array-like structure, part of the `java.util` package. Unlike arrays, `ArrayList` can grow and shrink in size dynamically.

```java
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> fruits = new ArrayList<>();

        // Adding elements
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Cherry");

        // Accessing elements
        System.out.println(fruits.get(0)); // Outputs: Apple

        // Iterating through ArrayList
        for (String fruit : fruits) {
            System.out.println(fruit);
        }

        // Removing an element
        fruits.remove("Banana");

        System.out.println("After removing Banana: " + fruits);
    }
}
```

---

### 6. **Java LinkedList**

`LinkedList` is another type of list in `java.util`. Unlike `ArrayList`, `LinkedList` is implemented as a doubly linked list, making it efficient for insertions and deletions.

```java
import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList<String> colors = new LinkedList<>();

        // Adding elements
        colors.add("Red");
        colors.add("Green");
        colors.add("Blue");

        // Adding elements to the beginning or end
        colors.addFirst("Yellow");
        colors.addLast("Purple");

        // Accessing elements
        System.out.println(colors.get(0)); // Outputs: Yellow

        // Iterating through LinkedList
        for (String color : colors) {
            System.out.println(color);
        }

        // Removing an element
        colors.remove("Green");

        System.out.println("After removing Green: " + colors);
    }
}
```

---

This covers Java interfaces, enums, user input, date handling, `ArrayList`, and `LinkedList`. Let me know if you have any questions or need more examples for any of these topics!


---

### 1. **Java List Sorting**

The `Collections.sort()` method can be used to sort lists in Java. For custom sorting, you can use `Comparator` or `Comparable`.

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> fruits = new ArrayList<>();
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Cherry");

        // Sort in ascending order
        Collections.sort(fruits);
        System.out.println("Ascending: " + fruits);

        // Sort in descending order
        Collections.sort(fruits, Collections.reverseOrder());
        System.out.println("Descending: " + fruits);

        // Sorting custom objects (e.g., by name length)
        ArrayList<String> names = new ArrayList<>(List.of("John", "Alice", "Bob"));
        names.sort(Comparator.comparingInt(String::length));
        System.out.println("Sorted by length: " + names);
    }
}
```

---

### 2. **Java HashMap**

`HashMap` is a key-value mapping data structure that allows null keys and values. It does not maintain insertion order.

```java
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<String, Integer> scores = new HashMap<>();

        // Adding elements
        scores.put("Alice", 85);
        scores.put("Bob", 92);
        scores.put("Charlie", 78);

        // Accessing an element
        System.out.println("Alice's score: " + scores.get("Alice"));

        // Iterating through HashMap
        for (String name : scores.keySet()) {
            System.out.println(name + ": " + scores.get(name));
        }

        // Removing an element
        scores.remove("Bob");
        System.out.println("After removing Bob: " + scores);
    }
}
```

---

### 3. **Java HashSet**

`HashSet` is a collection that stores unique elements and is backed by a hash table. It does not maintain insertion order.

```java
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        HashSet<String> colors = new HashSet<>();

        // Adding elements
        colors.add("Red");
        colors.add("Green");
        colors.add("Blue");

        // Trying to add duplicates (ignored)
        colors.add("Red");

        // Iterating through HashSet
        for (String color : colors) {
            System.out.println(color);
        }

        // Removing an element
        colors.remove("Green");
        System.out.println("After removing Green: " + colors);
    }
}
```

---

### 4. **Java Iterator**

An `Iterator` is used to traverse collections like `ArrayList` or `HashSet`. It allows safe removal of elements while iterating.

```java
import java.util.ArrayList;
import java.util.Iterator;

public class Main {
    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<>(List.of("Alice", "Bob", "Charlie"));

        Iterator<String> iterator = names.iterator();

        while (iterator.hasNext()) {
            String name = iterator.next();
            if (name.equals("Bob")) {
                iterator.remove(); // Removing safely
            }
            System.out.println(name);
        }

        System.out.println("After removal: " + names);
    }
}
```

---

### 5. **Java Wrapper Classes**

Java provides wrapper classes to treat primitive types as objects (e.g., `Integer` for `int`, `Double` for `double`).

```java
public class Main {
    public static void main(String[] args) {
        Integer num = 5;          // Autoboxing int to Integer
        int numValue = num;       // Unboxing Integer to int

        Double pi = 3.14;         // Autoboxing double to Double
        double piValue = pi;      // Unboxing Double to double

        System.out.println("Integer: " + num + ", Double: " + pi);
    }
}
```

---

### 6. **Java Exceptions**

Java has a robust exception-handling mechanism using `try-catch` blocks. You can also throw custom exceptions.

```java
public class Main {
    public static void main(String[] args) {
        try {
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero.");
        }
    }

    public static int divide(int a, int b) throws ArithmeticException {
        return a / b; // Will throw ArithmeticException if b is 0
    }
}
```

You can also create custom exceptions by extending `Exception` or `RuntimeException`:

```java
class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }
}

public class Main {
    public static void main(String[] args) {
        try {
            checkAge(15);
        } catch (CustomException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static void checkAge(int age) throws CustomException {
        if (age < 18) {
            throw new CustomException("Age must be 18 or older.");
        }
    }
}
```

---


---

### 1. **Java Exceptions**

Java uses `try-catch` blocks for exception handling, allowing you to handle errors gracefully. You can throw and catch exceptions, including custom ones.

```java
public class Main {
    public static void main(String[] args) {
        try {
            int result = divide(10, 0);
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero.");
        }
    }

    public static int divide(int a, int b) throws ArithmeticException {
        return a / b;  // Will throw ArithmeticException if b is 0
    }
}
```

#### Custom Exceptions

```java
class InvalidAgeException extends Exception {
    public InvalidAgeException(String message) {
        super(message);
    }
}

public class Main {
    public static void main(String[] args) {
        try {
            checkAge(15);
        } catch (InvalidAgeException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static void checkAge(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Age must be 18 or older.");
        }
    }
}
```

---

### 2. **Java Regular Expressions (RegEx)**

Java provides the `Pattern` and `Matcher` classes for regular expression operations.

```java
import java.util.regex.*;

public class Main {
    public static void main(String[] args) {
        String text = "Email: example@domain.com";
        String regex = "\\w+@\\w+\\.com";  // Matches an email address

        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(text);

        if (matcher.find()) {
            System.out.println("Found email: " + matcher.group());
        } else {
            System.out.println("No email found.");
        }
    }
}
```

---

### 3. **Java Threads**

Java uses the `Thread` class and `Runnable` interface to handle multi-threading.

#### Extending `Thread` Class

```java
class MyThread extends Thread {
    public void run() {
        System.out.println("Thread is running...");
    }
}

public class Main {
    public static void main(String[] args) {
        MyThread thread = new MyThread();
        thread.start();  // Starts the thread
    }
}
```

#### Implementing `Runnable` Interface

```java
class MyRunnable implements Runnable {
    public void run() {
        System.out.println("Runnable thread is running...");
    }
}

public class Main {
    public static void main(String[] args) {
        Thread thread = new Thread(new MyRunnable());
        thread.start();
    }
}
```

---

### 4. **Java Lambda Expressions**

Lambdas are used primarily to define concise implementations for functional interfaces (interfaces with a single abstract method).

```java
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<String> names = new ArrayList<>(List.of("Alice", "Bob", "Charlie"));

        // Using Lambda Expression
        names.forEach(name -> System.out.println(name));

        // With method reference
        names.forEach(System.out::println);
    }
}
```

#### Example with Custom Functional Interface

```java
@FunctionalInterface
interface MathOperation {
    int operation(int a, int b);
}

public class Main {
    public static void main(String[] args) {
        MathOperation add = (a, b) -> a + b;
        System.out.println("Sum: " + add.operation(5, 3));
    }
}
```

---

### 5. **Java Advanced Sorting**

Java’s `Collections.sort()` and `Arrays.sort()` methods, along with custom comparators, can be used for complex sorting scenarios.

#### Sorting Custom Objects with Comparator

```java
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return name + " (" + age + ")";
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Person> people = new ArrayList<>();
        people.add(new Person("Alice", 30));
        people.add(new Person("Bob", 25));
        people.add(new Person("Charlie", 35));

        // Sorting by age (ascending)
        people.sort(Comparator.comparingInt(person -> person.age));
        System.out.println("Sorted by age: " + people);

        // Sorting by name (descending)
        people.sort((p1, p2) -> p2.name.compareTo(p1.name));
        System.out.println("Sorted by name (descending): " + people);
    }
}
```

#### Sorting with Stream API

```java
import java.util.List;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) {
        List<String> names = List.of("John", "Alice", "Bob");

        // Sorting in ascending order
        List<String> sortedNames = names.stream()
                                        .sorted()
                                        .collect(Collectors.toList());
        System.out.println("Sorted names: " + sortedNames);
    }
}
```

---

#   O O P _ P r a c t i c e  
 