#include <iostream>


float harmo_rec(float n){
    if(n == 1){
        return 1; }
    
    return (1 / n) + harmo_rec(n-1);
}


float harmo_it(float n){
    float res = 0;
    for(float x = 1; x <= n; x++){
        res += 1 / x;
    }

    return res;
}



int main(){

    std::cout << "Harmonische Reihe rekursiv: " << harmo_rec(6) << std::endl;

    std::cout << "Harmonische Reihe iterativ: " << harmo_it(6) << std::endl;

}

