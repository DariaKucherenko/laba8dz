#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
    setlocale(LC_ALL, ".UTF8");
    int n;
    double x, sum = 0.0;

    printf("Введите натуральное n (количество стеменей): ");
    scanf("%d", &n);
    printf("Введите действительное x (основание степени): ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) {
        sum += cos(pow(x, i));
    }

    printf("Сумма равна: %lf\n", sum);
    return 0;
}