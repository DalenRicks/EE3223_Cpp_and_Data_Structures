#ifndef SORTING_H
#define SORTING_H

#include <iostream>

using namespace std;

//Function fo Insertion Sort
void insertionSort(int list[], int listSize){
    for(int i = 1; i < listSize; i++){
        //Insert list[i] into sorted sublist list[0..i-1]
        //so that list[0..i] is sorted
        
        int k;
        int currentElement = list[i];
        for(k = i-1; k >= 0 && list[k] > currentElement; k--){
            list[k+1] = list[k];
        }
        
        //Insert the current element into list[k+1]
        list[k+1] = currentElement;
    }
    
    //Printing the list after sorting
    for(int i = 0; i < listSize; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

//Function for Bubble Sort
void bubbleSort(int list[], int arraySize){
    bool needNextPass = true;
    
    for(int k = 1; k < arraySize && needNextPass; k++){
        //Array must be sorted and next pass not needed
        needNextPass = false;
        for(int i = 0; i < arraySize - k; i ++){
            if(list[i]>list[i+1]){
                //Swap list[i] with list[i+i]
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
                
                needNextPass = true;
            }
        }
    }
    
    //Printing the list after sorting
    for(int i = 0; i < arraySize; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

//Last 3 functions for Quick Sort
int partition(int list[], int first, int last){
    int pivot = list[first];    //Choose the first element as the pivot
    int low = first + 1;        //Index for forward search
    int high = last;            //Index for backward search
    
    while(high > low){
        //Search forward from left
        while(low <= high && list[low] <= pivot){
            low++;
        }
        
        //Search backward from right
        while(low <= high && list[high] > pivot){
            high--;
        }
        
        //Swap two elements in the list
        if(high > low){
            int temp = list[high];
            list[high] = list[low];
            list[low] = temp;
        }
    }
    while(high > first && list[high] >= pivot){
        high--;
    }
    
    //Swap pivot with list[high]
    if(pivot > list[high]){
        list[first] = list[high];
        list[high] = pivot;
        return high;
    }
    else{
        return first;
    }
}

void quickSort(int list[], int first, int last){
    if(last > first){
        int pivotIndex = partition(list, first, last);
        quickSort(list, first, pivotIndex - 1);
        quickSort(list, pivotIndex + 1, last);
    }
}

void quickSort(int list[], int arraySize){
    quickSort(list, 0, arraySize - 1);
    
    //Printing the list after sorting
    for(int i = 0; i < arraySize; i++){
        cout << list[i] << " ";
    }
    cout << endl;
}

#endif // SORTING_H
