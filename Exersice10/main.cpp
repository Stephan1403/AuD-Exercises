#include <iostream>
#include "Quicksort.cpp"

int main(){

    int *a = new int[7];
    a[0] = 2;
    a[1] = 6;
    a[2] = 5;
    a[3] = 3;
    a[4] = 8;
    a[5] = 7;
    a[6] = 1;
    a[7] = 0;

    for(int i=0; i<8; i++){
        std::cout << a[i] << std::endl;
    }
    std::cout << "End" << std::endl;

    //quicksort<int>();

    Partion(&a, 0, 7);


    for(int i=0; i<8; i++){
        std::cout << a[i] << std::endl;
    }
}