#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int length) {
    const char *chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    char password[length + 1];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < length; i++) {
        password[i] = chars[rand() % 72];
    }
    password[length] = '\0';

    printf("Generated Password: %s\n", password);
}

int main() {
    int length;

    printf("Enter desired password length: ");
    scanf("%d", &length);

    if (length > 0) {
        generatePassword(length);
    } else {
        printf("Error: Password length must be positive.\n");
    }

    return 0;
}
