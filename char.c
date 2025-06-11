#include <stdio.h>
#include <ctype.h>   // per isupper, islower, tolower, toupper

int main(void) {
    char c;
    printf("Inserisci un carattere: ");
    c = getchar();             // legge un singolo carattere da stdin
    // ISUPPER->è magliuscolo?
    if (isupper((unsigned char)c)) {
        // se è una lettera maiuscola, la converto in minuscola
        //TOLOWER-> converte in minuscolo 
        char lower = tolower((unsigned char)c);
        printf("Hai inserito una maiuscola. In minuscolo diventa: %c\n", lower);
      //ISLOWER->è minuscolo?     
    } else if (islower((unsigned char)c)) {
        // se è una lettera minuscola, la converto in maiuscola
        //TOUPPER-> converte in magliuscolo
        char upper = toupper((unsigned char)c);
        printf("Hai inserito una minuscola. In maiuscolo diventa: %c\n", upper);
    } else {
        printf("Il carattere '%c' non è una lettera alfabetica.\n", c);
    }

    return 0;
}
