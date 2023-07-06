// Підключення бібліотек
#include <stdio.h>
#include <windows.h>

// Функція для знаходження кількості рівних дільників числа n
int bod(int n) {
    int count = 0;

    // Перевіряємо всі можливі значення i від 1 до n
    for (int i = 1; i <= n; i++) {
        // Якщо частка і залишок від ділення n на i співпадають, то збільшуємо лічильник count
        if (n % i == n / i) {
            count++;
        }
    }

    // Повертаємо кількість рівних дільників
    return count;
}

int main() {

    // Зміна кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    printf("Введіть натуральне число n:");
    scanf("%d", &n);

    // Перевіряємо коректність вхідних даних
    if (n <= 1 || n >= 150) {
        printf("Вхідні дані некоректні. Будь ласка, введіть число n в межах (1, 150).\n");
        return 1;
    }

    // Викликаємо функцію  для знаходження кількості рівних дільників
    int result = bod(n);

    // Виводимо результат
    printf("Кількість рівних дільників числа %d: %d\n", n, result);

    return 0;
}

