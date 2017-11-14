#include <stdio.h>


int main() {
    long int n, i, j, a, b, k, temp = 0, counter, counter2;
    scanf("%ld", &n);
    long int matrix[n][n];
    long int pow_matrix[n][n];
    long int temp_matrix[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%ld", &matrix[i][j]);
            temp_matrix[i][j] = matrix[i][j];
        }
    }

    scanf("%ld %ld %ld", &a, &b, &k);


    for (counter2 = 2; counter2 <= k; counter2++) {
        for (counter = 0; counter < n; counter++) {
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    temp = temp + temp_matrix[counter][j] * matrix[j][i];
                }
                pow_matrix[counter][i] = temp;
                temp = 0;
            }
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                temp_matrix[i][j] = pow_matrix[i][j];
        }

        if (counter2 == k && temp_matrix[a-1][b-1] == 0)
            counter2--;
    }

    printf("%ld", temp_matrix[a-1][b-1]);

    return 0;
}




