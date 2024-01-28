## Authorized functions and macros

```c
1. write (man 2 write)
2. malloc (man 3 malloc)
3. free (man 3 free)
4. va_start (man 3 va_start)
5. va_end (man 3 va_end)
6. va_copy (man 3 va_copy)
7. va_arg (man 3 va_arg)
```

## gcc options

```bash
gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c
```

## script for Betty tests on all c files and header files

```bash
 ./betty_check.sh
```

## script for compiling c files in the test directory

```bash
./test.sh
```
