#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {

    string actual_string = "Rashi";    
    
    size_t low = 0;
    int high = actual_string.size()-1;
    
    for (low,high; low < high; low++,high--)// O(n)
    {
        char temp = actual_string[high];
        actual_string[high] = actual_string[low];
        actual_string[low] = temp;
    }

    cout<<actual_string;

    return 0;
}