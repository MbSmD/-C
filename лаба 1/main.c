#include <stdio.h>

int main()
{
    float a, b, x, s, res;
    printf("Enter a -> ");
    scanf("%f", &a);
    printf("Enter b -> ");
    scanf("%f", &b);
    printf("Enter x -> ");
    scanf("%f", &x);
    
    s = a + b;

    if (x == 0)
    {
        printf("Oshibka, x ne doljen rovnyatsya 0");
        return 1;
    }
    if (s == 0)
    {
        printf("Oshibka, vvedite znacheniya A i B tak, chtoby hotya BbI odin ne rovnyalsya nulyu");
        return 1;
    }

    if (s < x)
    {res = s / x;}
    else if (s > x)
    {res = x / s;}
    else
    {res = b / x;}
    printf("res: %.3f",res);

    return 0;

}