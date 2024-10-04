#include <stdio.h>
#include <ctype.h> 

void capitalize(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    FILE *inputFile, *outputFile;
    char sentence[1000];  

   
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

   
    if (fgets(sentence, sizeof(sentence), inputFile) != NULL) {
        
        capitalize(sentence);

       
        fputs(sentence, outputFile);
    }

  
    fclose(inputFile);
    fclose(outputFile);

    printf("Sentence has been capitalized and written to output.txt.\n");
    return 0;
}
