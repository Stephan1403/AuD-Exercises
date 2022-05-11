#include <iostream>


//recursiv
int fac_rec(int n){
    if (n<=1)
        return 1;
    else
        return n * fac_rec(n-1);
}


//iterativ
int fac_it(int n){
    if (n<=1)
        return 1;
   
    int res = 1; 
    for(int i=2; i<=n; i++){
        res = res*i;
    }

    return res;
}


int main(){

    std::cout << "Recursive faculty: " << fac_rec(5) << std::endl;

    std::cout << "Iterative faculty: " << fac_it(5) << std::endl;

}