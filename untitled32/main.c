#include <stdio.h>
    int main() {
        double arr[10]={6.30,12.10,0,18,11,99,55,45,34,2};
        double n=10;
        int i, j, position, swap;
        for (i = 0; i < (n - 1); i++) {
            position = i;
            for (j = i + 1; j < n; j++) {
                if (arr[position] > arr[j])
                    position = j;
            }
            if (position != i) {
                swap = arr[i];
                arr[i] = arr[position];
                arr[position] = swap;
            }
        }
        for (i = 0; i < n; i++)
            printf("%f\t", arr[i]);
        return 0;
    }

