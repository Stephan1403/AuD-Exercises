#include <iostream>


//insertionsort
template<class T>
void insertionsSort(T* values, int len){


for(int j, i=1; i<len)

    T an = values[i];
    j = i;
    while (j>0 && an<values[j-1]){

        values[j] = values[j-1];
        j--;
    }
    a[j] = an;
}



int main(){
    


}