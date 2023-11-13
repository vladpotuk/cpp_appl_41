
#include <iostream>
#include "strlib.h"

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "world!";

    char buffer[50];

 
    std::cout << "Choose an operation:" << std::endl;
    std::cout << "1. Calculate the length of a string" << std::endl;
    std::cout << "2. Copy a string" << std::endl;
    std::cout << "3. Concatenate two strings" << std::endl;
    std::cout << "4. Search for a character in a string" << std::endl;
    std::cout << "5. Search for a substring in a string" << std::endl;

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1: {
        
        std::cout << "Length of str1: " << mystrlen(str1) << std::endl;
        break;
    }
    case 2: {
        
        mystrcpy(buffer, str1);
        std::cout << "Copied string: " << buffer << std::endl;
        break;
    }
    case 3: {
        
        mystrcat(buffer, str2);
        std::cout << "Concatenated string: " << buffer << std::endl;
        break;
    }
    case 4: {
        
        char searchChar;
        std::cout << "Enter a character to search: ";
        std::cin >> searchChar;
        char* charPtr = mystrchr(buffer, searchChar);
        if (charPtr) {
            std::cout << "Found '" << searchChar << "' at position: " << (charPtr - buffer) << std::endl;
        }
        else {
            std::cout << "'" << searchChar << "' not found." << std::endl;
        }
        break;
    }
    case 5: {
        
        char substring[50];
        std::cout << "Enter a substring to search: ";
        std::cin >> substring;
        const char* substringPtr = mystrstr(buffer, substring);
        if (substringPtr) {
            std::cout << "Found substring '" << substring << "' at position: " << (substringPtr - buffer) << std::endl;
        }
        else {
            std::cout << "Substring '" << substring << "' not found." << std::endl;
        }
        break;
    }
    default:
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
