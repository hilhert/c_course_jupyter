#include "m_strop.h"
#include <stdio.h>
int main(){
int counter=0;
char line[1000];
char t[]="es";    
while(readline(line)) if(strindex(line,t)>=0) counter++; 
printf("%d lines include:%s\n",counter,t);
return -1;    
}