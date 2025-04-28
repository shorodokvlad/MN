/*Program Inversa -varianta G-J cu pivotare partiala*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float t,m;
int i,j,k,l,n;
float s, A[10][20], u[10][10];
int main()
{
    printf ("Intoduceti nr. de linii si de coloane ale matricei");
    scanf("%d",&n);
    printf("Dati matricea\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    for (i=1; i<=n; i++)
        for(j=n+1; j<=n+n; j++)
        {

            if (j==i+n) A[i][j]=1;
            else A[i][j]=0;

        }
    for(k=1; k<=n; k++)
    {
        l=k;
        for (i=k; i<=n; i++)

        {
            u[i][k]=sqrt(A[i][k]*A[i][k]);

            if (u[i][k]>u[k][k])
                l=i;
        }
        if(l!=k)
            for(j=1; j<=n+n; j++)
            {
                t=A[k][j];
                A[k][j]=A[l][j];
                A[l][j]=t;
            }
        for(i=1; i<=n; i++)
        {
            m=A[i][k]/A[k][k];
            A[i][k]=0;
            for(j=k+1; j<=n+n; j++)
                A[i][j]=A[i][j]-m*A[k][j];
        }
        A[k][k]=1;
    }
    printf("Matricea inversa este: \n");
    for (i=1; i<=n; i++)
    {
        for (j=n+1; j<=n+n; j++)

            printf("A[%d][%d]=%f",i,j-n,A[i][j]);

        printf("\n");

    }
    getch();
}
