#include <stdio.h>

int cycle(int base, int stepen) 
    {
        int result = 1.0;
        for (int n = 0; n < stepen; n++)   
        {
            result *= base;
        }
        return result;
    }

int recursive(int base, int stepen) 
    {
        if (stepen == 0)   
        {
            return 1; 
        } 
        else 
        {
            return base * recursive(base, stepen - 1);
        }
    }

int main() 
    {
        int base;
        int stepen;

        printf("Vvedite chislo : ");
        scanf("%d", &base);
        printf("Vvedite stepen' : ");
        scanf("%d", &stepen);

        if (stepen < 0) 
        {
            printf("Stepen' dolzhna byt' polozhitelnoy.\n");
            return 1;
        }

        int result_c = cycle(base, stepen);
        int result_r = recursive(base, stepen);

        printf("Rezultat s ispolzovaniem cycla: %d\n", result_c);
        printf("Rezultat s ispolzovaniem rekursii: %d\n", result_r);

        return 0;
    }