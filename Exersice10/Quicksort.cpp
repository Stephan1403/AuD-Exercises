#include <iostream>

/*
Quicksort

[4, 1, 3, 6, 8, 5, 9]
-> Pivot = 6    -> Bigger = 8   -> Smaller = 5
[4, 1, 3, 6, 5, 8, 9]
-> Pivot = 6    -> Bigger = 8   -> Smaller = 5      

=> Smaller left of bigger (small -> pivot -> big)
[4, 1, 3]
-> Pivot = 1    -> Bigger = 4   -> Smaller 


*/





//Sort an unsorted array and return it using Quicksort
template <class T> T* quicksort(T* values, int length){
    T* sorted_vals;

  


    

}



// swap to array values
template <class T> void swap(T* value1, T* value2){ //Pass address to values 
    T store = *value1;
    *value1 = *value2;
    *value2 = store;
}





// Sort a array in larger and smaller (l and r are the boarders)
template <class T> void Partion(T** values, int l, int r){
    //Get pivot and switch with last element    'IMPORTANT' to acess array use: (*array)[index]
    int pivot = (l+r)/2;
    T pivot_val = (*values)[pivot];
    swap(&(*values)[pivot], &(*values)[r]);
 
    int larger, smaller;
    // Larger item from the left
    for(int i=l; i<=r; i++){
        if((*values)[i] > pivot_val){
            larger = i;
            break;
        }
    }

    // Smaller from the right
    for(int i=r; i>=l; i--){
        if((*values)[i] < pivot_val){
            smaller = i;
            break;
        }
    }
    
    if(larger > smaller){
        // Larger value is right to smaller value
        swap( &(*values)[larger], &(*values)[pivot] );
    }else{
        swap( &(*values)[larger], &(*values)[smaller] );
    }



    



}

