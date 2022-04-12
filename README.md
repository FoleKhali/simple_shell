<p align="center">
  <img src= "https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="40%" width="30%" />
</p>

# Simple sHell Project 

sHell is a command line interpreter that takes the most basic commands that are present in the shell bash.
Standard functions and system calls employed in sHell include: access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.

## Files of this repository

| File      | Description                |
| :-------- | :------------------------- |
|  `sHell.c`           | It contains the entry point of the program, where the execution begins. It shows the prompt and receives the characters written in the command line. |
|  `sshell.h`          | It is a header file that contains all the c libraries needed for the program, the description and prototypes of all the functions, structures, builtins, printing functions, and helpers. |
|  `token.c`           | It save the parts to be analyzed later.|
|  `execute_cmd.c`     | It tries to execute the string as a command. |
|  `new_defuncions.c`  | It contains the code for the environment and exit function components that are included in the program. |
|  `defuncion.c`       | It contains the code of the builtins included in the program. |
|  `man_1_simple_shell`| It is the manual for using the shell. Contains a description, ways for invocation, and some examples of builtins and executables that can be used inside the command line interpreter. |
|  `AUTHORS`           | It contains the authors of the project |

## Installation


- Clone this repository: `git clone "https://github.com/FoleKhali/simple_shell.git"`

- Change directories into the repository: `cd simple_shell`

- Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o sHell`

- Run the shell in interactive mode: `./sHell`

- Or run the shell in non-interactive mode: `echo "ls" | ./sHell`

## List of useful commands

| Command   | Description                |
| :-------- | :------------------------- |
|  `ls`     | list and generate statistics for files |
|  `pwd`    | print working directory                     |
| `cd`      | change the current working directory |
| `cp`      | copy content from a source to a destination |
|  `mkdir`  | creates a directory|
|  `rm`     | delete files or directories|
| `mv`      | move items or rename them |
| `touch`   | create an empty directory (or change the date) |
| `cat`     | view the content of a text file |
| `exit`    | exits the shell |

## Interactive Mode
The shell runs continuously, awaiting and executing commands, until you explicitly exit.
```bash
juan@DESKTOP-7TSD7AR:~/shell$ ./sHell
#Cisfun$
#Cisfun$ ls
AUTHORS        elprompt.c      execute_cmd.c    sshell.h    README.md      
#Cisfun$ exit
juan@DESKTOP-7TSD7AR:~/shell$
```

## Non-Interactive Mode
Non-interactive mode, however, is when you indirectly feed commands into the executable hsh file from outside the shell. For example, we can list files by indirectly piping ls into hsh using echo:
```bash
juan@DESKTOP-7TSD7AR:~/shell$ echo "/bin/ls" | ./sHell
AUTHORS        elprompt.c      execute_cmd.c    sshell.h    README.md               
juan@DESKTOP-7TSD7AR:~/shell$
```
## Authors


- Juan Salinas | [GitHub](https://github.com/JSM788)  
- Dhana Palomino | [GitHub](https://github.com/FoleKhali)
