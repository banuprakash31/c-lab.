#include <stdio.h> 
int string_length(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
    length++;
    }
    return length;
}

void string_reverse(char str[]) {
    int start = 0;
    int end = string_length(str) - 1;
    char temp;

    while (start < end) {
    
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = string_length(str);
    if (str[len - 1] == '\n') {
    str[len - 1] = '\0';
    }

    printf("Length of the string: %d\n", string_length(str));
    string_reverse(str);
    printf("Reversed string: %s\n", str);

    return 0;
}

