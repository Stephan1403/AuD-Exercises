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
        comparisons++;

        for(j=len-2; j>=i; j--){
            comparisons+=2;

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

    int x1[3], x2[6], x3[9];

    for(int i=0; i<9; i++){
        int n = (i/3)+(i%3)*10;
        printf("%d ", n);

        if(i<3){
            x1[i] = n;
        }
            
        if(i<6){
            x2[i] = n;
        }

        x3[i] = n;
    }

    exchangeSort<int>(x1, 3);
    exchangeSort<int>(x2, 6);
    exchangeSort<int>(x3, 9);


}