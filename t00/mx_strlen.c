int mx_strlen(const char *s)
{
    int n = 0;
    while (*s != '\0')
    {
        n++;
        s++;
    }
    return n;
}
