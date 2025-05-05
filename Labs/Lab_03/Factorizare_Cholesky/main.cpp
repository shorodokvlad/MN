/*Program Factorizare Cholesky*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float s, sum,A[30][30], L[30][30];
int i,k,j,n;
int main()
{
    printf("Dati ordinul matricei A, n:\n");
    scanf("%d",&n);
    printf("Introduceti Asimetrica si pozitiv definita\n");
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    j=1;
    L[j][j]=sqrt(A[1][1]);
    for (i=2; i<=n; i++)
        L[i][j]=A[1][i]/L[1][1];
    for (j=2; j<=n; j++)
    {
        s=0;
        for (k=1; k<=j-1; k++)
            s=s+L[j][k]*L[j][k];
        L[j][j]=sqrt(A[j][j]-s);
        for (i=j+1; i<=n; i++)
        {
            sum=0;
            for (k=1; k<=j-1; k++)
                sum=sum+L[i][k]*L[j][k];
            L[i][j]=(A[i][j]-sum)/L[j][j];
        }
    }
    printf(" Matricea L este: \n");
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
            printf("L[%d][%d]=%f ",i,j,L[i][j]);
        printf("\n");
    }
    getch();
}
