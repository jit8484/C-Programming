#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str, int *vowelCount, int *consonantCount, int *digitCount, int *specialCount) {
    *vowelCount = *consonantCount = *digitCount = *specialCount = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        } else if (ch >= '0' && ch <= '9') {
            (*digitCount)++;
        } else {
            (*specialCount)++;
        }
    }
}

int main() {
    char str[100];
    int vowelCount, consonantCount, digitCount, specialCount;

    printf("Enter a String: ");
    scanf("%[^\n]", str); // Reads input including spaces

    countCharacters(str, &vowelCount, &consonantCount, &digitCount, &specialCount);

    printf("Vowel count is: %d\n", vowelCount);
    printf("Consonant count is: %d\n", consonantCount);
    printf("Digit count is: %d\n", digitCount);
    printf("Special Character count is: %d\n", specialCount);

    return 0;
}
