#ifndef vec_h
#define vec_h

#include <iostream>

template <typename type>
class vector
{
private:
    // this arr which stores the address of vector
    type *arr;
    // total storage
    int cap;
    // current number of elements
    int current;

public:
    vector();
    ~vector();
    void push_back(type value);
    void pop_back();
    int size();
    int capacity();
    void insert(type value, int pos);

    void show();
};
#endif
