#include <stdio.h>
#include <string.h>

void caesar_shift(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' + shift) % 26) + 'a';
        }
    }
}

int main() {
    char answer[100];

    // Encoded message
    char evidence[] = "01100110 01111001 01100010 01100101 01110010 01110011 01100101 01100011 01110101 01110010 01101001 01110100 01111001";

    printf("=== Digital Evidence Recovery ===\n\n");
    printf("Recovered data fragment:\n");
    printf("%s\n\n", evidence);

    printf("The system detected corrupted text.\n");
    printf("Recover the original message.\n\n");

    for (int attempts = 3; attempts > 0; attempts--) {
        printf("Enter recovered message (%d attempts left): ", attempts);
        scanf("%s", answer);

        if (strcmp(answer, "cybersecurity") == 0) {
            printf("\nRecovery successful.\n");
            printf("Evidence unlocked.\n");
            return 0;
        }

        printf("Recovery failed.\n\n");
    }

    printf("Evidence permanently locked.\n");

    return 0;
}
