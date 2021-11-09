/* Week-2
 Parent process computes the SUM OF EVEN and Child process computes the SUM OF ODD NUMBER using fork*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#define max 100
int main()
{
pid_t pid;
int arr[max],n,sum=0,i,status;

printf("Enter the number of terms you want to enter in array \n");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

pid=fork();
wait(&status);
if(pid == 0)
{
 for(i=0;i<n;i++)
  {
   if(arr[i]%2==0)
    {
     sum=sum+arr[i];
     }
  }
    printf("Sum of even number = %d \n",sum);
exit(0);
}
else
{
for(i=0;i<n;i++)
  {
    if(arr[i]%2!=0)
     {
     sum=sum+arr[i];
     }
   }
    printf("Sum of odd number= %d \n",sum);
   
}


return 0;
}
