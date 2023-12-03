#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <ctype.h>

int strLength(char s[]) {
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int strCompare(char s1[], char s2[]) {
    int step = 0;
    for (int i = 0; (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i]); i++) {
        step++;
    }
    if (s1[step] - s2[step] > 0) {
        return 1;
    }
    else if (s1[step] - s2[step] < 0) {
        return -1;
    }
    return 0;
}

void strCopy(char s[], char dest[]) {
    for (int i = 0; i < strlen(s); i++) {
        dest[i] = s[i];
    }
    dest[strLength(s)] = '\0';
}

void strConcat(char s1[], char s2[]) {
    int len = strLength(s1);
    int add = strLength(s2);
    for (int i = len; i < len + add; i++) {
        s1[i] = s2[i - len];
    }
    s1[len + add] = '\0';
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    char ch[] = "kukish";
    
    char comp1[30] = "strawcerry";
    char comp2[30] = "strawberry";

    char cpy[] = "risk of rain";
    char dest[50];

    //printf("\n%u", strlen(ch));
    printf("Длина строки: %d\n", strLength(ch));

    //printf("%d\n", strcmp(t1, t2));
    printf("Сравнение строк - %d\n", strCompare(comp1, comp2));

    printf("before - %s\n", dest);
    strCopy(cpy, dest);
    printf("after - %s", dest);

    printf("\n\nДо прибавки - %s", comp2);
    strConcat(comp2, dest);
    printf("\nПосле прибавки - %s", comp2);
}


