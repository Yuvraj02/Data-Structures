#include <iostream>
#include <vector>
#include <map>

using namespace std;

int firstRecurringNumber(vector<int>);

int main(){

    vector<int> vec = {2,5,1,2,3,5,1,2,4};

    cout<<firstRecurringNumber(vec);

    return 0;
}

int firstRecurringNumber(vector<int> vec){  
    map<int, int> m;
    int firstRecurringNum {0};
    for (size_t i = 0; i < vec.size(); i++)
    {
        auto itr = m.find(vec[i]);
        if (itr != m.end())
        {
            firstRecurringNum = vec[i];
            break;
        }
         m.insert({vec[i], 1});
    }
    return firstRecurringNum;
}