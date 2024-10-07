#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main()
{
    double x, y, z, p;
    p = M_PI;
    printf("vvedite x: ");
    scanf("%lf", &x);
    
    if (-1000.0 <= x && x <= 1000.0) 
    {
        y = sin(2*x);
        if (y >= 0) {
            y = sqrt(y);
        } else {
            printf("oshibka: znacheniya y otricatel'no, nevozmojno raschitat' kvadratniy koren'.\n");
            return 1;
        }
        
        y += sqrt(sin(3*x));
        
        if (y - p/8 <= 0) {
            printf("oshibka: y - p/8 otrichatelno, nevozmojno raschitat' logarifm.\n");
            return 1;
        }
        
        z = log(tan(y - p/8));
        if (z <= 0) {
            printf("oshibka: znacheniya z otricatel'no, nevozmojno raschitat' kvadratniy koren'.\n");
            return 1;
        }
        
        z = pow(sqrt(z), 1.0/4.0);
        printf("y(x) = %lf\nz(y) = %lf\n", y, z);
    }
    else
        printf("znachenie x nekorektno!\n");
    return 0;
}