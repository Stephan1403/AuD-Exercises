#include <iostream>

//fibonacci using a recursive function
long long int fib_rec(long long int n){
    if(n<=2){
        return 1;
    }
    return fib_rec(n-1) + fib_rec(n-2);
}

//fibonacci using an array
long long int fib_arr(long long int n){
    if(n<=2){
        return 1;
    }

    int* nums = new int[n];
    nums[0] = 1; 
    nums[1] = 1;
    int res;

    for(long long int i=3; i<=n; i++){
        res = nums[i-2] + nums[i-3];
        nums[i-1] = res;
    }
    return res;
}


//fibonacci iterativ using 3 varibales
long long int fib_it(long long int n){
    if(n<=2){
        return 1;
    }

    long long int res;
    long long int fib1=1, fib2=1;
    for(long long int i=3; i<=n; i++){
        res = fib1 + fib2;
        fib2 = fib1;
        fib1 = res;
    }
    return res;
}




int main(){

    std::cout << fib_rec(45) << std::endl;
    
    std::cout << fib_arr(42) << std::endl;

    std::cout << fib_it(42) << std::endl;


}






