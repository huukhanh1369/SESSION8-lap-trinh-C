#include<stdio.h>
int main()
{
    int array[3][3]= {{1,2,3},{4,5,6},{7,8,9}}, max=0,t,i;
    for( int t = 0 ; t < 3 ; t++)
    {
    for(int i = 0; i< 3 ; i++)
    {
        if( max < array[t][i] )
        {
            max = array[t][i];
        }
    }
}
printf("gia tri lon nhat la : %d", max);
return 0;
}