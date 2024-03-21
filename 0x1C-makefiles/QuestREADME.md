INSTRUCTIONS FOR 0x1C-makefiles Project
Resources
Read or watch:

What is a makefile and how does it work :https://opensource.com/article/18/8/what-how-makefile
Installing the make utility : https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/
make-official documentation : https://www.gnu.org/software/make/manual/html_node/
More about Makefile : google

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone:https://fs.blog/feynman-learning-technique/ , without the help of Google:

General
What are make, Makefiles
When, why and how to use Makefiles
What are rules and how to set and use them
What are explicit and implicit rules
What are the most common / useful rules
What are variables and how to set and use them
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
OS: Ubuntu 20.04 LTS
Version of gcc: 9.3.0
Version of make: GNU Make 4.2.1
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
More Info
Files
In the following tasks, we are going to use these files. We want to compile these only.

Tasks
0. make -f 0-Makefile
mandatory
Score: 0.0% (Checks completed: 0.0%)
Create your first Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: none
File: 0-Makefile

1. make -f 1-Makefile
mandatory
Score: 0.0% (Checks completed: 0.0%)
Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC
CC: the compiler to be used
SRC: the .c files
File: 1-Makefile

2. make -f 2-Makefile
mandatory
Score: 0.0% (Checks completed: 0.0%)
Create your first useful Makefile.

Requirements:

name of the executable: school
rules: all
The all rule builds your executable
variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
The all rule should recompile only the updated source files
You are not allowed to have a list of all the .o files
File: 2-Makefile

3. make -f 3-Makefile
mandatory
Score: 0.0% (Checks completed: 0.0%)
Requirements:

name of the executable: school
rules: all, clean, oclean, fclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files
File: 3-Makefile

4. A complete Makefile
mandatory
Score: 0.0% (Checks completed: 0.0%)
Requirements:

name of the executable: school
rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail

You are not allowed to have a list of all the .o files
File: 4-Makefile

5. Island Perimeter
mandatory
Score: 0.0% (Checks completed: 0.0%)
Technical interview preparation:

You are not allowed to google anything
Whiteboard first
Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally).
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).
Requirements:

First line contains #!/usr/bin/python3
You are not allowed to import any module
Module and function must be documented
File: 5-island_perimeter.py

ADVANCED TASK
6. make -f 100-Makefile
#advanced
Score: 0.0% (Checks completed: 0.0%)
Requirements:

name of the executable: school
rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail
You are not allowed to have a list of all the .o files
You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
You are not allowed to use the string $(CC) more than once in your Makefile
You are only allowed to use the string $(RM) twice in your Makefile
You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
You are not allowed to have an $(OBJ) rule
You are not allowed to use the %.o: %.c rule
Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
Your Makefile should not compile if the header file m.h is missing
File: 100-Makefile

