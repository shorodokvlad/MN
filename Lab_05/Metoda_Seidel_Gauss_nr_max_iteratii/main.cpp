/*Program - Metoda Seidel-Gauss-nr maxim iteratii*/
#include<stdio.h>
#include<conio.h>
float s, A[30][30],x[30],B[30], y[30];
int n,k,j,i,Nmax;
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
    printf ("Intoduceti nr. maxim de iteratii Nmax= ");
    scanf("%d",&Nmax);
    for(i=1; i<=n; i++)
        x[i]=0;
    for(k=1; k<=Nmax; k++)
    {
        for(i=1; i<=n; i++)
        {
            s=0;
            for(j=1; j<=i-1; j++)
                s=s+A[i][j] * y[j];
            for(j=i+1; j<=n; j++)
                s=s+A[i][j] * x[j];
            y[i]= (B[i]-s)/A[i][i];
            x[i]=y[i];
        }
    }
    printf("Solutia dupa %d iteratii este:\n", Nmax);
    for(i=1; i<=n; i++)
        printf("x[%d]=%f \n",i,x[i]);
    getch();
}
