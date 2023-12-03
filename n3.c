
#include <stdio.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введите символ -> ");
    char ch = getchar();

    for (int i = ch; i >= ch - 29; i--) {
        printf("'%c' (%d)\n", i, i);
    }

}


