#include<stdio.h>

int main()

{

    int i, j,  N,M;

    scanf("%d", &N);

    scanf("%d", &M);

    int matrix[N][M], transpose[M][N];

    //your code here
    for(i=0;i<N;i++){

        for(j=0;j<M;j++){

            scanf("%d",&matrix[i][j]);

        }

    }

    for(i=0;i<N;i++){

        for(j=0;j<M;j++){

            transpose[j][i]=matrix[i][j];

        }

    }

    for(i=0;i<M;i++){

        for(j=0;j<N;j++){

            printf("%d ",transpose[i][j]);

        }

        printf("\n");

    }
return 0;

}