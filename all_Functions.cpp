#include <iostream>

using namespace std;

int sumOfArr(int arr[], int);
double averageOfArr(int arr[],int);
void printElements(int arr[],int);
void printInReverse(int arr[],int);
int findLargestElement(int arr[], int);
int findSecondLargest(int arr[], int);

int main(){

int arr[5] = {1,2,3,4,5};

int length = sizeof(arr)/sizeof(int);
    cout<<"Elements of Array : ";
    printElements(arr,length);
    cout<<endl;
    cout<<"Elements in Reverse Order of an Array : ";
     printInReverse(arr,length);
    cout<<endl;
     cout<<"Sum of Elements of an Array : "<<sumOfArr(arr,length)<<endl;
     cout<<"Average of an Array : "<<averageOfArr(arr,length)<<endl;
      cout<<"Largest Element of an Array : "<<findLargestElement(arr,length)<<endl;
     cout<<"Second Largest Element of an Array : "<<findSecondLargest(arr,length)<<endl;

    return 0;
}

//Print the sum of elements of an array
int sumOfArr(int arr[],int length){

    int total_sum = 0;

    for (int i = 0; i < length; i++)
    {
        total_sum += arr[i];
    }

    return total_sum;
}

//Print the average of array

double averageOfArr(int arr[], int length) {
  int i, total_sum = 0;       
  double avg;          

   for (i = 0; i < length; ++i) {
      total_sum += arr[i];
   }
   avg = double(total_sum) / length;

   return avg;
}

//print elements of an array
void printElements(int arr[], int length){

    for (int i = 0 ; i < length; i++)
    {
        cout<<arr[i];
    }
}

//Print elements in reverse

void printInReverse(int arr[], int length){
for (int i = length-1; i >=0; i--)
{
    cout<<arr[i];
}

}

//Get the largest element in reverse
int findLargestElement(int arr[], int length){

int largest = arr[0];
for (int i = 0; i < length; i++)
{
    if (arr[i] > largest)
    {
        largest = arr[i];
    }
    
}
    return largest;

}

//Get the second largest element
int findSecondLargest(int arr[], int length){
  int largest = arr[0];
        int second_largest = 0;
    for (int i = 0; i < length; i++)
    {
       
        if (arr[i] > largest)
             {
                 second_largest = largest;
                 largest = arr[i];
            }
    }
    
    return second_largest;
}