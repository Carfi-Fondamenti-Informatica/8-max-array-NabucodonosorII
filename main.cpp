#include <iostream>
#include "lib.h"
using namespace std;
int main(){
    int dim;
    cin >> dim;
    int elenco[dim];
    int n;
    for (n=0;n<dim;n++){
        cin >> elenco[n];
    };
    cout << massimo(elenco,dim);
    return 0;
}
