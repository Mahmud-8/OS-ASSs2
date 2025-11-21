# Operating Systems 
Process Management, Linker, and Loader

## Overview
This project includes the tasks from Lab 5 of the Operating Systems course.  
The lab focuses on:

- Creating processes using `fork()`
- Using `waitpid()` for parent–child synchronization
- Starting, stopping, pausing, and resuming processes
- Understanding the role of the linker
- Understanding the role of the loader
- Checking dynamic libraries with `ldd`

All programs are written in C and compiled on Ubuntu Linux.

## Files Included
- process_creation.c  
- fork_wait.c  
- file1.c  
- file2.c  
- simple_program.c  
- Makefile  
- answers.txt  
- LICENSE  
- README.md  

## How to Compile
```bash
make
```

Clean executables:
```bash
make clean
```

## How to Run the Programs
```bash
./process_creation
./fork_wait
./output_program
./simple_program
ldd simple_program
```

## Screenshots Required
1. make  
2. ./process_creation  
3. ./fork_wait  
4. ./output_program  
5. ./simple_program  
6. ldd simple_program  

## Install Build Tools (Ubuntu)
```bash
sudo apt update
sudo apt install build-essential gcc make
```

## Author
Mahmoud Emad

## License
MIT License (see LICENSE file)
