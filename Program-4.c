*Week-3
Demonstration of wait () System Call */

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main()
{
int status;
pid_t pid;
pid=fork();
if(pid==0)
{
printf("I am child \n");
exit(0);
}
else
{
wait(&status);
printf("I am parent \n");
printf("The child PID = %d \n ",pid);
}
return 0;
}

