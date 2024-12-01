#include <stdio.h>
#include <math.h>

int main()
    {
    double h;
    printf("vvedite shag h\n");
    scanf("%lf",&h);
    if (h <= 0 || h >= 3)
        {
        printf("h ne vhodit v oblast'\n");
        return 1;
        }
    else
        {
            double x;
        printf("    x              f(x)\n");
        printf("-------------------------\n");
        for (x = 0; x <= 3.0; x += h)
            {
                double y; 
                            
                if (0 <= x && x <= 1.5) 
                {
                    y = pow(2, x) - 2 + pow(x, 2);
                    printf("%lf\t%lf\n", x, y);
                }
                else if (1.5 < x && x <= 3) 
                {
                    y = sqrt(x) * exp(pow(x, -2));
                    printf("%lf\t%lf\n", x, y); 
                }           
            }
        }
        return 0;
    }