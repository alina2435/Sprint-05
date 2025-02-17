#include <limits.h>

int mx_factorial_iter(int n)
{
    if (n < 0)
    {
        return 0;
    }

    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
        if (result > INT_MAX)
        {
            return 0;
        }
    }
    return (int)result;
}
