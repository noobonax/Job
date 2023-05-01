#include <stdio.h>

int main() {
    int num, fib1 = 0, fib2 = 1, fib_atual = 1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    while (fib_atual < num) {
        fib_atual = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib_atual;
    }
    if (fib_atual == num) {
        printf("%d pertence a sequencia de Fibonacci.\n", num);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.\n", num);
    }
    return 0;
}

