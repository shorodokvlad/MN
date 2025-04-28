/*Program Rezolvare Sistem Superior Triunghiular*/
#include<stdio.h>
#include<conio.h>
float s,x[30],T[30][30],B[30];
int i,k,j,n;
int main()
{
    printf("Dati nr de ecuatii n:\n");
    scanf("%d",&n);
    printf("Dati coeficientii necunoscutelor\n");
    for (i=1; i<=n; i++)
        for (j=i; j<=n; j++)
        {
            printf("T[%d][%d]: ",i,j);
            scanf("%f",&T[i][j]);
        }
    printf("Dati termenii liberi:\n");
    for (i=1; i<=n; i++)
    {
        printf("B[%d]: ",i);
        scanf("%f",&B[i]);
    }
    x[n]=B[n]/T[n][n];
    for (i=n-1; i>=1; i--)
    {
        s=0;
        for (k=n; k>=i-1; k--)
            s=s+T[i][k]*x[k];
        x[i]=(B[i]-s)/T[i][i];
    }
    printf("Solutia este: \n");
    for (i=1; i<=n; i++)
        printf("x[%d]=%f \n",i,x[i]);
    getch();
}
