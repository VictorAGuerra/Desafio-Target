#include <stdio.h>

int fibonacci(int prompt, int start, int current);


int main(void) {

    int prompt;

    printf("\nDigite um número: ");
    scanf("%d", &prompt);

    if (fibonacci(prompt, 0, 1) == 0) {
        printf("\nO número pertence a sequência de Fibonacci.\n");
        return 0;
    }

    printf("\nO número não pertence a sequencia de Fibonacci.\n");
    return 0;
}


int fibonacci(int prompt, int start, int current) {

    if (prompt < 0) {
        return 1;
    }

    if (prompt == 0 || prompt == 1) {
        return 0;
    }
    
    int next = start + current;

    if (next > prompt) {
        return 1;
    }

    if (next == prompt) {
        return 0;
    }
    
    return fibonacci(prompt, current, next);
}