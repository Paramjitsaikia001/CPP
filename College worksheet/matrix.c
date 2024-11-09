#include <stdio.h>
int main()
{
    int r1, c1;
    printf("enter the rows and column for matrx 1 : ");
    scanf("%d%d", &r1, &c1);
    int matrix_1[r1][c1];
    printf("enter the element of the matrix: ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&matrix_1[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf(" %d ", matrix_1[i][j]);
        }
        printf("\n");
    }

    int r2, c2;
    printf("enter the rows and column for matrx 2 : ");
    scanf("%d%d", &r2, &c2);
    int matrix_2[r2][c2];
    printf("enter the element of the matrix: ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&matrix_2[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf(" %d ", matrix_2[i][j]);
        }
        printf("\n");
    }
    int result_matrix[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %d ", result_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}