
## SIMPLE_SHELL

1.0 getppid.c  a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?
1.1 _proc_sys_kernel_pid_max - a shell script that prints the maximum value a process ID can be.
2.0. av.c - (Write a program that prints all the arguments, without using ac.)
2.1. Read_Line.c - (getline) a program that prints "$ ", wait for the user to enter a command, prints it on the next line.
2.2. command_line_to_av.c -a function that splits a string and returns an array of each word of the string.
3. execve.c - Executing a program. The system call execve allows a process to execute another program (man 2 execve). Note that this system call does load the new program into the current process memory in place of the previous program: on success execve does not return to continue the rest of the previous program.
4. fork.c - The system call fork (man 2 fork) creates a new child process, almost identical to the parent (the process that calls fork). Once fork successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.
4.1. fork.c - Using the return value of fork, it is possible to know if the current process is the father or the child: fork will return 0 to the child, and the PID of the child to the father.
5.wait.c - The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates.
6. fork+wait+execve.c - Exercise: fork + wait + execve Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.
