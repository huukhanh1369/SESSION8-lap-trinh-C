#include<stdio.h>
int main()
{
    int array[3][3]= {{1,2,3},{4,5,6},{7,8,9}},t,i,sum;
    for(int t = 0 ; t < 3 ; t++)
    {
        for( int i= 0; i < 3 ; i++ )
        {
            if ( t == 0 || i == 0 || t == 2 || i == 2 )
            {
                sum = sum + array[t][i];
            }
        }
    }
    printf("tong cac gia tri o bien la : %d",sum);
    return 0;
}
