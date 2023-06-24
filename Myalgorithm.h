void SwapIntPtr(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void SwapIntDoublePtr(int **dp1, int **dp2)
{
    int *temp = *dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}

void SwapIntDoublePtr(int **dp1, int **dp2)
{
    int temp = **dp1;
    **dp1 = **dp2;
    **dp2 = temp;
}