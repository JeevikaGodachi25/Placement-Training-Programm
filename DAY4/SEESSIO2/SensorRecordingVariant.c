
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ticket;
    char vehicle[20];
    double gross;
    double tare;
    double net;
} Weighbridge;

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("INVALID COUNT");
        return 0;
    }

    Weighbridge *w = malloc(n * sizeof(Weighbridge));

    if (w == NULL) {
        return 1;
    }

    double total = 0.0;
    int max_index = 0;

    printf("WEIGHBRIDGE DAY BOOK\n");

    for (int i = 0; i < n; i++) {
        scanf("%d %19s %lf %lf",
              &w[i].ticket,
              w[i].vehicle,
              &w[i].gross,
              &w[i].tare);

        w[i].net = w[i].gross - w[i].tare;
        total += w[i].net;

        if (i == 0 || w[i].net > w[max_index].net) {
            max_index = i;
        }

        printf("%d %s gross %.2f tare %.2f net %.2f\n",
               w[i].ticket,
               w[i].vehicle,
               w[i].gross,
               w[i].tare,
               w[i].net);
    }

    printf("Tickets: %d\n", n);
    printf("Total net weight (kg): %.2f\n", total);

    printf("Heaviest net load: ticket %d %s %.2f\n",
           w[max_index].ticket,
           w[max_index].vehicle,
           w[max_index].net);

    free(w);
    return 0;
}
