/**
 * 2.Merge two sorted arrays array1 [u] and array2[v], the array elements should remain as sorted. 
 * The size of array1 is sufficient enough to hold both array values. 
 * Try to solve the problem using brute force technique.
 **/

#include <iostream>

using namespace std;

int main(){

    int total_length = 10;
    int arr1[total_length] = {1,2,3,4,5};       //First Array
    int arr2[] = {6,7,8,9,10};                  //Second Array


    cout<<"Before Mergeing, Array is : ";

     for (auto i : arr1)
    {
        if (i == 0)
        {
            break;
        }
        cout<<i<<" ";
    }

    int arr2_size = sizeof(arr2)/sizeof(int);
    int index_to_merge_from = 0;

    for (int i = 0 ; i < total_length; i++)
    {
        if (arr1[i] == 0)
        {
           index_to_merge_from = i;
           break;
        }
    }

    for (int j = 0, i = index_to_merge_from ; j < arr2_size; i++,j++)
    {
        arr1[i] = arr2[j];

    }

  cout<<"\nAfter Merge Array is : ";
    
    for (auto i : arr1)
    {
        if (i == 0)
        {
            break;
        }
        cout<<i<<" ";
    }

    return 0;
}