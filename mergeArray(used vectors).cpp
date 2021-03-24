#include <iostream>
#include <vector>

using namespace std;

void mergeSortedArray(vector<int> arr1, vector<int> arr2);

int main() {   

 mergeSortedArray({1,2,3,4}, {6,7,8,9});

  
    return 0;
}

//Merge function

  void mergeSortedArray(vector<int> arr1, vector<int> arr2) {

  vector<int> mergedArr;

for (size_t i = 0; i < arr1.size(); i++)
  {
    mergedArr.push_back(arr1[i]);
    
  }
  for (size_t i = 0; i < arr2.size(); i++)
  {
    /* code */
    mergedArr.push_back(arr2[i]);
  }
  

  for(auto data : mergedArr){
    cout<<data;
  }
}
