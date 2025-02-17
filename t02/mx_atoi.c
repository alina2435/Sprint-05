#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str)
{
    bool minus = false;
    const char *ptr = str;

    if (*ptr == '-' || *ptr == '+')
    {
        minus = (*ptr == '-');
        ptr++;
    }
    int dec = 1;
    const char *temp_ptr = ptr;

    while (*temp_ptr != '\0')
    {
        if (mx_isdigit(*temp_ptr))
        {
            dec *= 10;
        }
        else
        {
            return 0;
        }
        temp_ptr++;
    }

    dec /= 10;
    int num = 0;

    while (*ptr != '\0')
    {
        num += dec * (*ptr - '0');
        dec /= 10;
        ptr++;
    }

    return num * (minus ? -1 : 1);
}
