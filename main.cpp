#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class String
{
    int m_size;
    char * m_buf;

    public:
        String(void):
            m_size(0),
            m_buf(NULL)
        {

        }

        String(const char * buf):
            m_size(0),
            m_buf(NULL)
        {
            int s = strlen(buf);
            m_buf = new char[s+1];
            strcpy(m_buf, buf);
            m_size = s;

        }

        bool empty(void) const
        {
            return m_size == 0;
        }

        void show(void) const
        {
            if (empty())
            {
                printf("string is empty!\n");
                return;
            }

            printf("%s\n", m_buf);
        }

        const char * c_str(void) const
        {
            return m_buf;
        }
};



int main(int argc, const char * argv[])
{

    String str("hello");
    printf("%s\n", str.c_str());

    return 0;
}
