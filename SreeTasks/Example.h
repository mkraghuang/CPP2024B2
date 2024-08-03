#pragma once
class Example{

    
    public:
        int* arr;

        Example() : arr(nullptr) {}
        ~Example();

        void Allocatearray(int size);
        int* ArrayValues(int* arr, int size);
        void PrintArrayValues(int* arr, int size);

        Example(int* arr)
            : arr(arr)
        {
        }
};




