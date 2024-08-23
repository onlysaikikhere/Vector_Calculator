#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cross_product(int x[], int y[], int result[]);
int dot_product(int x[], int y[]);

int main() {

    clock_t start_time = clock();


    int Vector_1[3]; 
    int Vector_2[3]; 
    int cross_product_solution[3]; // Array to store the cross product result
    int dot_product_solution; 

    // Input for Vector 1
    printf("Vector 1: Enter element 1: ");
    scanf("%d", &Vector_1[0]);
    printf("Vector 1: Enter element 2: ");
    scanf("%d", &Vector_1[1]);
    printf("Vector 1: Enter element 3: ");
    scanf("%d", &Vector_1[2]);

    // Input for Vector 2
    printf("Vector 2: Enter element 1: ");
    scanf("%d", &Vector_2[0]);
    printf("Vector 2: Enter element 2: ");
    scanf("%d", &Vector_2[1]);
    printf("Vector 2: Enter element 3: ");
    scanf("%d", &Vector_2[2]);

    // Calculate cross product
    cross_product(Vector_1, Vector_2, cross_product_solution);
    printf("The cross product is: [%d, %d, %d]\n", cross_product_solution[0], cross_product_solution[1], cross_product_solution[2]);

    // Calculate dot product
    dot_product_solution = dot_product(Vector_1, Vector_2);
    printf("The dot product is: %d\n", dot_product_solution);


    clock_t end_time = clock();
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Total time taken by program: %f seconds\n", time_taken);

    return 0;
}

// Cross product function
void cross_product(int x[], int y[], int result[]) {
    result[0] = x[1] * y[2] - y[1] * x[2]; 
    result[1] = x[0] * y[2] - y[0] * x[2];
    result[2] = x[0] * y[1] - x[1] * y[0];
}

// Dot product function
int dot_product(int x[], int y[]) {
    return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
}
