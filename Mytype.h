void MyUpper(char *c)
{
    if (*c >= 'a' && *c <= 'z') 
        *c+= 'A' - 'a';
}