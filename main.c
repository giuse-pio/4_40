#include <stdio.h>

int main(void) {
    int lato=0, i=0, j=0;
    do {
        printf("inserisci la lunghezza del lato:");
        scanf("%d", &lato);
    } while (lato<=0);
    for ( i=0; i<lato; i++) {
        for ( j=0; j<lato; j++) {
            if (i==0 || i==lato-1 || j==0 || j==lato-1) {
                printf(" * ");

            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}
