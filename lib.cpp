#include "lib.h"
int massimo(int elenco[],int dim){
    int max;
    max =elenco[0];
    for (int i=1; i< dim ; i++) {
        if (elenco[i] > max) {
            max = elenco[i];
        };
    }
    return max;
}
