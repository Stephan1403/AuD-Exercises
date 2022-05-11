#include <iostream>

//recursive Function
int F_r(int n){
    if(n <= 2){
        return 1;
    }else{
        return n + F_r(n-2);
    }
}

//iterative Function
int F_i(int n){
    if(n <= 2){
        return 1; 
    }else{
        int num1 = 1, num2 = 1; //num1 = F(n-1), num2 = F(n-2)
        int result;

        for(int i=3; i<=n; i++){
            result = i + num2;
            num2 = num1;
            num1 = result;
        }
        return result;
    }
}


int main(){

    std::cout << "Recursive calculations" << std::endl;
    for(int i=1; i<=5; i++){
        std::cout << F_r(i) << std::endl;
    }
    printf("\n");

    std::cout << "Iterative calculations" << std::endl;
    for(int i=1; i<=5; i++){
        std::cout << F_i(i) << std::endl;
    }


}   