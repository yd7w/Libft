<div align="center">
  <img src="https://raw.githubusercontent.com/PKief/vscode-material-icon-theme/main/icons/lib.svg" alt="libft" width="100" />

### LIBFT
`libft` is my implementation of some of the Standard C Library functions and some additional ones that can be used in future 42 School projects. This project helps to understand the way these functions actually work, implement and learn to use them.

### 📌 Libc Functions
Re-implementation of some of the standard C library functions:

- Memory: `memset`, `bzero`, `memcpy`, `memccpy`, `memmove`, `memchr`, `memcmp`
- String: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`
- Type: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- Stdlib: `atoi`, `calloc`

### 📌 Additional Functions
A set of functions that are either not in the libc, or that are part of it but in a different form:

- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`
- File I/O: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 📌 Bonus Functions
Functions to manipulate linked lists:

- `ft_lstnew`: Create new list element
- `ft_lstadd_front`: Add element at beginning of list
- `ft_lstsize`: Count elements in list
- `ft_lstlast`: Return last element
- `ft_lstadd_back`: Add element at end
- `ft_lstdelone`: Delete element from list
- `ft_lstclear`: Delete sequence of elements
- `ft_lstiter`: Apply function to content of all list's elements
- `ft_lstmap`: Apply function to content of all list's elements into new list

  ## 📖 Documentation

Each function is documented in the header file `Libft.h`. For detailed documentation of each function, refer to the man pages of their original libc counterparts.

[![Project Status: Active](https://img.shields.io/badge/Project%20Status-Active-green.svg)](https://github.com/yd7w/Libft)
