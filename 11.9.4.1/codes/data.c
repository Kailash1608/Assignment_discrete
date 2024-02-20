#include<stdio.h>

int x_n(int n) {
    return ((n+1)*(n+2)) * (n >= 0);
}

int y_n(int n) {
    return ((n+1)*(n+2)*(n+3)/3) * (n >=0);
}

int main() {
    int sum=0;

    FILE *file = fopen("values.dat", "w");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    for (int n = 0; n <= 10; ++n) {
        int x_value = x_n(n);
        int y_value = y_n(n);

        sum+= x_value;
        fprintf(file, "%d %d %d\n", n, x_value,y_value,);
    }

    fclose(file);

    return 0;
}
