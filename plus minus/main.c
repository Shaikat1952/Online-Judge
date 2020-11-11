#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p=0,m=0;
    scanf("%d",&n);
    int arr[n], i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            p++;


        }
        if(arr[i]<0)
        {
            m++;


        }


    }
       printf("%.6f\n",n/p);
       printf("%.6f",m/n);

    return 0;
}
