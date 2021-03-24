/*
   1.push(element)
   2.pop(element)
   3.top() 
*/
#include <iostream>

using namespace std;

 struct LinkedList{

    int value;
    LinkedList *next_node;

    LinkedList *top = nullptr;

    void push(int number){
        LinkedList *newNode = new LinkedList();
        newNode->next_node=top;
        newNode->value = number;
        top = newNode;
    }

    void pop(){
        LinkedList *node_to_delete = top;
        top = top->next_node;
        delete node_to_delete;
    } 

    int topValue(){
            return top->value;
    }   

    bool isEmpty(){
        if(top!=nullptr){
            return false;
        }else{
            return true;
        }
    }
};


void displayList(LinkedList list){
    while (!list.isEmpty())
    {
        cout<<list.topValue()<<endl;
        list.pop();
    }
    
}

int main(){
    LinkedList list;
    for (int element : {1,2,3,4})
    {
        list.push(element);
    }

    list.pop();
    cout<<list.topValue();
    
    
    return 0;
}