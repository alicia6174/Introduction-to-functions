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

        int size() const
        {
            return m_size;
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

        void strCat(const char *buf)
        {
            if (empty())
            {
                copyCStr(buf);
                return;
            }

            char * ret = new char[m_size + strlen(buf) + 1];
            strcpy(ret, m_buf);
            strcat(ret, buf);
            delete [] m_buf;
            m_buf = ret;
            m_size += strlen(buf);
        }

        String & operator+(const String & s)
        {
            strCat(s.m_buf);
            return *this;
        }

        String & operator+(const char *buf)
        {
            strCat(buf);
            return *this;
        }
};



int main(int argc, const char * argv[])
{

    String str;

    str = "haha";
    str.show();
    printf("size = %d\n", str.size());

    String s2("thisS2");
    str = str + s2 + "aaaa";
    str.show();
    printf("size = %d\n", str.size());

    return 0;
}
