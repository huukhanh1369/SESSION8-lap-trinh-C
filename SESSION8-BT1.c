#include<stdio.h>
int main()
{
    int array[10]= {0,1,2,3,4,5,6,7,8,9},i;
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n",array[i]);
    }
return 0;
}