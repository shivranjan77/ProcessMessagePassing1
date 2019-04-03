#include <string.h>
#include<stdio.h>
#include <unistd.h>   
#include<stdlib.h>
#include <sys/wait.h> 
#include <ctype.h>                         
int main(void)
{
int pid;
char st[70];
int fd1[2],fd2[2];
pipe(fd1);
pipe(fd2);
pid = fork();
