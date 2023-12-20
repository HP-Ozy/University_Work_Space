/*
compito: 
UN PICCOLO ROVER DA MANDARE IN ISPEZIONE SU MARTE HA NECESSITà DI 
SUPERARE DISLIVELLI DI DIMENSIONI MODESTE QUANDO SI TROVANO AL FONDO DI UNA BUCA 

VI SI CHIEDE DI REALIZZARE UNA PROCEDURA CHE RICHIEDE AL ROVER DI USCIRE DI UNA BUCA E DI CONTINUARE.

PER SIMULARE IL COMPORTAMENTO DEL ROVER , SI CONSIDERI UNA MATRICE DI DIMENSIONI R x C 
di valore int CHE rappresenti il territorio dove si trova il rover. ogni cella corrisponde a un riquadro di terreno di dimensioni 10 cm x 10 cm e valore della cella corrispondente alla sua altezza in milimetri rispetto a un livello base ( pari a 0 ) 


crea un programma in linguaggio C89 che richieda all'utente 1 il nome del file che descrive il territorio si supponga che il file contenga una matrice di int di R x C  con R e C noti a propri e definiti 
con #define e 2 la pozione R-C iniziale rover quindi visualizzi le cordinate quando utilizza i proprulsori R,C iniziale del rover; quindi vizualizzi le cordinate quando utilizza i propulsori e verifichi se il percorso raggiunge )

*/
#include <stdio.h>

// Definizione delle dimensioni della matrice
#define R 5
#define C 5

// Funzione per visualizzare la matrice
void visualizzaMatrice(int matrice[R][C]) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

// Funzione principale
int main() {
    // Dichiarazione della matrice e delle variabili per le coordinate iniziali
    int territorio[R][C];
    int rIniziale, cIniziale;

    // Richiesta del nome del file contenente la matrice
    char nomeFile[100];
    printf("Inserisci il nome del file: ");
    scanf("%s", nomeFile);

    // Caricamento della matrice dal file
    FILE *file = fopen(nomeFile, "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1; // Termina il programma con errore
    }

    // Leggi la matrice dal file
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            fscanf(file, "%d", &territorio[i][j]);
        }
    }

    // Richiesta delle coordinate iniziali del rover
    printf("Inserisci le coordinate iniziali del rover (R C): ");
    scanf("%d %d", &rIniziale, &cIniziale);

    // Visualizza la matrice e le coordinate iniziali del rover
    printf("Matrice del territorio:\n");
    visualizzaMatrice(territorio);
    printf("Coordinate iniziali del rover: (%d, %d)\n", rIniziale, cIniziale);

    // Simulazione del percorso del rover
    // In questo esempio, il rover si muove in avanti fino a raggiungere la fine della matrice
    // Puoi implementare la tua logica a seconda dei requisiti specifici

    int r = rIniziale;
    int c = cIniziale;

    while (r < R - 1) {
        // Simula l'uso dei propulsori
        r++;

        // Visualizza le nuove coordinate del rover
        printf("Coordinate del rover dopo l'uso dei propulsori: (%d, %d)\n", r, c);
    }

    // Verifica se il percorso raggiunge la fine
    if (r == R - 1 && c == cIniziale) {
        printf("Il percorso del rover ha raggiunto la fine.\n");
    } else {
        printf("Il percorso del rover non ha raggiunto la fine.\n");
    }

    fclose(file); // Chiudi il file

    return 0; // Termina il programma con successo
}
