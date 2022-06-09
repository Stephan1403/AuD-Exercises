#include <iostream>




template<class T>
void exchangeSort(T* values, int len){

    // Testing
    int comparisons = 0, runthroughs = 0;

    bool unsorted = true;                        //W hen false break from loop
    int i, j; 
    for(i=0; i<len-1 && unsorted; i++){

        unsorted = false;                        // Expect the array to be sorted for the next run
        runthroughs++;

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
    std::cout << "Required " << runthroughs << " runthroughs" << std::endl;

}



int main(){
    int* a = new int[3];
    a[0] = 0, a[1] = 10, a[2] = 20;

    exchangeSort<int>(a, 3);

    int* b = new int[6];
    b[0] = 0, b[1] = 10, b[2] = 20, b[3] = 1, b[4] = 11, b[5] = 21;

    exchangeSort<int>(b, 6);

    int* c= new int[9];
    c[0] = 0, b[1] = 10, c[2] = 20, c[3] = 1, c[4] = 11, c[5] = 21, c[6] = 2, c[7] = 12, c[8] = 22;

    exchangeSort<int>(c, 9);
}