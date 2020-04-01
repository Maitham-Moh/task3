#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc , char *argv[])
{
   pid_t id;
   id=fork();
   if(id<0)
     printf("fork failed\n");
   if(id>0)
     {
	printf("parent pid %d\n",(int)getpid());
     } 
   if(id==0)
     {
	printf("chiled pid %d\n",(int)getpid());	
     }
   return 0;
}
