# Simple Shell

This is a final project to create a simple shell, where basic functions will be implemented and executed.

## Description

The simple shell is a command line interpreter that was first conceived by Ken Thompson in 1971. Users can direct the operation of the computer by entering commands as text for a command line interpreter to execute, or by creating text scripts of one or more such commands. This shell includes basic functionality found in the traditional Unix shell. 

## Repository Contents
Simple Shell files:

File  | Description
------------- | -------------
dragola.h  | Contains all the functions, structures and standard C library header file.
main.c  | Content Cell 
_shell.c | Content Cell
_man_1_simple_shell | Contains the manual page simple shell.

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
$ ls
/home/vagrant/simple_shell
$ /bin/ls
/home/vagrant/simple_shell
$ ls -la
```
## Autors
* [Marco Antonio Niño](https://github.com/MarcoANT9 "Marco Antonio Niño").
* [Luz Sánchez](https://github.com/zulsb "Luz Sanchez").

## License
Simple Shell is licensed under the MIT License.
