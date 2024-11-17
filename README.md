# C++ Module 00 - Basics of C++: Namespaces, Classes, Member Functions, and More

This module serves as the starting point for your journey into C++ programming. It introduces foundational concepts such as namespaces, classes, member functions, initialization lists, static and constant variables, and standard input/output streams. These topics form the backbone of C++ and object-oriented programming (OOP).

## Project Purpose

The purpose of this module is to familiarize you with the syntax and foundational concepts of C++ while providing a hands-on introduction to object-oriented programming. Through a series of practical exercises, you'll learn to implement classes, manage memory effectively, and work with standard input/output mechanisms.

This project will help you transition from C to C++, equipping you with skills to write clean, efficient, and maintainable code.

## Exercises Overview

### Exercise 00: Megaphone
**Objective:** Write a program called `megaphone` that transforms input text to uppercase and prints it to the standard output. If no input is provided, the program outputs a default message: `* LOUD AND UNBEARABLE FEEDBACK NOISE *`.

**Why This Exercise?** This task introduces basic string manipulation and standard input/output in C++ while emphasizing clean and readable code.

---

### Exercise 01: My Awesome PhoneBook
**Objective:** Create a basic `PhoneBook` application with the following features:
- Add new contacts (up to 8, replacing the oldest when full).
- Search and display contact information with formatted output.
- Exit the program.

The application uses two classes: `PhoneBook` and `Contact`. Contacts store fields like first name, last name, nickname, phone number, and darkest secret.

**Why This Exercise?** This exercise emphasizes class design, data encapsulation, and formatted output. It also introduces static arrays and highlights the importance of managing user inputs.

---

## Compilation and Testing

Each exercise is organized in its own directory (`ex00/`, `ex01/`, etc.). To compile and run your programs, navigate to the respective directory and use the provided Makefile:

```bash
cd ex00
make
./megaphone
