/*Week -4
 Implementation of Orphan Process  */
#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
pid=fork();

if(pid == 0)
{
  sleep(1);
 printf("I am child and my pid= %d and parent id =%d \n",getpid(),getppid());
}
else
{
printf("I am Parent my child id= %d \n and my PID= %d \n",pid,getppid());
}
printf(" Terminating PID = %d \n",getpid());
return 0;
}
