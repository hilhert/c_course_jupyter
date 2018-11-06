//testextern.c
//testextern.c
#include "testextern.h"
#include <stdio.h>
extern int outer;  // extern 修饰符，声明outer为testextern.h或stdio.h中的outer。
int main(){
    printf("%d\n",outer);
    return -1;
}