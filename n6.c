#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>

boolean esliTsifra(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    }
    return 0;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char ch[80];
    
    printf("Введите строку -> ");
    fgets(ch, 79, stdin);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (esliTsifra(ch[i])) {
            ch[i] = '$';
        }
    }
    printf("\n\n%s", ch);

}


