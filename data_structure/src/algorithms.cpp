#include <data_structure/functions.cpp>
#include <string.h>

using namespace std;

void usages()
{
    cout << "Usages :" << endl;
    cout << "rosrun data_structure algorithms_node <option>" << endl;
    cout << "Options :" << endl;
    cout << "---------" << endl;
    cout << "n - Number example." << endl;
    cout << "c - Character example." << endl;
    cout << "s - String example." << endl;
}

int main(int argc,char** argv)
{
    //Playing with array.
    if (argc != 2)
    {
        usages();
    }
    else
    {
        if (argv[1]==string("n"))
        {
            cout << "Inside n" << endl;
            float array_list[] = {2,1,9,3,10,6,13,22,17};
            vector<float> vector_array;
            vector_array = array_to_vector(array_list,size_of_array(array_list));
            cout << "Unsorted : " << endl;
            print_elements_as_row(vector_array);
            insertion_sort_ascending(vector_array);
            cout << "Sorted : " << endl;
            print_elements_as_row(vector_array);
        }
        else if (argv[1]==string("c"))
        {
            char array_list[] = {'a','g','s','d','f','h','j'};
            vector<char> vector_array;
            vector_array = array_to_vector(array_list,size_of_array(array_list));
            cout << "Unsorted : " << endl;
            print_elements_as_row(vector_array);
            insertion_sort_ascending(vector_array);
            cout << "Sorted : " << endl;
            print_elements_as_row(vector_array);
        }
        else if (argv[1]==string("s"))
        {
            string array_list[] = {"temp","apple","google","mohit","sun","applf"};
            vector<string> vector_array;
            vector_array = array_to_vector(array_list,size_of_array(array_list));
            cout << "Unsorted : " << endl;
            print_elements_as_row(vector_array);
            insertion_sort_ascending(vector_array);
            cout << "Sorted : " << endl;
            print_elements_as_row(vector_array);

        }
        else
        {
            usages();
        }
    }
    return 0;
}
