<h2 align=center>Dennis Miring'u | Samuel Wanyonyi</h2>
<h2 align=center>ALX Printf Group Project</h2>

---

## Overview

This project is a custom implementation of the printf function in C. The printf function is a widely-used standard library function that is used to format and print output to the standard output.

## Functionality

The custom printf function (`_printf`) implemented in this project supports various format specifiers, allowing for flexible formatting and printing of different data types.

### Supported Format Specifiers

- `%c`: Print a single character.
- `%s`: Print a null-terminated string.
- ... in progress

## Project Structure

The project is organized into the following files:

- `main.h`: Header file containing function prototypes and necessary includes.
- `_printf.c`: Implementation of the custom printf function.
- `test/`: Directory containing test cases.

## Usage

To use the custom printf function, include the `main.h` header file in your project, and call `_printf` with the desired format string and arguments.

Example:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("The answer is: %d\n", 42);

    return (0);
}

```

---

> # Contributors

## 1. Dennis Miring'u

## 2. Samuel Wanyonyi
