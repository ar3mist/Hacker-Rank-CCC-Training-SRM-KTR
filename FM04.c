#include<stdio.h>

int main()

{

    //your code here

    int n,m,p,q;

    scanf("%d%d",&n,&m);

    int mat1[n][m],mat2[p][q];

    int i,j,k,prod[n][q];

    for(i=0;i<n;i++)

    {

        for(j=0;j<m;j++)

        {

            scanf("%d",&mat1[i][j]);

        }

    }

    scanf("%d%d",&p,&q);

     for(i=0;i<p;i++)

    {

        for(j=0;j<q;j++)

        {

            scanf("%d",&mat2[i][j]);

        }

    }

    if(m!=p)

    {

        printf("-1");

    }

    

    else

    {

        for(i=0;i<n;i++)

        {

            for(j=0;j<q;j++)

            {

              for(k=0;k<p;k++)

              {

                  prod[i][j]=mat1[i][k]*mat2[k][j];

              }

              

            }

        }

        for (i=0;i<n;i++)

        {

            for(j=0;j<q;j++)

                printf("%d ", prod[i][j]);

            printf("\n");

        }

    }

   

    return 0;

}
