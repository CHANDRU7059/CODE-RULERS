#include<stdio.h>
int main()
{
    int n,a,r,p,rc;
    printf("Enter the total no of classes :");
    scanf("%d",&n);
    printf("Enter the no of classes attended:");
    scanf("%d",&a);
    p=(a/n)*100;
    r=0.75*n;
    printf("\nAttendance percentage:");
    printf(p);
    if(p>=75)
    {
        printf("\nstatus : Eligible");
    }else
    {printf("\nstatus : Not eligible");
        rc=r-a;
        printf("\nAdditional classes required:");
        printf(rc);
    }
 return 0;
}