#include <iostream>


//insertionsort
template<class T>
void insertionsSort(T* values, int len){

int i, j;
for(i=1; i<len; i++){

    T an = values[i];
    j = i;
    while (j>0 && an<values[j-1]){

        values[j] = values[j-1];
        j--;
    }
    values[j] = an;

    //print values
    std::cout << std::endl << "i=" << i << ": ";

    for(int x=0; x<len; x++){
        std::cout << values[x] << " ";
    }
}

}



int main(){

    int* a = new int[9];
    a[0] = 0, a[1] = 10, a[2] = 20, a[3] = 1, a[4] = 11, a[5] = 21, a[6] = 2, a[7] = 12, a[8] = 22;

    insertionsSort<int>(a, 9);


}