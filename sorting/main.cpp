#include "sorting.hpp"

using namespace std;

int main() {
    int input1[] = {-1, 2, 3, 5, -2, 8};
    int input2[] = {-1, 2, 3, 5, -2, 8};
    int input3[] = {-1, 2, 3, 5, -2, 8};
    
    int input1Size = sizeof(input1)/sizeof(input1[0]);
    int input2Size = sizeof(input2)/sizeof(input2[0]);
    int input3Size = sizeof(input3)/sizeof(input3[0]);
    
    insertionSort(input1, input1Size);
    bubbleSort(input2, input2Size);
    quickSort(input3, input3Size);
    return 0;
}
