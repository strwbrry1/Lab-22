
#include <stdio.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name[12];
    printf("Введите имя -> ");
    fgets(name, 11, stdin);
    printf("Здравствуйте, %s", name);

}


