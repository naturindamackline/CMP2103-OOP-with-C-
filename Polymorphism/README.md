# Polymorphism in C++

## 1. Introduction
Polymorphism is an object-oriented programming concept that allows the same interface or function call to exhibit different behaviours depending on the object involved.

In C++, runtime polymorphism can be implemented using virtual functions, function overriding, and base-class pointers or references.

## 2. Objective
To design and implement a C++ program that demonstrates runtime polymorphism using a real-world payment system.

## 3. Classes Used
The program consists of three classes:

- **Payment:** The base class containing the virtual function `processPayment()`.
- **CashPayment:** Inherits from `Payment` and overrides `processPayment()` to display a cash-payment message.
- **MobileMoneyPayment:** Inherits from `Payment` and overrides `processPayment()` to display a mobile-money payment message.

## 4. Class Structure

```text
             Payment
                |
          +-----+------+
          |            |
          v            v
     CashPayment  MobileMoneyPayment
```

Both derived classes inherit from `Payment` and provide their own implementations of the virtual function.

## 5. Program Features
- Demonstrates a base class and two derived classes.
- Uses a virtual member function.
- Overrides the virtual function in both derived classes.
- Uses a base-class pointer to access different derived-class objects.
- Demonstrates runtime polymorphism through different outputs from the same function call.

## 6. Sample Output

```text
Payment made using cash.
Payment made using mobile money.
```

## 7. How to Compile and Run

Using a C++ compiler such as g++:

```bash
g++ main.cpp -o polymorphism
./polymorphism
```

On Windows, run the compiled program using:

```bash
polymorphism.exe
```

## 8. Conclusion
The program demonstrates runtime polymorphism by using a base-class pointer to call an overridden virtual function in different derived-class objects. The same function call produces different behaviours depending on the actual object being referenced.