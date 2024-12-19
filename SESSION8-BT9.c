#include<stdio.h>
int main()
{
    int array[8]= {8,5,2,3,23,5,1,4},i,j,count=1,maxcount=0,most;
    for (int j = 0; j < 8 ; j++ )
    {
        count = 1;
    for (int i = j + 1; i < 8; i++)
    {
        if( array[j] == array[i] )
        {
            count++;
        }
        if(maxcount < count )
        {
        maxcount = count;
        most = array[j];
        }
    }
    }
    printf("so xuat hien nhieu nhat la %d voi so lan la %d",most,maxcount);
}