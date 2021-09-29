#include <iostream>

using namespace std;

int findElement(int);

int main(){
    
cout<<findElement(10);
    return 0;
}

int findElement(int n){
int arr[] = {2,4,6,8,10,12};

    int length = sizeof(arr)/sizeof(int);

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
       
    }
     return -1;
}