#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z, p,S1,S2;
    p = M_PI;
    printf("vvedite x: ");
    scanf("%lf", &x);
    
    
    S1 = sin(2*x);
    S2 = sin(3*x);
    y = sqrt(sin(2*x))+sqrt(sin(3*x));
    
    if (S1 >= 0 && S2 >= 0 && sqrt(S1)+sqrt(S2) - p/8 >=0 && tan(sqrt(S1)+sqrt(S2) - p/8 >=0)) 
    {
        y = sqrt(sin(2*x))+sqrt(sin(3*x));
        z = pow(sqrt(log(tan(y - p/8))), 1.0/4.0);
        printf("y(x) = %lf\n z(y) = %lf\n", y, z);
        return 0;
        
    } 
   
    else
    {
        printf("oshibka,x ne podhodit\n"); 
        return 1;
        
    }
        

}
