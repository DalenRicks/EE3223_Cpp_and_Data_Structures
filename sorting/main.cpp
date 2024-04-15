#include "sorting.hpp"

using namespace std;

int main() {
    const int SIZE = 9;
    int list1[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
    int list2[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
    int list3[] = {1, 7, 3, 4, 9, 3, 3, 1, 2};
    insertionSort(list1, SIZE);
    bubbleSort(list2, SIZE);
    quickSort(list3, SIZE);
    return 0;
}
