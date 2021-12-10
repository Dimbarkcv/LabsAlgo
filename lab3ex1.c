#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int a;
    FILE *f;
    FILE *g;
    f = fopen("f.txt", "r");
    g = fopen("g.txt", "w");
    while ( fscanf(f, "%d", &a) != EOF ) {
        if (a % 2 == 0) {
            fprintf(g, "%d ", a);
        }
    }
    fprintf(g, "\n");
    fclose(f);
    fclose(g);
    return 0;
}