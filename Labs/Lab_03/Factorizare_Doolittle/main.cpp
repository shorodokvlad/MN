/*Program Factorizare Doolittle*/
#include<stdio.h>
#include<conio.h>
float s, A[30][30], L[30][30], R[30][30];
int i,k,j,n;
int main()
{
    printf("Dati ordinul matricei A, n:\n");
    scanf("%d",&n);
    printf("Dati A\n");
    for (i=1; i<=n; i++)
        for (j=1; j<=n; j++)
        {
            printf("A[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    for (j=1; j<=n; j++)
        R[1][j]=A[1][j];
    for (j=1; j<=n; j++)
    {
        L[j][1]=A[j][1]/R[1][1];
        L[j][j]=1;
    }
    for (i=2; i<=n; i++)
    {
        for (j=i; j<=n; j++)
        {
            s=0;
            for (k=1; k<=i-1; k++)
                s=s+L[i][k]*R[k][j];
            R[i][j]=A[i][j]-s;
        }
        for (j=i+1; j<=n; j++)
        {
            s=0;
            for (k=1; k<=j-1; k++)
                s=s+L[j][k]*R[k][i];
            L[j][i]=(A[j][i]-s)/R[i][i];
        }
    }
    printf("Solutia este: \n");
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
            printf("L[%d][%d]=%f ",i,j,L[i][j]);
        printf("\n");
    }
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
            printf("R[%d][%d]=%f ",i,j,R[i][j]);
        printf("\n");
    }
    getch();
}
