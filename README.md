ft_printf<br>
Because ft_putnbr() and ft_putstr() aren’t enough<br>

Description<br>
ft_printf is a custom implementation of the standard C library function printf(). This project is designed to replicate its functionality and enhance your understanding of variadic functions in C.<br>

Features<br>
Supported conversions:<br>

%c: Prints a single character<br>
%s: Prints a string<br>
%p: Prints a pointer in hexadecimal format<br>
%d / %i: Prints a signed decimal (base 10) number<br>
%u: Prints an unsigned decimal (base 10) number<br>
%x / %X: Prints a number in hexadecimal format (lowercase/uppercase)<br>
%%: Prints a percent sign<br>
Modular design: Code is structured for readability and extensibility.<br>

Bonus Features<br>
Handles flags like -, 0, . and field width across all conversions.<br>
Supports additional flags: #, +, and space for more customization.<br>
Requirements<br>
Mandatory part:<br>

Write a library (libftprintf.a) with the ft_printf() function.<br>
Use only the following external functions: malloc, free, write, va_start, va_arg, va_copy, and va_end.<br>
Implement all required conversions.<br>
Conform to the 42 Norm and avoid memory leaks.<br>
Bonus part:<br>

Manage flag combinations and advanced formatting features.<br>
The bonus part will only be graded if the mandatory part is perfect.<br>
Installation<br>
Clone the repository and compile the library using the provided Makefile:<br>

bash<br>
cd ft_printf<br>
make<br>
```<br>

---

### Usage
Include the library in your project and use `ft_printf()` as you would with the standard `printf()`.
Example:
```c
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s!\n", "world");<br>
    return 0;
}
```

---

### Learning Objectives
- Understand the inner workings of `printf()`.
- Gain experience working with variadic functions in C.
- Write clean, modular, and extensible code.

---

### Credits
This project is part of the **42 curriculum** and was developed to enhance system-level programming skills.







