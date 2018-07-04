#ifndef FUNCTIONS_H //This is "include guard" to avoid multiple declarations/definitions.
#define FUNCTIONS_H

#include <vector>

template <class type> int size_of_array(const type& temp_array);
template <class type> std::vector<type> array_to_vector(type* temp_array, int size);
template <class type> void print_elements_as_column(const std::vector<type>& temp_array);
template <class type> void print_elements_as_row(const std::vector<type>& temp_array);
template <class type> void insertion_sort_ascending(std::vector<type>& temp_array);
template <class type> void insertion_sort_descending(std::vector<type>& temp_array);

#endif
