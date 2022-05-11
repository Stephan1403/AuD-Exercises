#include <iostream>


int ggT(int a, int b){
    int m = a, n = b, r, var;
    do{
        if(m<n){
            var = m;
            m = n;
            n = var;
        }
        r = m - n;
    }while(r != 0);
    return m;
}



int main(){
    std::cout << ggT(16, 28);
    



}