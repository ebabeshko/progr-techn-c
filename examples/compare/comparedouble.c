#include <stdio.h>

int main(void) {
    double d1 = 13+0.2+0.2+0.1;       /*  13.5 ? */
    double d2 = 14-0.2-0.2-0.1;       /*  13.5 ? */

    printf("Example 1: d1 == d2\n");

    if(d1==d2)
    {
        printf("They're the same %lf %lf\n",d1,d2);
    }
    else
    {
        printf("They're not the same %lf %lf\n",d1,d2);
    }

    printf("\nExample 2: abs(d1 - d2) < 0.000001\n");

    if(fabs(d1 - d2) < 0.000001)
    {
        printf("They're the same %lf %lf\n",d1,d2);
    }
    else
    {
        printf("They're not the same %lf %lf\n",d1,d2);
    }


    return 0;
}
