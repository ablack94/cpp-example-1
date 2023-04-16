#ifndef HG_BUBBLESORT_HPP
#define HG_BUBBLESORT_HPP

#include <vector>


namespace black
{

// anonymous namespace for implementation details
namespace
{

template <typename T>
void swap(T* a, T* b)
{
    if constexpr (std::is_integral_v<T>)
    {
        // xor swap for integer types
        // https://en.wikipedia.org/wiki/XOR_swap_algorithm
        *a = *a ^ *b;
        *b = *b ^ *a;
        *a = *a ^ *b;
    }
    else
    {
        // Swap values using temporary storage
        T temp = *a;
        *a = *b;
        *b = temp;
    }
}

} // anonymous

// Bubblesort in-place on an array
template <typename T>
void bubblesort(T* data, size_t data_size)
{
    for(size_t i=0; i<data_size; ++i)
    {
        for(size_t j=1; j<data_size - i; ++j)
        {
            T *p1 = data + (j-1);
            T *p2 = data + j;
            if(*p1 > *p2)
            {
                swap(p1, p2);
            }
        }
    }
}

// Overload to support vectors
template <typename T>
void bubblesort(std::vector<T>* data)
{
    bubblesort(data->data(), data->size());
}

} // black

#endif
