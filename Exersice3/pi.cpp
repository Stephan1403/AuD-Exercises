#include <iostream>


double piRecursive(double n){
    if(n==50){
        return 1;
    }

    return (n/ (2*n+1)) * piRecursive(n+1) + 1;
}


int main(){

    double pi = 2 * piRecursive(1);
    printf("Die ersten Stellen von Pi: %.10lf", pi);
}