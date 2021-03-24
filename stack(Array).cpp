#include <iostream>

using namespace std;

struct ArrayStack{

    int current_index;
    int arr[50];

    int previous_num = 0;
    int top_value = 0;

    void push(int number){
        arr[current_index] = number;
        top_value = number;
        current_index++;
    }

    void pop(){

        current_index--;
        top_value = arr[current_index-1];        
    }

    void display(){
        for (size_t i = 0; i < current_index; i++)
        {
            cout<<arr[i]<<endl;
        }         
        
    }

    int topElement(){
        return top_value;
    }

    ArrayStack(){
        current_index = 0;
        arr[50] = {0};
    }

};

int main(){
   
    ArrayStack stack;

    stack.push(20);
    stack.push(12);
    stack.push(99);
    stack.push(2);
    stack.push(10);
    stack.display();
    stack.pop();
    stack.display();
    return 0;


}