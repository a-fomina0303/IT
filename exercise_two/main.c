#include <stdio.h>// Підключення бібліотеки для вводу/виводу тексту
#include <windows.h>// Підключення бібліотеки для доступу до функцій WindowsAPI

//Функція обрахунку найбільшого спільного дільника
int t(int a,int b ) {
    if (b==0){
        return a;
    }
    return t(b,a%b);
}
//Функція обрахунку найменшого спільного кратного
int d(int a,int b){
    return (a*b)/t(a,b);
}
// Стандартна функція main
int main() {
    SetConsoleCP(65001);// Зміна стандарту кодування консолі на UTF-8
    SetConsoleOutputCP(65001);// Зміна стандарту кодування консолі на UTF-8

    int p;
    scanf("%i", &p);// Ввід кількості змінних
    if (!(2<=p && p<=20)){
        printf("Число незадовільняє умову");// Вивід тексту
        return 0;
    }
    int n[p];
    for(int i=0;i<p;i++) {
        scanf("%i",&n[i]);// Ввід змінних
    }

    int v = n[0];
    for(int i=0;i<p;i++){
        v=d(v,n[1]);
    }

     printf("Результат: %i",v);// Вивід тексту

    return 0;
}
