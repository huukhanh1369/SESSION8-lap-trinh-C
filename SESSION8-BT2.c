#include<stdio.h>
int main()
{
    int array[5]= {1,7,3,9,5},n,check=0;
    printf("nhap vao mot so bat ky : ");
    scanf("%d",&n);
    for (int i = 0; i < 5; i++)
    {
        if( n == array[i] )
        {
            printf("vi tri phan tu trong mang la array[%d]", i);
            check = 1;
        }
    }
    if( !check)
    {
        printf("phan tu khong ton tai trong mang");
    }
}