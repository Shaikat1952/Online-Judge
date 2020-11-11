#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,N4;
    scanf("%f",&N1);
    scanf("%f",&N2);
    scanf("%f",&N3);
    scanf("%f",&N4);

    float av;
    av=N1+N2+N3+N4/4;
    if(av>=7.0)
        printf("Aluno aprovado.");
    else if(av<5.0)
        printf("Aluno reprovado.");
    else if(av >=5.0 && av=<6.9)
        printf("Aluno em exame.");

    return 0;
}
