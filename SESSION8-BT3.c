#include<stdio.h>
int main()
{
    int i,t,m=0;
    printf("nhap vao so hang va so cot : ");
    scanf("%d",&m);
        int array[m][m];
    for( int t = 0 ; t < m ; t++)
    {
    for(int i = 0; i< m ; i++)
    {
        printf("nhap phan tu array[%d][%d] : ",t,i);
        scanf("%d",&array[t][i]);  
    }
    }
    for( int t = 0 ; t < m ; t++)
    {
    for(int i = 0; i< m; i++)
    {
        printf("%d ",array[t][i]); 
    }
    printf("\n");
    }
    return 0 ;
}