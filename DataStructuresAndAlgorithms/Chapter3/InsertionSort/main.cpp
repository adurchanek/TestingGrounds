//
// Created by Antonin Durchanek on 2019-03-24.
//

#include <iostream>
template <typename T>
void insertionSort(T *A, int num);

template <typename T>
void printArray(const T *A, int num);


/* Example worked out from a data structures book
 * Main goal: to implement insertion sort
 *
 *
 * Secondary goal: improve C++ knowledge. Work on function templates
 * */

//Uncomment main() below and comment out all other main() in the current directory to run



int main()

{
    const int NUM_ARRAY = 7;

    double A[NUM_ARRAY] =  {1.2,5.1,3.1,8.6,6.5,4.3,5.2};

    printArray(A, NUM_ARRAY);
    std::cout << std::endl;

    insertionSort(A,NUM_ARRAY);
    std::cout << std::endl;
    printArray(A, NUM_ARRAY);

    return 0;
}

template <typename T>
void insertionSort(T *A, int num)
{
    for(int i = 1; i < num; i++)
    {
        T temp = A[i];
        int tempI = i;
        while(tempI >= 0 &&  A[tempI-1] > temp)
        {
            A[tempI] =  A[tempI-1];
            tempI--;
        }
        A[tempI] = temp;
    }
}

template <typename T>
void printArray(const T *A, int num)
{
    for(int i = 0; i < num; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}