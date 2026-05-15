*This project has been created as part of the 42 curriculum by andmigue.*

# Libft

## Description

**Libft** is a custom C library built as part of the 42 school curriculum. The goal is to re-implement a selection of standard C library functions (`libc`) from scratch, deepening the understanding of low-level programming, memory management, and data structures in C.

The library is divided into three parts:

- **Libc functions** — re-implementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_strchr`, `ft_atoi`, and more.
- **Additional functions** — utility functions not found in `libc` but useful for future projects, such as `ft_substr`, `ft_strjoin`, `ft_itoa`, `ft_putstr_fd`, and more.
- **Linked list functions** — a set of functions to manipulate singly linked lists using the `t_list` struct defined in `libft.h`, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, `ft_lstclear`, and more.

---

## Instructions

### Requirements

- `cc` compiler
- `make`
- A Unix-based system (Linux or macOS)

### Compilation

Clone the repository and run:

```bash
git clone <your_repo_url> Libft
cd Libft
make
```

This will generate a `libft.a` static library file and object files for all functions.

### Usage

Include the library when compiling your project:

```bash
cc -Wall -Werror -Wextra your_file.c libft.a
```

Include the header in your source files:

```c
#include "libft.h"
```

### Makefile Rules

| Rule | Description |
|------|-------------|
| `make` | Compiles all source files and creates `libft.a` |
| `make clean` | Removes all object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Runs `fclean` then `make` |

---

## Library Overview

### Libc Functions

Re-implementations of standard C library functions:

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills a memory area with a given byte value |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area to a destination |
| `ft_memmove` | Copies a memory area, handling overlap correctly |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Locates the first occurrence of a character in a string |
| `ft_strrchr` | Locates the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n bytes |
| `ft_memchr` | Scans a memory area for a given byte |
| `ft_memcmp` | Compares two memory areas |
| `ft_strnstr` | Locates a substring within a string |
| `ft_atoi` | Converts a string representation of an integer to an `int` |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string into a newly allocated buffer |

### Additional Functions

Utility functions not present in the standard `libc`:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new allocation |
| `ft_strtrim` | Trims characters from the start and end of a string |
| `ft_split` | Splits a string by a delimiter into a null-terminated array |
| `ft_itoa` | Converts an integer to its string representation |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Linked List Functions

Functions to manipulate singly linked lists using the `t_list` struct:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Allocates and returns a new list node |
| `ft_lstadd_front` | Adds a node at the front of the list |
| `ft_lstsize` | Returns the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds a node at the back of the list |
| `ft_lstdelone` | Frees a single node using a given delete function |
| `ft_lstclear` | Frees all nodes of the list using a given delete function |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Applies a function to each node and returns a new list |

---

## Resources

### Documentation & References

- [GNU C Library documentation](https://www.gnu.org/software/libc/manual/)
- [cppreference.com — C standard library](https://en.cppreference.com/w/c)
- [42 Docs — libft subject](https://cdn.intra.42.fr/pdf/pdf/960/libft.en.subject.pdf)

### AI Usage

Claude (claude.ai) was used during this project for the following purposes:

- Helping understand the expected behaviour of certain standard C functions
- Reviewing edge cases such as NULL inputs, empty strings, and boundary conditions
- Debugging specific functions by identifying logical errors and undefined behaviour
- Inspiration for the structure and content of this README