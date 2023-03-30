# Libft-42

Libft-42 is a C library project at 42 coding school, implementing a collection of commonly used functions in C programming. This project aims to help students understand the basics of C programming, memory management, data structures, and algorithms.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Functions](#functions)
  - [Character Functions](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [List Functions](#list-functions)
  - [Additional Functions](#additional-functions)

## Features

- A collection of C functions for string manipulation, memory management, and basic data structures (e.g., linked lists).
- Functions are implemented according to the 42 coding school Norminette rules.
- Tested for reliability and performance.

## Getting Started

### Prerequisites

- GCC (GNU Compiler Collection)
- Make (GNU Make)

### Installation

1. Clone the repository:

```bash
git clone https://github.com/csstudentanas/Libft-42.git
```

2. Change to the `Libft-42` directory:

```bash
cd Libft-42
```

3. Compile the library:
```bash
make
```
### Usage
To use the `libft.a` library in your C projects, simply include the libft.h header file and link the library during compilation:
```bash
#include "libft.h"
gcc your_c_file.c -L. -lft -o your_program
```

## Functions

The Libft-42 library includes the following functions:
### Character Functions

These functions perform character classification, conversion, and comparison operations.

* [`ft_isalpha`](https://github.com/csstudentanas/Libft-42/blob/main/ft_isalpha.c): Checks if a character is an alphabetic character.
* [`ft_isdigit`](https://github.com/csstudentanas/Libft-42/blob/main/ft_isdigit.c): Checks if a character is a digit.
* [`ft_isalnum`](https://github.com/csstudentanas/Libft-42/blob/main/ft_isalnum.c): Checks if a character is an alphanumeric character.
* [`ft_isascii`](https://github.com/csstudentanas/Libft-42/blob/main/ft_isascii.c): Checks if a character is an ASCII character.
* [`ft_isprint`](https://github.com/csstudentanas/Libft-42/blob/main/ft_isprint.c): Checks if a character is a printable character.
* [`ft_toupper`](https://github.com/csstudentanas/Libft-42/blob/main/ft_toupper.c): Converts a lowercase character to uppercase.
* [`ft_tolower`](https://github.com/csstudentanas/Libft-42/blob/main/ft_tolower.c): Converts an uppercase character to lowercase.

### String Functions

These functions handle string manipulation, copying, concatenation, searching, and comparison tasks.

* [`ft_strlen`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strlen.c): Calculates the length of a string.
* [`ft_strlcpy`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strlcpy.c): Safely copies a string to another buffer.
* [`ft_strlcat`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strlcat.c): Safely concatenates two strings.
* [`ft_strchr`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strchr.c): Locates the first occurrence of a character in a string.
* [`ft_strrchr`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strrchr.c): Locates the last occurrence of a character in a string.
* [`ft_strnstr`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strnstr.c): Locates the first occurrence of a substring in a string, with a maximum length.
* [`ft_strncmp`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strncmp.c): Compares two strings up to a maximum length.
* [`ft_atoi`](https://github.com/csstudentanas/Libft-42/blob/main/ft_atoi.c): Converts a string to an integer.
* [`ft_strdup`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strdup.c): Creates a duplicate of a string.

### Memory Functions

These functions manage memory operations, including setting, copying, moving, searching, and comparison.

* [`ft_memset`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memset.c): Fills a memory block with a specified value.
* [`ft_bzero`](https://github.com/csstudentanas/Libft-42/blob/main/ft_bzero.c): Sets the contents of a memory block to zero.
* [`ft_memcpy`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memcpy.c): Copies a memory block from source to destination.
* [`ft_memccpy`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memccpy.c): Copies a memory block from source to destination until a certain character is reached.
* [`ft_memmove`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memmove.c): Copies a memory block from source to destination, even if the two blocks overlap.
* [`ft_memchr`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memchr.c): Locates the first occurrence of a character in a memory block.
* [`ft_memcmp`](https://github.com/csstudentanas/Libft-42/blob/main/ft_memcmp.c): Compares two memory blocks up to a maximum length.

### List Functions

These functions deal with linked list operations, such as creation, addition, deletion, iteration, and transformation.

* [`ft_lstnew`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstnew.c): Creates a new node for a linked list.
* [`ft_lstadd_front`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstadd_front.c): Adds a new node to the beginning of a linked list.
* [`ft_lstsize`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstsize.c): Counts the number of nodes in a linked list.
* [`ft_lstlast`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstlast.c): Returns the last node of a linked list.
* [`ft_lstadd_back`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstadd_back.c): Adds a new node to the end of a linked list.
* [`ft_lstdelone`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstdelone.c): Deletes a node from a linked list.
* [`ft_lstclear`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstclear.c): Deletes all nodes from a linked list.
* [`ft_lstiter`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstiter.c): Iterates through a linked list and applies a function to each node.
* [`ft_lstmap`](https://github.com/csstudentanas/Libft-42/blob/main/ft_lstmap.c): Iterates through a linked list, applies a function to each node, and creates a new list with the results.

### Additional Functions

These functions provide supplementary functionality, including string trimming, splitting, integer-to-string conversion, character mapping, and output to file descriptors.

* [`ft_strtrim`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strtrim.c): Trims whitespace characters from the beginning and end of a string.
* [`ft_split`](https://github.com/csstudentanas/Libft-42/blob/main/ft_split.c): Splits a string into substrings based on a delimiter.
* [`ft_itoa`](https://github.com/csstudentanas/Libft-42/blob/main/ft_itoa.c): Converts an integer to a string.
* [`ft_strmapi`](https://github.com/csstudentanas/Libft-42/blob/main/ft_strmapi.c): Applies a function to each character in a string.
* [`ft_putchar_fd`](https://github.com/csstudentanas/Libft-42/blob/main/ft_putchar_fd.c): Outputs a character to a specified file descriptor.
* [`ft_putstr_fd`](https://github.com/csstudentanas/Libft-42/blob/main/ft_putstr_fd.c): Outputs a string to a specified file descriptor.
* [`ft_putendl_fd`](https://github.com/csstudentanas/Libft-42/blob/main/ft_putendl_fd.c): Outputs a string followed by a newline to a specified file descriptor.
* [`ft_putnbr_fd`](https://github.com/csstudentanas/Libft-42/blob/main/ft_putnbr_fd.c): Outputs an integer to a specified file descriptor.

