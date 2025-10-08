Personal C Calculator

A simple console-based calculator written in C, capable of performing basic arithmetic, advanced mathematical operations, and trigonometric calculations. The program features a menu-driven interface and allows repeated calculations until the user chooses to exit.

Features
1. Basic Arithmetic

Addition (+) – Sum of two or more numbers

Subtraction (-) – Subtract multiple numbers in sequence (first - second - ...)

Multiplication (*) – Product of two or more numbers

Division (/) – Divide numbers in sequence (first ÷ second ÷ ...)

2. Advanced Operations

Power (^) – Calculates base raised to an integer exponent

Square Root (r) – Calculates the square root of a non-negative number

Average (avg) – Computes the average of multiple numbers

Factorial (Fac) – Computes the factorial of a non-negative integer

3. Trigonometric Functions

Sine (s) – Computes sine (input in degrees or radians)

Cosine (c) – Computes cosine (input in degrees or radians)

Tangent (t) – Computes tangent (input in degrees or radians)

4. User-Friendly Interface

Menu-based operation selection

Supports multiple consecutive calculations using a loop

Clear prompts for input and error handling

How to Use

Compile the code using a C compiler:

gcc calculator.c -o calculator -lm


-lm is required to link the math library for functions like sqrt(), sin(), etc.

Run the program:

./calculator


Follow on-screen prompts to select an operation and input numbers.

After each calculation, you can choose whether to perform another calculation.

Code Structure

Modular design: Each operation is implemented as a separate function.

Menu system: The output() function handles user input and dispatches the correct operation.

Loop for multiple calculations: main() runs a do-while loop allowing repeated use.

Limitations & Possible Improvements

Currently, the power function only supports integer exponents. Using pow() from math.h could allow decimal exponents.

pi is hardcoded as 3.14 in trigonometric calculations; using M_PI from math.h would improve precision.

Additional mathematical functions and operators could be added, such as logarithms, modulus, etc.

Error handling could be enhanced (e.g., division by zero, invalid input).

License

This project is open for educational purposes. Feel free to modify or extend it!
