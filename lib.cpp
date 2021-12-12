#include "lib.h"
float massimo(float elenco[],int dim){
    float max;
    max =elenco[0];
    for (int i=1; i< dim ; i++) {
        if (elenco[i] > max) {
            max = elenco[i];
        };
    }
    return max;
}
