#include <stdbool.h>

bool mx_isspace(char c)
{
    return (c == 32 || c == 9 || c == 10 || c == 11 || c == 12 || c == 13);
}
