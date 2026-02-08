// Program where all all types of user-defined function are used.

#include <stdio.h>

int main()
{
    f1();
    f2(2,3);
    printf("\nResult of f3() = %d\n",f3());
    printf("\nResult of f4() = %d\n",f4(4,6));
    return 0;
}

// No passing of arguments and no return of value
void f1()
{ 
    int a = 5;
    printf("\nResult of f1() No arg no return just printing the local variable value = %d\n",a); 
}

// Passing of arguments but no return of value
void f2(int a,int b)
{ 
    printf("\nResult of f2() the sum is =%d\n",a+b); 
}

// No passing of arguments but return of value
int f3()
{ 
    return 5+3; 
}

// Passing of arguments and return of value
int f4(int a,int b)
{ 
    return a+b; 
}

