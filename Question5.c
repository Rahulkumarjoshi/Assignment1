#include <stdio.h>
void main()
{
    int r, dim;
    float circ, area, pi = 3.14;
    printf("Enter the radius of the circle ");
    scanf("%d", &r);
    dim = 2 * r;
    circ = 2 * pi * r;
    area = pi * r * r;
    printf("The Dimeter if the circle is %d\n", dim);
    printf("The circumferance of the circle is %f\n", circ);
    printf("The area of the circle is %f\n", area);
}