# Simple Shell

This is a project to create a simple shell, where basic functions will be implemented and executed.

## Description

The simple shell is a command line interpreter where it provides direct communication between the user and the machine. This shell includes the basic functionality found in the traditional Unix shell.

## Repository Contents
Simple Shell files:

File  | Description
------------- | -------------
dragola.h  | Header file, contains all the functions, structures and standard C libraries.
0-main.c  | Contains the functions that execute the shell.
1-Func_put_path.c | Creates the path for a command.
2-FindPath.c | Finds the path in the environment variables.
3-AppendPath.c | Adds the path to a command if it doesn't have it.
A-Support.c | Contains support functions.
B-Support.c | Contains support functions.
C-Support.c | Contains support functions.
_man_1_simple_shell | Contains the manual page simple shell.
AUTHORS | Contains the names of the contributors content to the repository.

## Environment
Simple Shell was built and tested in the Ubuntu 14.04 LTS with Vagrant in VirtualBox and compiled with GCC version 4.8.4.

## How to Install
Clone the repositoy below:
```bash
https://github.com/MarcoANT9/simple_shell.git
```
## How to Compile
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## Example output
```bash
vagrant@vagrant-ubuntu-trusty-64:$ ./hsh
(° -°)> pwd
/home/vagrant/simple_shell
(° -°)> /bin/ls
0-main.c          4-Func_put_path.c  A-interpreter.c  dragola.h  lsscript            shell_test_suite
1-echo_shell.c    5-FindPath.c       AUTHORS          hsh        man_1_simple_shell
2-prompt_shell.c  6-AppendPath.c     backup           ls2        README.md
(° -°)> ls -la
total 100
drwxrwxr-x  5 vagrant vagrant  4096 Nov 26 18:31 .
drwxr-xr-x 20 vagrant vagrant  4096 Nov 26 18:31 ..
-rw-rw-r--  1 vagrant vagrant   533 Nov 26 00:42 0-main.c
-rw-rw-r--  1 vagrant vagrant  1182 Nov 26 00:42 1-echo_shell.c
-rw-rw-r--  1 vagrant vagrant  3538 Nov 26 00:42 2-prompt_shell.c
-rw-rw-r--  1 vagrant vagrant   635 Nov 26 00:42 4-Func_put_path.c
-rw-rw-r--  1 vagrant vagrant  1656 Nov 26 00:42 5-FindPath.c
-rw-rw-r--  1 vagrant vagrant  1396 Nov 26 00:42 6-AppendPath.c
-rw-rw-r--  1 vagrant vagrant   851 Nov 26 18:31 A-interpreter.c
-rw-rw-r--  1 vagrant vagrant   168 Nov 23 16:45 AUTHORS
drwxrwxr-x  2 vagrant vagrant  4096 Nov 26 00:42 backup
-rw-rw-r--  1 vagrant vagrant  1466 Nov 25 20:58 dragola.h
drwxrwxr-x  8 vagrant vagrant  4096 Nov 26 18:32 .git
-rwxrwxr-x  1 vagrant vagrant 13917 Nov 26 00:42 hsh
-rw-rw-r--  1 vagrant vagrant    46 Nov 20 18:28 ls2
-rw-rw-r--  1 vagrant vagrant     6 Nov 26 00:42 lsscript
-rw-rw-r--  1 vagrant vagrant   864 Nov 23 23:34 man_1_simple_shell
-rw-rw-r--  1 vagrant vagrant  1652 Nov 26 16:29 README.md
-rw-r--r--  1 vagrant vagrant 12288 Nov 26 18:42 .README.md.swp
drwxrwxr-x  2 vagrant vagrant  4096 Nov 20 18:28 shell_test_suite
(° -°)>
```
## Autors
* [Marco Antonio Niño](https://github.com/MarcoANT9 "Marco Antonio Niño").
* [Luz Sánchez](https://github.com/zulsb "Luz Sanchez").

## License
Simple Shell is licensed under the MIT License.
