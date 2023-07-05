// Підключення бібліотек
#include <stdio.h>
#include <windows.h>

int countNumbers(int d, int dp, int dpp);

int main() {
    // Зміна кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Створення змінної для кількості розрядів та отримання даних від користувача
    int r;
    printf("Введіть кількість розрядів (р ≤ 30):");
    scanf("%d", &r);

    // Викликаємо функцію для обрахунку кількості розрядів
    int result = countNumbers(r, 0, 0);

    printf("Кількість чисел із %d розрядів: %d\n", r, result);

    return 0;
}

int countNumbers(int d, int dp, int dpp) {
    if (d == 0) {
        // Досягнуто кінця розрядів, повертаємо 1, щоб позначити успішне формування числа
        return 1;
    }

    int count = 0;
    int i;

    for (i = 5; i <= 9; i += 4) {
        if (i != dp || i != dpp) {
            // Викликаємо рекурсивно для наступного розряду
            count += countNumbers(d - 1, i, dp);
        }
    }

    return count;
}