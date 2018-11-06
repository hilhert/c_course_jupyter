#include <stdio.h>  
   static int T1=0;  // 定义外部静态变量
   int outer=1;      // 定义外部自动变量
   int* func(int a,int b){  //参数a，b视作函数域内变量, 函数内部所有域均可见，被调用时赋值。
    
    int inner=4;          //函数域内的自动变量
    static int T2=5;
    {
       
        int innerfield=6;    //innerfield在{...} 外部不可见,但该域可见inner，outer。
        static int T3=7;
        //return &T3;//return &innerfield;                   
        {
           int innerinnerfield=8; //域中可有域，该域可见inner，innerfield，outer。
           static int T4;
           T4=a+b+outer+T3+T2+T1; 
           return &T4; //直接退出函数栈，返回变量T4的地址。
        }
        printf("%d\n",T3);
        printf("%d\n",T2);
        printf("%d\n",innerfield);
        printf("%d\n",a);
        printf("%d\n",b);
    }
    printf("%d\n",T2);
}