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
