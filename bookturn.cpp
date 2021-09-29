#include <iostream>

using namespace std;

int main(){

    int totalpages,pageToTurn,number_of_turns_from_first_page,number_of_turns_from_last_page;

    cin>>totalpages>>pageToTurn;
    number_of_turns_from_first_page = pageToTurn/2;
    if (pageToTurn == totalpages)
    {
    number_of_turns_from_first_page = totalpages/2;
    number_of_turns_from_last_page = 0;

    }else if(pageToTurn == 1){
    number_of_turns_from_first_page = 0;
    number_of_turns_from_last_page = totalpages/2;
    }else{

    if (pageToTurn%2==0)
    {
       number_of_turns_from_last_page = (totalpages-pageToTurn)/2;
    }else{
        number_of_turns_from_last_page = (totalpages/(pageToTurn-1));
    }
    
}
cout<<number_of_turns_from_first_page<<endl;
cout<<number_of_turns_from_last_page;

    return 0;
}