#include <stdio.h>
#include <stdlib.h>
#include <string.h>


class String
{
    int m_size;
    char * m_buf;

    void copyCStr(const char *buf)
    {
        int s = strlen(buf);
        m_buf = new char[s+1];
        strcpy(m_buf, buf);
        m_size = s;
    }

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
            copyCStr(buf);

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


        String & operator=(const char * buf)
        {
            printf("operator = ..\n");
            delete [] m_buf;
            copyCStr(buf);
            return *this;
        }


};



int main(int argc, const char * argv[])
{

    String str;

    str = "haha";
    str.show();
    return 0;
}
