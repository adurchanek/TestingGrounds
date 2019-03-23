////
//// Created by Antonin Durchanek on 2019-03-22.
////
//
//
//
//#include <iostream>
//#include <random>
//#include <string>
//
//void sortZeros(int A [], int num);
//void printArray(int A[], int num);
//
//
//int main()
//{
//    const int NUM_DIGITS  = 20;
//    int A[NUM_DIGITS] = {1,0,0,0,4,0,0,5,6,7,0,8,9,10,0,0,11,12,0,0};
//
//    sortZeros(A, NUM_DIGITS);
//
//    return 0;
//}
//
//
//void sortZeros(int A [], int num)
//{
//
//    int i = 0;
//    int positionalOffset = 0;
//    while(i < num - 1)
//    {
//        printArray(A, num);
//        if(A[i] == 0)
//        {
//            positionalOffset++;
//
//            int offset = 0;
//
//            while(i + offset < num - 1 && A[offset+i] == 0)
//            {
//                offset++;
//            }
//
//            A[positionalOffset] = A[i+offset];
//            A[i+offset] = 0;
//
//            i +=(offset);
//        }
//        else
//        {
//            i++;
//        }
//    }
//}
//
//
//void printArray(int A[], int num)
//{
//
//    std::cout << "                {";
//    for(int i = 0; i < num; i++)
//
//    {
//        std::cout << A[i]<< ",";
//    }
//    std::cout << "}" << std::endl;
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////            if(i+offset+1 >= num-1)
////            {
////                std::cout << "\n\n\n\n                : E-N-D : " << std::endl;
////                printArray(A, num);
////                std::cout << "                : E-N-D : " << std::endl;
////                return;
////            }