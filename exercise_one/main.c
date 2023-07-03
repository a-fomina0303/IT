
#include <stdio.h> // Підключення бібліотеки для вводу/виводу тексту
#include <windows.h> // Підключення бібліотеки для доступу до функцій WindowsAPI


// Стандартна функція main
int main() {

    SetConsoleCP(65001); // Зміна стандарту кодування консолі на UTF-8
    SetConsoleOutputCP(65001); // Зміна стандарту кодування консолі на UTF-8

    int t1, t2, t3; // Задання трьох змінних цілочисельного типу

    printf("Введіть три значення:\n"); // Вивід тексту
    scanf("%i %i %i", &t1, &t2, &t3); // Ввід тексту

    double b = 1.0 / t1 + 1.0 / t2 + 1.0 / t3; // Обрахунок часу необхідного для з'їдання пирога

    printf("Час, необхідний для з'їдання пирога: %.2lf годин", 1.0 / b); // Вивід результату

    return 0;
}