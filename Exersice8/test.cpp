#include <iostream>

template <class T> T min(T a){
    return a-T(1);
}

template<>
char min(char a){
    return a;
}



template <class T>
class Foo{
    Foo();
    T value;
};

template<>
class Foo<int>{
    Foo();
    int value;
}



int main(){


    Foo<int>* a = new Foo<int>;

    void operator++(){
        
    }

}