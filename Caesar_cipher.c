#include <stdio.h>
#include <string.h>

void caesarCipher(char *input, int shift, char *output) {
    int i;
    for (i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + shift) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = (ch - 'A' + shift) % 26 + 'A';
        }
        output[i] = ch;
    }
    output[i] = '\0';
}

int main() {
    char input[100], output[100];
    int shift;

    printf("Enter a string to encrypt: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove newline character

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    caesarCipher(input, shift, output);

    printf("Input: %s\n", input);
    printf("Encrypted Output: %s\n", output);

    return 0;
}