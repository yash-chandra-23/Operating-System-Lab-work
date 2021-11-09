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
while(1);
sleep(50);
}
else
{
exit(0);
}
return 0;
}
