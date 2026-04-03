#include <stdio.h>

int sum_range(int *start, int *end) {
    int temp = 0;
    int index = (end - start);

    for(int i = 0; i < index; i++) {
        temp = temp + *start;
        start = start + 1;
    }

    return temp;
}

int main() {
    int data[] = {10, 20, 30, 40, 50, 60, 70};

    int result = sum_range(&data[1], &data[4]);

    printf("%d\n", result);

    return 0;
}