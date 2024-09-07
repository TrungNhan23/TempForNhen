#include "vec.h"

template <typename type>
vector<type>::vector()
{
    arr = new type[1];
    cap = 1;
    current = 0;
}

template <typename type>
vector<type>::~vector()
{
    delete[] arr;
}

template <typename type>
int vector<type>::size()
{
    return current;
}

template <typename type>
int vector<type>::capacity()
{
    return cap;
}

template <typename type>
void vector<type>::show()
{
    for (int i = 0; i < current; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename type>
void vector<type>::push_back(type value)
{
    if(current == cap){
        type* temp = new type[2*cap]; 

        for(int i = 0; i < capacity; i++){
            temp[i] = arr[i]; 
        }

        delete [] arr; 
        cap *= 2; 
        arr = temp; 
    }

    arr[current] = value; 
    current++; 
}
