*This project has been created as part of the 42 curriculum by hkonstan.*

# CPP Module 00

## Description

CPP Module 00 is the first C++ module of the 42 curriculum. Its purpose is to introduce the basic building blocks of C++ and Object-Oriented Programming while working with the C++98 standard.

The module covers concepts such as:

- namespaces
- classes and objects
- member functions
- public and private members
- standard input/output streams
- initialization
- `static` and `const`
- basic string handling and output formatting

The repository contains three exercises.

### ex00 — Megaphone

A small command-line program that converts every argument passed to it to uppercase.

If no arguments are provided, it prints:

```text
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

This exercise introduces basic C++ I/O, command-line arguments, strings, and character manipulation.

### ex01 — My Awesome PhoneBook

A command-line phonebook implemented using two classes:

- `PhoneBook`
- `Contact`

The phonebook stores a maximum of **8 contacts** in a fixed-size array. Dynamic allocation is forbidden. Once the phonebook is full, adding a new contact replaces the oldest one.

The program accepts three commands:

- `ADD` — creates a new contact
- `SEARCH` — displays the saved contacts and allows one to be selected by index
- `EXIT` — terminates the program

Each contact contains:

- first name
- last name
- nickname
- phone number
- darkest secret

No saved field may be empty.

For `SEARCH`, contacts are displayed using four columns:

```text
     index|first name| last name|  nickname
```

Each column is 10 characters wide and right-aligned. Values longer than 10 characters are truncated, with the final displayed character replaced by `.`.

### ex02 — The Job Of Your Dreams

This exercise recreates the missing implementation of the `Account` class from the provided header, test file, and reference log.

The objective is for the program output to match the reference log, except for timestamps. Depending on the compiler and operating system, destructor order may differ.

Exercise 02 is optional for passing Module 00.

---

## Instructions

### Requirements

A C++ compiler with C++98 support is required.

Every exercise is compiled with:

```text
-Wall -Wextra -Werror -std=c++98
```

### Clone the repository

```bash
git clone https://github.com/hariskonstadinidis/CPP-Module-00.git
cd CPP-Module-00
```

Each exercise has its own `Makefile`.

The available Makefile rules are:

```bash
make
make clean
make fclean
make re
```

### ex00

```bash
cd ex00
make
./megaphone "shhhhh... I think the students are asleep..."
```

Example output:

```text
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

Without arguments:

```bash
./megaphone
```

```text
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### ex01

```bash
cd ex01
make
./phonebook
```

Available commands:

```text
ADD
SEARCH
EXIT
```

Example flow:

```text
ADD
First name: John
Last name: Doe
Nickname: Johnny
Phone number: 123456789
Darkest secret: C++ is growing on me

SEARCH
```

The `SEARCH` command first prints the stored contacts in the required table format and then asks for the index of the contact to display.

### ex02

```bash
cd ex02
make
./Account
```

The produced output can be compared with the provided `19920104_091532.log`. Timestamps are expected to differ.

---

## Project Structure

```text
CPP-Module-00/
├── ex00/
│   ├── Makefile
│   └── src/
│       └── megaphone.cpp
│
├── ex01/
│   ├── Makefile
│   ├── include/
│   │   ├── contacts.hpp
│   │   └── phonebook.hpp
│   └── src/
│       ├── contacts.cpp
│       ├── main.cpp
│       └── phonebook.cpp
│
└── ex02/
    ├── Makefile
    ├── 19920104_091532.log
    ├── include/
    │   └── Account.hpp
    └── src/
        ├── Account.cpp
        └── tests.cpp
```

---

## Module Rules

The project follows the general rules of CPP Module 00, including:

- compilation with `c++ -Wall -Wextra -Werror`
- compatibility with `-std=c++98`
- no external libraries
- no C++11 or later features
- no `printf`, `malloc`, `calloc`, `realloc`, or `free`
- no STL containers or algorithms in this module
- no `using namespace`
- no `friend`
- class implementations must not be placed in header files
- headers must contain all required dependencies and use include guards

For Exercise 01 specifically, dynamic allocation is forbidden.

---

## Resources

The following resources were used or referenced while working on the project:

- **42 C++ Module 00 subject** — project requirements and exercise specifications
- **C++ string reference** — https://cplusplus.com/reference/string/string/
- **C++ `<iomanip>` reference** — https://cplusplus.com/reference/iomanip/

The subject specifically recommends the string and `<iomanip>` references for Exercise 01.

### AI Usage

ChatGPT was used to help structure and draft this `README.md` after reviewing the Module 00 subject and the repository. The technical requirements and build instructions documented here were checked against the provided subject and the current project files.
