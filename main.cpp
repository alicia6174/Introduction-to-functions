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
        int va, vb;

        //initialize list
        CS(void):
            va(10),
            vb(20)
        {
        }

#if 0
        //assignment
        CS(void)
        {
            va = 10;
            vb = 20;
        }
#endif

        CS(int a, int b):
            va(a),
            vb(b)
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


int main(int argc, const char * argv[])
{
    int a = 10;
    int b(10);


    return 0;
}
