/*Program Metoda JACOBI-epsilon si Nmax*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float s, max, eps,A[30][30],x[30],B[30],y[30];
int n,Nmax,j,i,k;
int main()
{
    printf ("Intoduceti dimensiunea matricei sistemului ");
    scanf("%d",&n);
    printf("Dati matricea coeficientilor\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    printf("Dati termenii liberi:\n");
    for (i=1; i<=n; i++)
    {
        printf("B[%d]: ",i);
        scanf("%f",&B[i]);
    }
    printf ("Intoduceti nr. maxim de iteratii m= ");
    scanf("%d",&Nmax);
    printf ("Intoduceti precizia dorita eps= ");
    scanf("%f",&eps);
    for(i=1; i<=n; i++) x[i]=0;
    k=0;
    do
    {
        for(i=1; i<=n; i++)
        {
            s=0;
            for(j=1; j<=n; j++)
                s=s+A[i][j] * x[j];
            s=s- A[i][i] * x[i];
            y[i]= (B[i]-s)/A[i][i];
        }
        max=fabs(y[1]-x[1]);
        for(i=2; i<=n; i++)
            if (max<fabs(y[i]-x[i]))
                max=fabs((y[i]-x[i]));
        for(i=1; i<=n; i++) x[i]=y[i];
        k=k+1;
    }
    while (max>=eps && k<=Nmax);
    if (k<=Nmax)
    {
        printf("Dupa %d iteratii solutia este:\n",k);
        for(i=1; i<=n; i++)
            printf("x[%d]=%f \n",i,x[i]);
    }
    else printf("S-a depasit numarul maxim de iteratii");
    getch();
}
