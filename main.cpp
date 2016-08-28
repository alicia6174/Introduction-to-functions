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

class CS {
    public:
        void show(void)
        {
            printf("this is cs\n");
        }

        void useMshow(void)
        {
            mshow();

        }

    private:
        void mshow(void)
        {
            printf("this is m show\n");

        }
};


int main(int argc, const char * argv[])
{
    f(1,2);
    f(1);

    g();

    CS cs;
    cs.show();
    return 0;
}
