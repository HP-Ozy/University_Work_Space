#include <stdio.h>

int main() {
    int N, somma = 0;

    // Richiedi all'utente di inserire un numero N
    printf("Inserisci un numero N: ");
    scanf("%d", &N);

    // Calcola la somma dei primi N numeri interi positivi
    for (int i = 1; i <= N; i++) {
        somma += i;
    }

    // Visualizza la somma
    printf("La somma dei primi %d numeri interi positivi è: %d\n", N, somma);

    return 0;
}
