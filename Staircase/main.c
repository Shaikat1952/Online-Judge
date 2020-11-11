#include <stdio.h>
#include <stdlib.h>
int main()
{
int n;

scanf("%d",&n);
for(int c=1;c<=n;c++){
for(int d=(n-1);d>=c;d--)
{
printf(" ");
}
for(int e=1;e<=c;e++)
{
printf("*");
}
printf("\n");
}
return 0;
}
