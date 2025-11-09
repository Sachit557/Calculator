# Basic C Calculator

A simple console-based calculator written in C, capable of performing basic arithmetic, advanced mathematical operations, and trigonometric calculations. The program features a menu-driven interface and allows repeated calculations until the user chooses to exit.

## Features

### Basic Arithmetic
- **Addition (+)** – Sum of two or more numbers
- **Subtraction (-)** – Subtract multiple numbers in sequence (first - second - …)
- **Multiplication (*)** – Product of two or more numbers
- **Division (/)** – Divide numbers in sequence (first ÷ second ÷ …)

### Advanced Operations
- **Power (^)** – Calculates base raised to an integer exponent
- **Square Root (r)** – Calculates the square root of a non-negative number
- **Average (avg)** – Computes the average of multiple numbers
- **Factorial (Fac)** – Computes the factorial of a non-negative integer

### Trigonometric Functions
- **Sine (s)** – Computes sine (input in degrees or radians)
- **Cosine (c)** – Computes cosine (input in degrees or radians)
- **Tangent (t)** – Computes tangent (input in degrees or radians)

### User-Friendly Interface
- Menu-based operation selection
- Supports multiple consecutive calculations using a loop
- Clear prompts for input and error handling

## How to Use

Compile the code using a C compiler:

```bash
gcc calculator.c -o calculator -lm
