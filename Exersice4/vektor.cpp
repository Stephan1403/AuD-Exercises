#include <iostream>
#include "vektor.h"

//constructor and destructor
Vektor::Vektor(int dim){
    this->dimension = dim;
    this->daten = new int[dim];
    std::cout << "Created Vektor for " << dim << " values" << std::endl;
}

Vektor::~Vektor(){
    std::cout << "deleted Vektor" << std::endl;
}


//setter and getter
void Vektor::set(int i, int val){
    if(i <= this->dimension){
        (this->daten)[i-1] = val;
    }else{
        std::cout << "Your vector has only " << this->dimension << " dimensions. You can't access the " << i << "th dimension" << std::endl;
    }
}

int Vektor::get(int i){
    if(i <= this->dimension){
        return (this->daten)[i-1];
    }else{
        std::cout << "Your vector has only " << this->dimension << " dimensions. You can't access the " << i << "th dimension" << std::endl;
        return -1;
    }
}


//binary search
int Vektor::bin_suche(int sw){
    int lower = 0, higher = dimension-1;

    while(lower<=higher){
        int middle = (higher - lower) / 2 + lower;

        if(sw == this->daten[middle]){
            return middle+1;

        }else if(sw < this->daten[middle]){
            higher = middle-1;
        
        }else if(sw > this->daten[middle]){
            lower = middle+1;
        }

    }
    std::cout << "Couldn't find the value " << sw << " in the Vektor" << std::endl;
    return -1;
}

