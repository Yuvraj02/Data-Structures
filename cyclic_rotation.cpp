#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int length = sizeof(arr)/sizeof(int);

    for (int i = 1; i < length; i++)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
    }

    for (auto i : arr)
    {
        cout<<i;
    }
    
    

    return 0;
}