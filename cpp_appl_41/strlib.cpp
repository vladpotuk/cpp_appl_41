
#include "strlib.h"

int mystrlen(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

char* mystrcpy(char* str1, const char* str2) {
    char* original = str1;
    while ((*str1++ = *str2++) != '\0');
    return original;
}

char* mystrcat(char* str1, const char* str2) {
    char* original = str1;
    while (*str1 != '\0') {
        str1++;
    }
    while ((*str1++ = *str2++) != '\0');
    return original;
}

char* mystrchr(char* str, char searchChar) {
    while (*str != '\0') {
        if (*str == searchChar) {
            return str;
        }
        if (*str == '\0') {
            return nullptr;
        }
        str++;
    }
    return nullptr;
}



const char* mystrstr(const char* str1, const char* str2) {
    while (*str1 != '\0') {
        const char* p1 = str1;
        const char* p2 = str2;

        while (*p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') {
            return str1;
        }

        str1++;
    }
    return nullptr;
}
