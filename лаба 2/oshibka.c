#include <stdio.h>
#include <math.h>

int main()
{
    double x,p;
    p = M_PI;
    // printf("введите Число пи с нужным количеством знаков ->");
    // scanf("%lf", &p);
    printf("Enter x { 0.0 <= x <= 1.0 } -> ");
    scanf("%lf", &x);
//функция sin(x) определена на отрезке от -1 до 1, но там корень так что трицательным оно не может быть
    if () 
    {
        double y = sqrt(sin(2*x)) +  sqrt(sin(3*x));
        double z = pow(sqrt(log(tan(y - p/8))), 1.0/4.0);
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("x не в допустимой области значений!\n");
    return 0;
}