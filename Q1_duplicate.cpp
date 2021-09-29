/**
1. Given a limited range of array of size ‘n’ containing elements between 1 to n-1 with one element repeating, 
find the duplicate number in it without using any extra space. 
The output must be displayed along with the location of the duplicate element.
*/
#include <iostream>

using namespace std;

int checkDuplicate(int arr[], int);

int main(){

        int arr[] = {1,2,3,1,4,5};

        int n = sizeof(arr)/sizeof(int);

        int duplicate_index = checkDuplicate(arr,n);

        if (duplicate_index == -1)
        {
            cout<<"No Duplicate Element";
        }else{
            cout<<"\nDuplicate Element is at Index  : "<<duplicate_index<<endl;
        }

    return 0;
}

int checkDuplicate(int arr[], int n){

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n-1; j++)
            {
                if(arr[j]==arr[i]){
                    return j;
                }
            }    
        }
        return -1;
}