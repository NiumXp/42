# 42
My 42 basecamp solutions

## Utils
Runs the last `.c` file saved
```sh
alias run='gcc $(find -type f -name "*.c" -printf "%TD+%TT %p\n" | sort -r | head -n 1 | sed "s/.* //") -o r -Wall -Werror -Wextra && ./r && rm ./r'
```
