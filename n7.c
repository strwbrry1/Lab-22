#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>

int allUp(char c) {
    int res = c;
    if (c >= 'a' && c <= 'z') {
        res = 'A' + (c - 'a');
    }
    if (c >= 'а' && c <= 'я') {
        res = 'А' + (c - 'а');
    }
    if (c == 'ё') {
        res = 'Ё';
    }
    return res;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char ch[80];
    
    printf("Введите строку -> ");
    fgets(ch, 79, stdin);

    for (int i = 0; ch[i] != '\0'; i++) {
        ch[i] = allUp(ch[i]);
    }
    printf("\n\n%s", ch);

}


