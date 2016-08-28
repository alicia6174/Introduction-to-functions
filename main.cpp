#include <stdio.h>

void f(int , int)
{
    printf("this is f(int, int)\n");
}


void f(int)
{
    printf("this is f(int)\n");
}

int main(int argc, const char * argv[])
{
    f(1,2);
    f(1);
    return 0;
}
