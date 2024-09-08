#ifndef vec_h
#define vec_h

#include <iostream>

template <typename type>
class vec
{
private:
    // this arr which stores the address of vec
    type *arr;
    // total storage
    int cap;
    // current number of elements
    int current;

public:
    vec();
    ~vec();
    // vec &operator=(const vec &vec);
    // vec &operator=(const vec &&vec);
    // vec &operator=(initializer_list <type> il);
    void push_back(type value);
    void pop_back();
    void push_front(int val); 
    void pop_front(); 
    int size();
    int capacity();
    void insert(type value, int pos);
    bool isEmpty();
    void show();
};

#include "vec.h"

template <typename type>
vec<type>::vec()
{
    arr = new type[1];
    cap = 1;
    current = 0;
}

template <typename type>
vec<type>::~vec()
{
    delete[] arr;
}

template <typename type>
int vec<type>::size()
{
    return current;
}

template <typename type>
int vec<type>::capacity()
{
    return cap;
}

template <typename type>
void vec<type>::show()
{
    for (int i = 0; i < current; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename type>
void vec<type>::push_back(type value)
{
    if (current == cap)
    {
        type *temp = new type[2 * cap];

        for (int i = 0; i < cap; i++)
        {
            temp[i] = arr[i];
        }

        delete[] arr;
        cap *= 2;
        arr = temp;
    }

    arr[current] = value;
    current++;
}

template <typename type>
void vec<type>::pop_back()
{
    if (current == 0)
        return;
    current--;
}

template <typename type>
bool vec<type>::isEmpty()
{
    return (current == 0) ? true : false;
}

#endif
