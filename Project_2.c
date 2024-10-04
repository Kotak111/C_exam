#include <stdio.h>

void countVowels(const char *string, int *vowel) {
   
    for (int i = 0; string[i] != '\0'; i++) {
        char ch = string[i];
        switch (ch) {
            case 'a':
            case 'A':
                vowel[0]++;
                break;
            case 'e':
            case 'E':
                vowel[1]++;
                break;
            case 'i':
            case 'I':
                vowel[2]++;
                break;
            case 'o':
            case 'O':
                vowel[3]++;
                break;
            case 'u':
            case 'U':
                vowel[4]++;
                break;
        }
    }
}

int main() {
    char sentence[256]; 
    int vowelCount[5] = {0}; 

   
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    countVowels(sentence, vowelCount);

   
    printf("Vowel counts:\n");
    printf("A/a: %d\n", vowelCount[0]);
    printf("E/e: %d\n", vowelCount[1]);
    printf("I/i: %d\n", vowelCount[2]);
    printf("O/o: %d\n", vowelCount[3]);
    printf("U/u: %d\n", vowelCount[4]);

    return 0;
}
