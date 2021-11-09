/* Week-1
 Demonstration of FORK() System Call*/
/* Multiple FORK Implementation */
#include<stdio.h>
#include<unistd.h>
int main()
{
fork();
printf("Linux  \n");
fork();
printf("Unix \n");
fork();
printf("Red Hat \n");
return 0;

}

