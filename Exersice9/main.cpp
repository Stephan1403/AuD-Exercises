#include <iostream>




template<class T>
void exchangeSort(T* values, int len){

    // Testing
    int comparisons = 0;

    bool unsorted = true;                        //W hen false break from loop
    int i, j; 
    for(i=0; i<len-1 && unsorted; i++){

        unsorted = false;                        // Expect the array to be sorted for the next run

        for(j=len-2; j>=i; j--){

            comparisons+=1;
            if(values[j]>values[j+1]){

                //swap j and j+1
                unsorted = true;
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

    std::cout << "\nRequired " << comparisons << " comparisons" << std::endl;
}





int main(){
    int* a = new int[9];
    a[0] = 0, a[1] = 10, a[2] = 20, a[3] = 1, a[4] = 11, a[5] = 21, a[6] = 2, a[7] = 12, a[8] = 22;

    exchangeSort<int>(a, 9);

}