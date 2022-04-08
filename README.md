<p align="center">
  <img src="https://ml.globenewswire.com/Resource/Download/d138c375-4652-4de1-9ca2-0079e2686576" />
</p>

# Simple Shell Project 

sHell is a command line interpreter that takes the most basic commands that are present in the shell bash.
Standard functions and system calls employed in sHell include: access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.


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
|  `s`      |  s|
|  `s`      |  s|
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
