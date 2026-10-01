# Time Converter

## Short Description

A simple C++ program that converts time between **total seconds** and **hours, minutes, and seconds (HH:MM:SS)** using a class.

## About the Project

The **Time Converter** is a beginner-friendly C++ project created to practice **Object-Oriented Programming (OOP)** concepts.

The program provides two conversions:

* Convert total seconds into hours, minutes, and seconds.
* Convert hours, minutes, and seconds into total seconds.

The project uses a class named `TimeConverter` with two member functions:

* `sectohms()` – Converts seconds into hours, minutes, and seconds.
* `hmstosec()` – Converts hours, minutes, and seconds into total seconds.

## Features

* Converts total seconds into `HH:MM:SS` format.
* Converts hours, minutes, and seconds into total seconds.
* Uses a C++ class and member functions.
* Takes input from the user.
* Displays the converted result.
* Simple and beginner-friendly program.

## Technologies Used

* C++
* Visual Studio Code
* G++ Compiler

## C++ Concepts Used

* Classes
* Objects
* Access specifier (`public`)
* Variables and data types
* User input using `cin`
* Output using `cout`
* Arithmetic operators
* Integer division
* Modulus operator (`%`)
* `main()` function

## Requirements

* Visual Studio Code
* C++ compiler such as G++

# Installation

1. Install **VS Code**.
2. Install the **G++ compiler**.
3. Create a project folder.
4. Create a C++ file named `main.cpp`.
5. Write the program into `main.cpp`.

# How to Run

Open the VS Code terminal and run:

```bash
g++ main.cpp -o main
```

Then run the program:

```bash
./main
```

## Project Structure

```text
├── main.cpp
├── README.md
└── output.png
```

## Screenshots

![Time Converter Output]{output.png}

## Future Improvements

The project can be improved by adding:

* Input validation for negative values.
* Validation for minutes and seconds between `0` and `59`.
* A menu so the user can select which conversion to perform.
* Continuous conversion without restarting the program.
* Support for larger time values.
* Separate functions for better program organization.

## Author

**Supriya Thakur**

