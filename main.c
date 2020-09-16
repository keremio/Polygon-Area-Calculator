#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float determinant(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return fabs((x1*y2 + y1*x3 + x2*y3 - y2*x3 - y1*x2 - x1*y3)/2);
}

int main()
{
    int n;
    printf("Enter the number of the sides of the polygon.\n");
    scanf("%d" , &n);
    float x[n], y[n];
    float AREA, TOTAL_AREA = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the cartesian coordinates of the %d. corner\n" , i+1);
        scanf("%f %f", &x[i], &y[i]);
    }
    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            AREA = determinant(x[0], y[0], x[i-1], y[i-1], x[i], y[i]);
            TOTAL_AREA += AREA;
        }
        printf("Area of the polygon is %f" , TOTAL_AREA);
    }
    else{
        printf("polygon has to have more than two sides!\n");
    }

}
