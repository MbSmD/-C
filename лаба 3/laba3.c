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
        double x = 0;
        printf("    x              f(x)\n");
        printf("-------------------------\n");
        while (x <= 3.0) 
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
                x = x + h; // шаг
            }
        }
        return 0;
    }
