#include <iostream>
#include <vector>
#include <list>

using namespace std;

void displayVector(vector<int>);
void displayList(list<int>);

int main() {

        vector<int> vec = {1,2,3,4,5};
        
        vec.push_back(8);
        displayVector(vec);

        vec.pop_back();
        displayVector(vec);

        vec.insert(vec.begin(), 3);
        displayVector(vec);
  
        // list<int> l1 = {1,2,3,4};
        // l1.push_back(3);

        // displayList(l1);

        // l1.insert(l1.begin(), 5);
        // displayList(l1);

 return 0;

}

void displayVector(vector<int> vec) {
    for(auto data : vec) {
        cout<<data<<" ";
    }
    cout<<"\n======================="<<endl;
}

// void displayList(list<int> lst) {
//     for(auto data : lst) {
//         cout<<data<<" ";
//     }
//     cout<<"\n======================="<<endl;
// }