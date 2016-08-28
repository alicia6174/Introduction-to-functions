#include <stdio.h>

void f(int , int)
{
    printf("this is f(int, int)\n");
}


void f(int)
{
    printf("this is f(int)\n");
}

void g(int a = 10, int b = 20)
{
    printf("this is g, a = %d b = %d\n", a, b);

}

class CS 
{
    public:
        CS(void)
        {

        }

        void show(void)
        {
            printf("this is cs\n");
        }

        void useMshow(void)
        {
            mshow();
        }

        static void st_function(void)
        {
            printf("this is a static function\n");
        }

        int val_a;

        void showA(void) const
        {
            printf("a = %d\n", val_a);
        }


    private:
        void mshow(void)
        {
            printf("this is m show\n");

        }
};

void SwapPtr(int *a, int *b)
{
    int tmp = *a;
    *a  = *b;
    *b = tmp;
}

void SwapRef(int &a, int &b)
{
    int tmp = a;
    a  = b;
    b = tmp;
}

class Heavy
{
    int a[128];
};

void HeavyFunc(Heavy &hv)
{

}

int main(int argc, const char * argv[])
{
    int a = 10;
    int b = 20;

    //SwapPtr(&a, &b);
    SwapRef(a, b);
    printf("a = %d, b = %d\n", a, b);

    Heavy hv;
    printf("%lu\n", sizeof(hv));

    return 0;
}
