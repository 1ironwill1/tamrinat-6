#include <stdio.h>
    int main()
    {

        int a[100000];
        int i, number_of_digits;
        scanf("%d", &number_of_digits);
        for (i = 0; i < number_of_digits; i++) {


            scanf("%1d", &a[i]);
        }

        for (i = 0; i < number_of_digits; i++)
            printf("%d ", a[i]);

        return 0;
    }

