#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;

void minimumBribes(vector<int> q) {
    vector<int> b = q;
    int total_bribes = 0;
    bool too_chaotic = false;

    sort(q.begin(),q.end());

    for (int i = 1; i < q.size(); i++)
    {
        if (b[i] != q[i])
        {
            for (int j = i; j < b.size(); j++)
            {
                if (b[i] == q[j])
                {
                    if ((j-i) > 2)
                    {
                        too_chaotic = true;
                        break;
                    }
                    total_bribes += j-i;
                    break;
                }
                
            }
            
        } 
        
    }

    if (too_chaotic)
    {
        cout<<"Too chaotic\n";
    }else{
        cout<<total_bribes+1<<"\n";
    }
}


int main(){

    vector<int> a = {5,1,2,3,7,8,6,4};
    minimumBribes(a);
    // vector<int> b = a;
    // int total_bribes = 0;
    // bool too_chaotic = false;

    // sort(a.begin(),a.end());

    // for (int i = 1; i < a.size(); i++)
    // {
    //     if (b[i] != a[i])
    //     {
    //         for (int j = i; j < b.size(); j++)
    //         {
    //             if (b[i] == a[j])
    //             {
    //                 if ((j-i) > 2)
    //                 {
    //                     too_chaotic = true;
    //                     break;
    //                 }
    //                 total_bribes += j-i;
    //                 break;
    //             }
                
    //         }
            
    //     }
        
    // }

    // if (too_chaotic)
    // {
    //     cout<<"Too chaotic\n";
    // }else{
    //     cout<<total_bribes+1<<"\n";
    // }
    
    return 0;
}