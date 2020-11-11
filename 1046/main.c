#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b)
        printf("0 JOGO DUROU 24 HORA (S)\n");
        else if(b>a)
        printf("0 JOGO DUROU %d HORA (S)\n",b-a);
        else if(a>b)
        printf("0 JOGO DUROU %d HORA (S)\n",(b+24)-a);

    return 0;
}
