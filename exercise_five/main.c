#include <stdio.h>
#include <windows.h>

// Функція для обрахунку кількості шуканих послідовностей
int countS(int n) {
    // Задання початкових параметрів
    int an = 1;
    int bn = 1;

    for (int i = 2; i <= n; i++) {
        int temp = an; // Тимчасова змінна для збереження попереднього значення count0
        an = (an + bn) % 12345; // Обчислюємо нове значення count0
        bn = temp; // Присвоюємо count1 попереднє значення count0
    }

    return (an + bn) % 12345; // Повертаємо кількість послідовностей
}
int main() {

    // Зміна кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    printf("Кількість шуканих послідовностей: %d\n", countS(n));

    return 0;
}


