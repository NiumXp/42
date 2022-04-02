#!/bin/sh

# Create all object files
gcc -Wall -Wextra -Werror -c *.c

# Create an archive with all *.o and links other symbols
ar -rc -s libft.a *.o

# Delete all object files
rm *.o
