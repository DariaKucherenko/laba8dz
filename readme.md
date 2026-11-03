# Домашнее задание к работе 8
## Условие задачи
Вычислите для заданного натурального n и действительного х с использованием цикла for значение <br>
<img src="1.png" />
## Решение задачи 
### Аглоритм
 1) Начало
 2) Объявление переменных:<br>
  * int n;
  *  double x, sum = 0.0;
   * double power;

3) Ввод данных<br>
printf("Введите натуральное n (количество степеней): ");<br>
scanf("%d", &n);<br>
printf("Введите действительное x (основание степени): ");<br>
scanf("%lf", &x);<br>

4) Присваение значения и организация цикла for для вычисления суммы<br>
power = x; <br>
for (int i = 1; i <= n; i++) {<br>
sum += cos(power); <br>
power *= x;     <br>
}<br>

5) Вывод результата решения<br>
printf("Сумма равна: %lf\n", sum);

6) Конец<br>
### Блок-схема
<img src="лаба8.png" />

### Реализация программы
```
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
    double power;

    printf("Введите натуральное n (количество степеней): ");
    scanf("%d", &n);
    printf("Введите действительное x (основание степени): ");
    scanf("%lf", &x);

    power = x; 

    for (int i = 1; i <= n; i++) {
        sum += cos(power); 
        power *= x;      
    }

    printf("Сумма равна: %lf\n", sum);
    return 0;
}
```
### Результат работы программы
<img src="3.png" />

### Информация о разработчике
Выполнила работу: Кучеренко Дарья, гр.бИЦТ-261, вариант 18