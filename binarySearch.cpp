#include <iostream>

using namespace std;

int binarySearch(int arr[], int,int);

int main(){

int arr[] = {1,2,3,4,5,6,7,8,9,12,13,15,18};

    int length = sizeof(arr)/sizeof(int);

   cout<<binarySearch(arr,length,20);

    return 0;
}

int binarySearch(int arr[], int length, int key){

    int start = 0;
    int end = length-1;
    int mid = (start+end)/2;

    while (start<end)
    {
    mid = (start+end)/2;
       // cout<<mid<< " ";
     if (key==arr[mid])
        {
        
        return mid;
    }

    if (key < arr[mid])
    {
        end = mid-1;
       
    }

    if (key > arr[mid])
    {
        start = mid+1;

    }   
    }
    return -1;
}

