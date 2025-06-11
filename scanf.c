scanf("%d", &age)

Legge un intero, lo memorizza in age; controlla che sia stato letto correttamente.

scanf("%f", &weight)

Legge un numero floating-point in weight; verifica il successo della conversione.

scanf("%19s", name)

Legge una parola (fino al primo whitespace), massimo 19 caratteri + \0, per evitare overflow di name[20].

Controllo del valore di ritorno

Se diverso da 1, significa che la conversione non è andata a buon fine o c’è stato EOF.

Uso di %s

//Non legge spazi interni: se servono frasi è necessario usare fgets().
/////////////////////////////////////////////////

//scanf->fa praticamente 3 cose:
//       1)da la possibilità di inserire un valore
//       2)verifica che il valore inserito sia del tipo richiesto(es %d->deve essere un intero altrimenti se metto un carattere da errore
//       3)se tutto come richiesto restituisce true

#include <stdio.h>

int main(void) {
    int    age;
    float  weight;
    char   name[20];

    // 1) Lettura di un intero
    printf("Inserisci la tua età: ");
    if (scanf("%d", &age) != 1) {
        printf("Input non valido per l'età.\n");
        return 1;
    }

    // 2) Lettura di un float
    printf("Inserisci il tuo peso (es. 70.5): ");
    if (scanf("%f", &weight) != 1) {
        printf("Input non valido per il peso.\n");
        return 1;
    }

    // 3) Lettura di una stringa con limite
    printf("Inserisci il tuo nome: ");
    if (scanf("%19s", name) != 1) {  // %19s per evitare overflow
        printf("Input non valido per il nome.\n");
        return 1;
    }

    // 4) Stampa dei dati letti
    printf("\nDati inseriti:\n");
    printf("Età   : %d anni\n", age);
    printf("Peso  : %.2f kg\n", weight);
    printf("Nome  : %s\n", name);

    return 0;
}
