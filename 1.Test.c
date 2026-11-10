#include <stdio.h>

int leet(char text[]) {
    int ausgabe[10];
    for(int i = 0; i < sizeof(*text); i++) {
        if(text[i] = 'e') {
            ausgabe[i] = 3;
        }
        if(text[i] != 'e') {
            ausgabe[i] = text[i];
        }
    }
    return *ausgabe;
}

int main() {
    char text[10];
    printf("Gib einen Text ein (max 10 Buchstaben):");
    scanf("%c", &text);
    printf("%d", leet(text));
}