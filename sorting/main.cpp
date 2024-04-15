#include "sorting.hpp"

using namespace std;

//Variables for random function
int randomUpperBound = 30;
int randomLowerBound = -30;

int lengthUpperBound = 15;  //Maximum entries in the list
int lengthLowerBound = 5;   //Minimum entries in the list, cannot be less than 1

int listLength = 0;

int main() {
    //Randomized input test cases
    listLength = rand() % ((lengthUpperBound - lengthLowerBound + 1) + lengthLowerBound);

    int insertion[listLength] = {0};

    for(int i = 0; i < listLength; i++){
            insertion[i] = rand() % ((randomUpperBound - randomLowerBound + 1) + randomLowerBound);
    }
    
    listLength = rand() % ((lengthUpperBound - lengthLowerBound + 1) + lengthLowerBound);

    int bubble[listLength] = {0};

    for(int i = 0; i < listLength; i++){
            bubble[i] = rand() % ((randomUpperBound - randomLowerBound + 1) + randomLowerBound);
    }

    listLength = rand() % ((lengthUpperBound - lengthLowerBound + 1) + lengthLowerBound);

    int quick[listLength] = {0};

    for(int i = 0; i < listLength; i++){
            quick[i] = rand() % ((randomUpperBound - randomLowerBound + 1) + randomLowerBound);
    }

    //Finding the size of the arrays
    int insertionSize = sizeof(insertion)/sizeof(insertion[0]);
    int bubbleSize = sizeof(bubble)/sizeof(bubble[0]);
    int quickSize = sizeof(quick)/sizeof(quick[0]);
    
    insertionSort(insertion, insertionSize);
    bubbleSort(bubble, bubbleSize);
    quickSort(quick, quickSize);
    return 0;
}
