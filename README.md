# CPP_00

![42](https://img.shields.io/badge/42-School-000000?style=flat-square&logo=42&logoColor=white) ![Language](https://img.shields.io/badge/lang-C++98-blue?style=flat-square) ![Status](https://img.shields.io/badge/status-completed-success?style=flat-square)

42 School C++ module 00: introduction to classes, IO, and the basics of OOP.

## About This Project

### What It Does

This module is the entry point into C++ at 42, moving from plain C to a first taste of object-oriented programming. It covers namespaces, classes, member functions, stdio streams, initialization lists, static/const members, and basic exception handling, all through small, self-contained programs.

Exercises in this module:
- ex00: a "megaphone" CLI program that reads arguments or stdin and prints them in uppercase.
- ex01: a PhoneBook contact manager (Contact/PhoneBook classes) with add/search commands over a fixed-size directory.
- ex02: an Account class that logs every deposit, withdrawal, and balance check with timestamps.

### Purpose

It evaluates whether a C programmer can start thinking in classes and encapsulation: grouping data and behavior together, controlling access with private/public members, and replacing raw C idioms (structs + free functions) with small, well-defined objects.

## Stack

- School: 42
- Primary language: C++98
- Scope: one repository per project

## Skills Demonstrated

`C++98` | `Object-oriented programming` | `Encapsulation` | `Standard I/O streams`

## Features

- First object-oriented programs in C++98: classes, encapsulation, and member functions
- Interactive PhoneBook with add/search commands over a fixed-size contact directory
- Account class that logs deposits, withdrawals, and balance checks with timestamps

## Review Focus

- Look for clean class boundaries between Contact, PhoneBook, and the CLI loop.
- Review how input edge cases are handled without breaking the fixed-size phone book model.
- Notice the transition from procedural C habits into encapsulated C++ objects.

## Project Deep Dive

CPP_00 is where the portfolio starts translating C habits into C++ design. The exercises are intentionally small, but they introduce the vocabulary that every later module depends on: classes, private state, public methods, constructors, standard streams, and the idea that behavior should live close to the data it controls.

The strongest part of this module is the PhoneBook exercise, because it is the first place where input handling, persistent in-memory state, formatting, and class boundaries all meet. A reviewer can see how the program protects a fixed-size contact directory while still offering an interactive command loop.

## Implementation Notes

- Uses C++98 standard streams instead of C-style stdio for user interaction.
- Keeps Contact and PhoneBook responsibilities separate instead of storing everything in main.
- Handles a fixed-capacity model, which forces deliberate replacement/search behavior instead of unbounded containers.

## Structure

| Exercise | Path | Binary |
|---|---|---|
| ex00 | ./ex00 | megaphone |
| ex01 | ./ex01 | PhoneBook |
| ex02 | ./ex02 | Account |

## How to Run

Prerequisites: `make` and a C++98-capable compiler (`g++` or `clang++`).

Compile and run each exercise separately:

### ex00

~~~bash
cd ex00
make
./megaphone
~~~

### ex01

~~~bash
cd ex01
make
./PhoneBook
~~~

### ex02

~~~bash
cd ex02
make
./Account
~~~

## Testing

No dedicated testing scripts were detected at the project root.

## Notes

- This repository is part of the 42 portfolio.
- Commands are intended for local execution for review and evaluation.

## Author

anapaulapgavilan
