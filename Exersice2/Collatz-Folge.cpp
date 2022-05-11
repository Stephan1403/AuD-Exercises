#include <iostream>



void collatz(int num){
    std::cout << "Collatz-Folge für " << num << ":" << std::endl;

    while(num != 1){
        //output
        std::cout << num << ", ";

        if(num % 2 == 0){
            //gerade
        }else{  
            //ungerade
            num = 3 * num + 1;
        }
    }
    std::cout << 1 << std::endl << std::endl;
}


int main(){
    collatz(27);
    collatz(37);
    collatz(42);


}