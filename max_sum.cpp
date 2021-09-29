#include <iostream>

using namespace std;

int main(){
    int N,sum=0,cnt=0,num=0;
    cin>>N;
    int A[N];
    for (size_t i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    while(num){if(cnt==0);}
    
    for (size_t i = 0; i < N; i++)
    {
        if (A[i] > 0)
        {
            sum = sum + A[i];
            cnt++;
        }
    }
     cout<<sum<<" "<<cnt;

    return 0;
}