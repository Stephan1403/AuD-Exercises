#include <iostream>

int T(int n){
    if(n<=1){
        return 1;
    }

    return (n * T(n-1) + n);
}

int T_it(int n){
    if(n<=1){
        return 1;
    }

    int res = 1;
    for(int i=2; i<=n; i++){
        res = (i * res) + i;
    }
    return res;
}



int main(){
    
    //rekursiv
    for(int i=1; i<=10; i++){
        std::cout << "Rekursiv - F(" << i << "): " << T(i) << std::endl;
    }

    printf("\n\n");

    //iterativ
    for(int i=1; i<=10; i++){
        std::cout << "Iterativ - F(" << i << "): " << T_it(i) << std::endl;
    }
}