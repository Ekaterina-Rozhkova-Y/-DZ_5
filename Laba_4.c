#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int z1()
{

    setlocale(LC_CTYPE, "RUS");

    int gr;
    printf("Введите градусы: ");
    scanf("%i", &gr);
    printf("%.6f радиан\n", sin(gr * M_PI / 180.0));

    printf("Введите градусы: ");
    scanf("%i", &gr);
    printf("Результат: %.6f радиан\n", sin(gr * M_PI / 180.0));

    printf("Введите градусы: ");
    scanf("%i", &gr);
    printf("%.6f радиан\n", sin(gr * M_PI / 180.0));
    puts("Нажмите Enter для закрытия программы");
    getchar();

    return 0;
}

int z()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Вариант: %d\n", 22%13+1);

}
int z2and3()
{
    setlocale(LC_CTYPE, "RUS");

    double x, t, a, b, y;
    int A, B, C;

    printf("Вариант: %d\n", 22 % 13 + 1);

    printf("Введите x: ");
    scanf("%lf", &x);

    t = 0.3;
    a = log10(fabs(t * x + t * t));
    b = x * t * t + sqrt(x);
    y = log((a * a) / (a + b));

    printf("x = %.1f\n", x);
    printf("y = %.2f\n", y);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    printf("\nA = %d, B = %d, C = %d\n", A, B, C);

    printf("Условие а (только одно из A,B чётное): %d\n",
        (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0));

    printf("Условие б (A,B,C кратны 3): %d\n",
        (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));

    return 0;
}

int DZ_LB_5()
{
    setlocale(LC_CTYPE, "RUS");
    printf("Вариант: %d\n\n", 22 % 13 + 1);

        double x, y, z, a;
        x = 3.981e-2;
        y = -1.625e3;
        z = 0.512;

        /* a = 2^(-x) * sqrt(x + |y|^(1/4)) * (e^(x - 1/sin z))^(1/3) */
        a = pow(2, -x)
            * sqrt(x + pow(fabs(y), 1.0 / 4.0))
            * pow(exp(x - 1.0 / sin(z)), 1.0 / 3.0);

        printf("x = %.5e\n", x);
        printf("y = %.4e\n", y);
        printf("z = %.3f\n", z);
        printf("a = %.5f\n", a);

        return 0;
  
}

int main()
{
    DZ_LB_5();

    return 0;
}