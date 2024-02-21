#include<stdio.h>

int x(int n) {
    return ((n+1)*(n+2)) * (n >= 0);
}
int u(int n) {
    return (n >= 0) ? 1 : 0;
}

int convolution(int n) {
    int result = 0;
    for (int k = 0; k <= n; k++) {
        result += x(k) * u(n - k);
    }
    return result;
}

int main() {
    int sum=0;

    FILE *file = fopen("analysis_values.dat", "w");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    for (int n = 0; n <= 10; ++n) {
        int x_value = x(n);
        int y_value = convolution(n);

        sum+= x_value;
        fprintf(file, "%d %d %d\n", n, x_value,y_value);
    }

    fclose(file);

    return 0;
}
