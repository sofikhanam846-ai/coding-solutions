#include <stdio.h>

int main()
{
    int a, b, sumab, diffab;
    float c, d, sumcd, diffcd;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    sumab = a + b;
    diffab = a - b;
    sumcd = c + d;
    diffcd = c - d;

    printf("%d %d\n", sumab, diffab);
    printf("%.1f %.1f\n", sumcd, diffcd);

    return 0;
}
