#include <iostream>
#include "vektor.h"



int main(){
    Vektor* a = new Vektor(6);

    a->set(1, 2);
    a->set(2, 3);
    a->set(3, 5);
    a->set(4, 6);
    a->set(5, 7);
    a->set(6, 234234);

    std::cout << a->bin_suche(234234) << std::endl;
}

