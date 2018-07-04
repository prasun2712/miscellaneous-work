#include <iostream>
#include <vector>
#include "functions.h"

using namespace std;

/*
 * This function accepts array and returns its size.
*/
template <class type> int size_of_array(const type& temp_array)
{
    return sizeof(temp_array)/sizeof(*temp_array);
}

/*
 * This function accepts an array of any type and returns vector of same type.
 *
 * Since re-seating is necessary in this application, then pass-by-pointer is the fall-back solution.
 * Re-seated means that once initialized (constructed) to refer to a particular variable,
 * they cannot be made to refer to another variable (or "re-seated")
*/
template <class type> vector<type> array_to_vector(type* temp_array, int size)
{
    vector<type> return_array;
    for (int i = 0; i < size; i++)
        return_array.push_back(temp_array[i]);
    return return_array;
}

/*
 * This function accepts vector of any type and prints its elements in a column.
*/
template <class type> void print_elements_as_column(const vector<type>& temp_array)
{
    for (int i = 0; i < temp_array.size(); i++)
    {
        cout << "Element at position " << i << " is : " << temp_array[i] << endl;
    }
}

/*
 * This function accepts vector of any type and prints its elements in a row.
*/
template <class type> void print_elements_as_row(const vector<type>& temp_array)
{
    for (int i = 0; i < temp_array.size(); i++)
    {
        if (i == temp_array.size()-1)
            cout << temp_array[i] << endl;
        else
            cout << temp_array[i] << ", ";
    }
}

/*
 * This function accepts vector of any type and performs insertion sort in ascending order on them.
*/
template <class type> void insertion_sort_ascending(vector<type>& temp_array)
{
    const int temp_array_size = temp_array.size();
    type key;
    int j;
    for (int i = 1; i < temp_array_size; i++)
    {
        key = temp_array[i];
        j = i - 1;
        while (j >= 0 && temp_array[j] > key)
        {
            temp_array[j+1] = temp_array[j];
            j--;
        }
        temp_array[j+1] = key;
    }
}

/*
 * This function accepts vector of any type and performs insertion sort in descending order on them.
*/
template <class type> void insertion_sort_descending(vector<type>& temp_array)
{
    insertion_sort_ascending(temp_array);
    reverse(temp_array.begin(),temp_array.end());
}
