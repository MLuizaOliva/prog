#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "La vida es uma barca";
    char palavra[50];
    int i = 0, j = 0, k = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            palavra[j] = str[i];
            j++;
        } else {
            palavra[j] = '\0';
            printf("%s\n", palavra);
            j = 0;
        }
        i++;
    }
    palavra[j] = '\0';
    printf("%s\n", palavra);

    return 0;
}