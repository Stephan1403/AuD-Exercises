#include <iostream>


void move_ring(int n, char origin, char placeholder, char destination){
    if(n==1){   //last move
        std::cout << "Ring 1 from " << origin << " to " << destination << std::endl;
    }
    
    move_ring(n-1, origin, destination, placeholder);
    std::cout << "Ring " << n << "from" << origin << " to " << destination << std::endl;
    move_ring(n-1, placeholder, origin, destination);

}





int main(){
    move_ring(2, 'A', 'B', 'C');
    printf("\n");
    printf("\n");
    move_ring(5, 'A', 'B', 'C');
    printf("\n");
    printf("\n");
    move_ring(10, 'A', 'B', 'C');
	printf("\n");
    printf("\n");
    
    
    
    return 0;
}