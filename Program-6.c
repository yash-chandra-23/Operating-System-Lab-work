/*Week-4
Implementation of Zombie process */
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
pid_t pid;
pid=fork();
if(pid!=0)
{
 printf("I am parent \n");
while(1);
sleep(10);
}
else
{
  printf("I am child")
exit(0);
}
return 0;
}
