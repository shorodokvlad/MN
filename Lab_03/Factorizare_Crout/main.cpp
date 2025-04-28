/*Program Factorizare Crout*/
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
    for (i=1; i<=n; i++)
        L[i][1]=A[i][1];
    for (i=1; i<=n; i++)
    {
        R[1][i]=A[1][i]/L[1][1];
        R[i][i]=1;
    }
    for (j=2; j<=n; j++)
    {

        for (i=j; i<=n; i++)

        {
            s=0;

            for (k=1; k<=j-1; k++)
                s=s+L[i][k]*R[k][j];
            L[i][j]=A[i][j]-s;
        }

        for (i=j+1; i<=n; i++)
        {
            s=0;

            for (k=1; k<=i-1; k++)
                s=s+L[j][k]*R[k][i];
            R[j][i]=(A[j][i]-s)/L[j][j];
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
