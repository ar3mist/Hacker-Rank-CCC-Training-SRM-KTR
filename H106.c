#include<stdio.h>
#include<math.h>
double hypotenuse(double base, double perp)
{
    //complete this function
    return sqrt(pow(base,2) + pow(perp,2));
}
int main()
{
    double A, B, C;
    scanf("%lf%lf", &A, &B);
    C = hypotenuse(A, B);
    printf("%.6lf", C);
    return 0;
}