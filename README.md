# ft_printf

`ft_printf` is a custom implementation of the standard `printf` function in C. This project is a deep dive into variadic functions, format specifiers, and memory handling, while adhering to strict performance and reliability standards. The goal is to replicate and understand the behavior of the standard `printf` function while meeting specific constraints.

---
## Function Prototype

```c
int ft_printf(const char *format, ...);
````
---
## Supported Format Specifiers

| Specifier | Description |
|-----------|-------------|
| `%c`      | Prints a single character. |
| `%s`      | Prints a null-terminated string. |
| `%p`      | Prints a pointer address in hexadecimal format. Returns `(nil)` if `NULL`. |
| `%d`, `%i`| Prints an integer as a signed decimal number. |
| `%u`      | Prints an unsigned decimal number. |
| `%x`      | Prints an unsigned decimal number as a lowercase hexadecimal. |
| `%X`      | Prints an unsigned decimal number as an uppercase hexadecimal. |
| `%%`      | Prints a literal `%` character. |

### Special Details: Pointer Representation (`%p`)

- Pointers are converted to hexadecimal.
- If the pointer is NULL, (nil) is printed for consistency with the standard behavior.
- The type unsigned long long is used to handle any pointer size.

## Return Value
- Returns the total number of characters printed, excluding the null-terminating character.
- If an error occurs, the function returns a negative value.

## How `ft_printf` Works

1. **Literal Copying**: Characters from the format string are copied directly to the output until a `%` is encountered.
2. **Specifier Handling**: When a `%` is encountered, the next character is interpreted as a format specifier.
3. **Variadic Argument Parsing**:
   - The `stdarg.h` library is used to handle variable arguments:
     - `va_start` initializes the argument list.
     - `va_arg` retrieves arguments.
     - `va_end` cleans up the list.

## Example

```c
ft_printf("Hello %s, your score is %d%%!\n", "Alice", 95);
````
```c
Hello Alice, your score is 95%!
````
---
## Variadic Function Overview
`ft_printf`leverages variadic functions to handle a flexible number of arguments. Here's a breakdown:

- **`va_list`**: Defines a list to store the arguments.
- **`va_start`**: Initializes the list with a mandatory argument (`format` in this case).
- **`va_arg`**: Accesses each argument in sequence.
- **`va_end`**: Frees resources allocated to the list.
- 
## Makefile

### Targets
- `all`:Compiles the library `libftprintf.a`.
- `clean`: Removes object files.
- `fclean`: Removes object files and the library.
- `re`: Cleans and recompiles the library.

### Variables
- **NAME**: Output library name (`libftprintf.a`).
- **SOURCES**: List of `.c` source files..
- **OBJECTS**: Generated object files (`.o`).
- **CC**: Compile (`cc`).
- **CFLAGS**: Compiler flags (`-Wall -Wextra -Werror`).

## Files

### Source Files
- `ft_printf.c`: Main implementation of `ft_printf`.
- `ft_putcharint.c`: Outputs a single character.
- `ft_putstrint.c`: Outputs a string.
- `ft_voidhex.c`: Converts and prints pointers in hexadecimal format.
- `ft_putnbrint.c`: Prints integers.
- `ft_putnbrun.c`: Prints unsigned integers.
- `ft_lowerhex.c`: Converts and prints numbers in lowercase hexadecimal.
- `ft_upperhex.c`: Converts and prints numbers in uppercase hexadecimal.

## Why Use `ft_printf`?

Recreating `printf` is a foundational project in C that strengthens understanding of:

- Variadic functions.
- Memory management.
- Efficient data formatting and output.
- Adherence to standard C library behaviors.

This project provides a robust tool for those learning or refining their C programming skills, particularly in low-level systems programming.

