// Remember to call the repository Lab 4 Jamie Skinner or something
#include <stdio.h>
#include <string.h>

int sum_numbers(int total_numbers, int number_array[]);

int main() {

    int total_numbers;
    int number_array[100]; 
    FILE *dataptr;

    dataptr = fopen("data.txt", "r");

    fscanf(dataptr, "%d", &total_numbers);

    int i = 0;
    while (i < 100 && fscanf(dataptr, "%d", &number_array[i]) == 1) {
        i++;
    }

    fclose(dataptr);

    int total_sum = sum_numbers(total_numbers, number_array);

    printf("The total sum is %d\n", total_sum);
    return 0;
}