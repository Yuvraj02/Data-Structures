#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){

    vector<int> arr = {2,5,1,3,4};

    int total_bribes = 0;
    bool too_chaotic = false;

    for (int i = 0; i<arr.size();i++)
    {
        if (arr[i] != i)
        {
            if ((arr[i]-1)-i > 2)
            {
                too_chaotic = true;
                break;
            }
            
            total_bribes += abs(arr[i]-1)-i;
        }
        
    }

     if (too_chaotic)
    {
        cout<<"Too chaotic\n";
    }else{
        cout<<total_bribes<<"\n";
    }

    return 0;
}