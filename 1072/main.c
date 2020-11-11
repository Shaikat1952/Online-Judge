#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,t,x=0,y=0;
    scanf("%d\n",&N);
    for(i=1;i<=N;i++)

    {
        scanf("%d",&t);
        if(t>=10 && t<=20)
        x++;
        else
        y++;

    }
    printf("%d in\n",x);
    printf("%d out\n",y);

    return 0;
}
