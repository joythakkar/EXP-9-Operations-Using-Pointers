// Joy Thakkar 
// 24070123051

#include <iostream> 
using namespace std;

int main(){
    // Reversing an array using pointers
    int array[15] = {5,6,7,22,3,1,4,6,0,3,6,6,2,2,5};
    int len = (sizeof(array)/sizeof(array[0]));
    int *strt_ptr,*end_ptr;
    strt_ptr = &array[0];
    end_ptr = &array[len - 1];
    
    while(end_ptr >= strt_ptr){
        cout<< *end_ptr <<"\t";
        end_ptr--;
    }
    return 0;
}

/*
Sample Output: 
5	2	2	6	6	3	0	6	4	1	3	22	7	6	5
*/
