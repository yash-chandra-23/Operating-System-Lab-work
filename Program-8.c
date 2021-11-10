PROGRAM:

FIFO (WRITER PROCESS):

#include<stdio.h>	//HEADER FILES

#include<string.h>

#include<sys/stat.h>

#include<fcntl.h>
 

intmain()	//MAIN FUNCTION

{

int fd ,nbw; char str[100];

mknod("myfifo",S_IFIFO|0666,0); printf("Writing for reader Process:\n\t"); fd=open("myfifo",O_WRONLY); while(gets(str))

{

nbw=write(fd,str,strlen(str));

printf("Writer process write %d bytes: %s\n",nbw,str);

}

return 0;

}	//END OF MAIN


FIFO (READER PROCESS):

#include<stdio.h>	//HEADER FILES

#include<string.h>

#include<sys/stat.h>

#include<fcntl.h>

int main()	//MAIN FUNCTION

{

int fd ,nbr; char arr[100];

mknod("myfifo",S_IFIFO|0666,0); fd=open("myfifo",O_RDONLY);

printf("If you got a writer process then type some data \n");

do

{

nbr=read(fd,arr,sizeof(arr));

arr[nbr]='\0';

printf("Reader process read %d bytes: %s\n",nbr,arr); }while(nbr>0);

return 0;

}
