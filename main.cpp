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
//    const int NUM_DIGITS  = 10;
//    int A[NUM_DIGITS] = {1,0,2,3,4,0,0,5,6,0};
//
//    sortZeros(A, NUM_DIGITS);
//
//    return 0;
//}
//
//
//void sortZeros(int A [], int num)
//{
//    std::cout << "                : S-T-A-R-T : " << std::endl;
//    printArray(A, num);
//    std::cout << "                : S-T-A-R-T : \n\n\n\n\n" << std::endl;
//
//    int i = 0;
//    while(i < num - 1)
//    {
//
//        printArray(A, num);
//        if(A[i] == 0)
//        {
//
//            int offset = 0;
//            std::cout <<  "A[i] right before while: i = "<< i << std::endl;
//            while(A[offset+i] == 0)
//
//            {
//
//
//                offset++;
//            }
//
//            std::cout <<  "While loop i: "<< i << std::endl;
//            std::cout << "While loop offset: "<< offset << std::endl;
//            std::cout <<  "Swap number: "<< A[offset+i] << std::endl;
//
//
//
//            A[i] = A[i+offset];
//            A[i+offset] = 0;
//
//            if(i+offset+1 >= num-1)
//            {
//                std::cout << "\n\n\n\n                : E-N-D : " << std::endl;
//                printArray(A, num);
//                std::cout << "                : E-N-D : " << std::endl;
//                return;
//            }
//            i++;
//
//        }
//        else
//        {
//            i++;
//        }
//    }
//
//    std::cout << "\n\n\n\n                : E-N-D : " << std::endl;
//    printArray(A, num);
//    std::cout << "                : E-N-D : " << std::endl;
//}
//
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