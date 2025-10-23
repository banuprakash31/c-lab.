#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char choice = 'Y';

    while (choice != 'N' && choice != 'n') {
    int len, i, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
    str[len - 1] = '\0';
    len--;
    }

    
    for (i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i]) {
    isPalindrome = 0;
    break;
    }
    }

    if (isPalindrome) {
    printf("The string \"%s\" is a palindrome.\n", str);
    } else {
    printf("The string \"%s\" is NOT a palindrome.\n", str);
    }

    
    printf("Do you want to check another string? (Y/N): ");
    scanf(" %c", &choice);
    while (getchar() != '\n');
    }

    printf("Program ended.\n");
    return 0;
}
