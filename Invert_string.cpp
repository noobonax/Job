#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j;
    char temp;

    printf("Digite uma string: ");
    scanf("%s", string);

    j = strlen(string) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }

    printf("String invertida: %s", string);

    return 0;
}

