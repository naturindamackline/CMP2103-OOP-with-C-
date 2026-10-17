# Chained (Multilevel) Inheritance in C++

## 1. Introduction
Chained inheritance, also known as multilevel inheritance, occurs when a class inherits from another derived class, forming a chain of inheritance.

## 2. Objective
To design and implement a C++ program that demonstrates multilevel inheritance using a real-world university student example.

## 3. Classes Used
The program consists of three classes:

- **Person:** The base class containing the name, age, and `displayPerson()` function.
- **Student:** Inherits from `Person` and adds a registration number and `displayStudent()` function.
- **UniversityStudent:** Inherits from `Student` and adds a course and `displayCourse()` function.

## 4. Inheritance Structure

```text
Person
   |
   v
Student
   |
   v
UniversityStudent
```

`Student` inherits from `Person`, while `UniversityStudent` inherits from `Student`. Therefore, `UniversityStudent` can use accessible members inherited from both classes.

## 5. Program Features
- Demonstrates three classes arranged in an inheritance chain.
- Uses constructors to initialize data members.
- Demonstrates public inheritance.
- Shows inherited and locally defined member functions.
- Creates a `UniversityStudent` object to display student information.

## 6. Sample Output

```text
UNIVERSITY STUDENT DETAILS
--------------------------
Name: Mackline
Age: 20
Registration Number: 24/U/1234
Course: Electrical Engineering
```

## 7. How to Compile and Run

Using a C++ compiler such as g++:

```bash
g++ main.cpp -o inheritance
./inheritance
```

On Windows, run the compiled program using:

```bash
inheritance.exe
```

## 8. Conclusion
The program demonstrates multilevel inheritance by showing how a derived class inherits accessible members through a chain of classes. It promotes code reuse and organizes related information into a clear class hierarchy.