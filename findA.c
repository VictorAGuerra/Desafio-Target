#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 500


int findA(char* string);


int main(void) {

    char string[BUFFER];
    
    printf("Digite uma string: ");
    scanf("%s", string);

    printf("\nA contagem total de 'a' + 'A' na string é: %d\n", findA(string));
    return 0;
}


int findA(char* string) {

    char *ptr = &string[0];

    int count = 0;

    while (*ptr != '\0') {

        if (*ptr == 'a' || *ptr == 'A') {
            count += 1;
        }

        ptr += 1;
    }

    return count;
}