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

* `ft_isalpha`: Checks if a character is an alphabetic character.
* `ft_isdigit`: Checks if a character is a digit.
* `ft_isalnum`: Checks if a character is an alphanumeric character.
* `ft_isascii`: Checks if a character is an ASCII character.
* `ft_isprint`: Checks if a character is a printable character.
* `ft_toupper`: Converts a lowercase character to uppercase.
* `ft_tolower`: Converts an uppercase character to lowercase.

### String Functions

* `ft_strlen`: Calculates the length of a string.
* `ft_strlcpy`: Safely copies a string to another buffer.
* `ft_strlcat`: Safely concatenates two strings.
* `ft_strchr`: Locates the first occurrence of a character in a string.
* `ft_strrchr`: Locates the last occurrence of a character in a string.
* `ft_strnstr`: Locates the first occurrence of a substring in a string, with a maximum length.
* `ft_strncmp`: Compares two strings up to a maximum length.
* `ft_atoi`: Converts a string to an integer.
* `ft_strdup`: Creates a duplicate of a string.

### Memory Functions

* `ft_memset`: Fills a memory block with a specified value.
* `ft_bzero`: Sets the contents of a memory block to zero.
* `ft_memcpy`: Copies a memory block from source to destination.
* `ft_memccpy`: Copies a memory block from source to destination until a certain character is reached.
* `ft_memmove`: Copies a memory block from source to destination, even if the two blocks overlap.
* `ft_memchr`: Locates the first occurrence of a character in a memory block.
* `ft_memcmp`: Compares two memory blocks up to a maximum length.

### List Functions
* `ft_lstnew`: Creates a new list node.
* `ft_lstadd_front`: Adds a new node to the beginning of a list.
* `ft_lstsize`: Counts the number of nodes in a list.
* `ft_lstlast`: Returns the last node of a list.
* `ft_lstadd_back`: Adds a new node to the end of a list.
* `ft_lstdelone`: Deletes a node from a list, without deleting its content.
* `ft_lstclear`: Deletes all nodes from a list, without deleting their content.
* `ft_lstiter`: Iterates through a list, applying a function to each node.
* `ft_lstmap`: Creates a new list, applying a function to each node of an existing list.

### Additional Functions
* `ft_isspace`: Checks if a character is a whitespace character.
* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings.
* `ft_strtrim`: Removes specified characters from the beginning and end of a string.
* `ft_split`: Splits a string into substrings, using a specified delimiter character.
* `ft_itoa`: Converts an integer to a string.
* `ft_strmapi`: Applies a function to each character of a string.
* `ft_putchar_fd`: Outputs a character to a specified file descriptor.
* `ft_putstr_fd`: Outputs a string to a specified file descriptor.
* `ft_putendl_fd`: Outputs a string followed by a newline to a specified file descriptor.
* `ft_putnbr_fd`: Outputs an integer to a specified file
