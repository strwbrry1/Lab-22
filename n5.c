﻿
#include <stdio.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char ch[80];
    
    printf("Введите строку -> ");
    fgets(ch, 79, stdin);

    for (int i = 0; i <= strlen(ch); i++) {
        if (ch[i] == ' ') {
            ch[i] = '#';
        }
    }
    printf("\n\nВывод ->%s", ch);

}


