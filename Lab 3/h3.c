#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    switch (discriminant > 0)
    {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2*a);
            root2 = (-b - sqrt(discriminant)) / (2*a);
            printf("Roots are real and different: %.2f and %.2f", root1, root2);
            break;

        case 0:
            switch (discriminant == 0)
            {
                case 1:
                    root1 = root2 = -b / (2*a);
                    printf("Roots are real and same: %.2f and %.2f", root1, root2);
                    break;
                case 0:
                    printf("Roots are complex and different: %.2f + i%.2f and %.2f - i%.2f", -b/(2*a), sqrt(-discriminant)/(2*a), -b/(2*a), sqrt(-discriminant)/(2*a));
                    break;
            }
            break;
    }
}