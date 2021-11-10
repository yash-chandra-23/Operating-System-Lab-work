PROGRAM:

MESSAGE QUEUE (WRITER PROCESS):

#include<stdio.h>	//HEADER FILES

#include<string.h>

#include<sys/ipc.h>

#include<sys/msg.h>

#include<sys/types.h>

structmsgbuf	//STRUCTURE

{

long mtype;

char mtext[100];

}svarname;

int main()	//MAIN FUNCTION

{

key_t key; int msgid ,c;

key=ftok("progfile",'A'); msgid=msgget(key,0666|IPC_CREAT); svarname.mtype=1;

printf("\nEnter a string : "); gets(svarname.mtext);

c=msgsnd(msgid,&svarname,strlen(svarname.mtext),0); printf("Sender wrote the text :\t %s \n",svarname.mtext); return(0);

}	//END OF MAIN


MESSAGE QUEUE (READER PROCESS):

#include<stdio.h>	//HEADER FILES

#include<string.h>

#include<sys/ipc.h>

#include<sys/msg.h>

#include<sys/types.h>

structmsgbuf	//STRUCTURE

{

long mtype;

char mtext[100];

}svarname;

int main()	//MAIN FUNCTION
 

{

key_t key; int msgid ,c;

key=ftok("progfile",'A'); msgid=msgget(key,0666|IPC_CREAT); msgrcv(msgid,&svarname,sizeof(svarname),1,0); printf("Data Received is : \t %s \n",svarname.mtext); msgctl(msgid,IPC_RMID,NULL);

return 0;

}
