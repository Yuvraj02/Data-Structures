#include <iostream>

using namespace std;
int main() {

     /* code */
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,6,7,8,9,10};

     if (sizeof(arr1) != 0 && sizeof(arr2) != 0)
    {
    const int lengthOfArr1 = sizeof(arr1)/sizeof(int);
    const int lengthOfArr2 = sizeof(arr2)/sizeof(int);

    int mergedArr[lengthOfArr1+lengthOfArr2];

    for (size_t i = 0; i < lengthOfArr1; i++)
    {
            mergedArr[i] = arr1[i];
    }
    
    for (int j = 0, i = lengthOfArr2 ; j<lengthOfArr2 ; j++,i++)
    { 
        
        mergedArr[i] = arr2[j];
        /* code */
    }
    

    for (auto data : mergedArr)
    {
        /* code */
        cout<<data;
    }

    } else {
        cout<<"Invalid data";
    }
    

    return 0;
}
