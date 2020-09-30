#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,i,count=0;
    while(1)
    {
            scanf("%d",&X);

    }
    for(i=1;i<=X;i++)
    {  if(X%i==0)
        count++;
    }
    if(count!=2)
        printf("%d nao eh primo\n",X);
    else if(count==2)
    printf("%d eh primo\n",X);


    return 0;
}
