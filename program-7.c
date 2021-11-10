/*Week-09
Scheduling Algorithm "First come First serve"(FCFS)*/
#include<stdio.h>
# define max 25
int main()
{

int n, bt[max],wt[max],tat[max],avwt=0,avtat=0,i,j; 
 /*bt= burst time , wt= waiting time , tat= turn around time,avwt=average waiting time,avtat=average turn around time */
/*Assuming arrival time zero in the program */
printf("Enter the number of processor you want to enter \n");
scanf("%d",&n);
printf("Enter the burst time \n");
for(i=0;i<n;i++)
{
printf("P[%d]:-  ",i+1);
scanf("%d",&bt[i]);

}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
{
wt[i]+=bt[j];
}
}
printf("\n Processor \t Burst Time \t Waiting Time \t Turn Around Time ");
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
avwt=avwt+wt[i];
avtat=avtat+tat[i];
printf("\n p[%d]\t\t\%d\t\t%d\t\t%d ",i+1,bt[i],wt[i],tat[i]);
}
avwt/=i;
avtat/=i;
printf("\nAverage waiting Time= %d",avwt);
printf("\nAverage turn around Time = %d",avtat);
return 0;
}
