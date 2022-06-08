#include <iostream>


//insertionsort
template<class T>
void insertionSort(T* values, int len){

    //testing
    int comparisons = 0;

    int i, j;
    for(i=1; i<len; i++){
        comparisons++;

        T an = values[i];
        j = i;
        while (j>0 && an<values[j-1]){
            comparisons++;

            values[j] = values[j-1];
            j--;
        }
        values[j] = an;


        //print values
        std::cout << std::endl << "i=" << i << ": ";
        for(int x=0; x<len; x++)
            std::cout << values[x] << " ";
    }
std::cout << "\n\nRequired comparisons: " << comparisons + len << std::endl;
}



//selectionsort
template <class T>
void selectionSort(T* values, int len){

    //testing
    int comparisons = 0;

    int i, j, i_min;
    for(i=0; i<len; i++){
        comparisons++;

        i_min = i; 
        for(j=i+1; j<len; j++)
            if(values[j]<values[i_min]) i_min = j; comparisons++;
        
        //swap i and imin
        T store = values[i];
        values[i] = values[i_min];
        values[i_min] = store;


        //print values
        std::cout << std::endl << "i=" << i << ": ";
        for(int x=0; x<len; x++)
            std::cout << values[x] << " ";
    }
std::cout << "\n\nRequired comparisons: " << comparisons + len << std::endl;
}



template<class T>
void exchangeSort(T* values, int len){

    //testing
    int comparisons = 0;

    int i, j; 
    for(i=0; i<len-1; i++){

        for(j=len-2; j>=i; j--){

            comparisons+=1;

            if(values[j]>values[j+1]){
                //swap j and j+1
                T store = values[j];
                values[j] = values [j+1];
                values[j+1] = store;
            }
        }


        //print values
        std::cout << std::endl << "i=" << i << ": ";
        for(int x=0; x<len; x++)
            std::cout << values[x] << " ";
    }
std::cout << "\n\nRequired comparisons: " << comparisons + len << std::endl;
}




int main(){

    int* a = new int[9];
    a[0] = 0, a[1] = 10, a[2] = 20, a[3] = 1, a[4] = 11, a[5] = 21, a[6] = 2, a[7] = 12, a[8] = 22;

    exchangeSort<int>(a, 9);


}