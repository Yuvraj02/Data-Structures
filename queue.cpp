#include <iostream>

using namespace std;

struct LinkedList {
        int value;
        LinkedList *next_node;
        LinkedList *first_node = nullptr;
        LinkedList *top_node = nullptr;

        int size{0};

        void push(int value) {
            LinkedList *newNode = new LinkedList();

            if (first_node == nullptr)
            {
                newNode->value = value;
                newNode->next_node = nullptr;
                first_node = newNode;
                top_node = newNode;
                size++;
            } else {
                newNode->value = value;
                newNode->next_node = nullptr;
                first_node->next_node = newNode;
                first_node = newNode;
                size++;
            }
            
        }

        void pop(){
            LinkedList *temp = top_node;
            top_node = top_node->next_node;
            delete temp;
        }

        void topElement(){
            cout<<top_node->value<<endl;
        }

        void lastElement(){
            cout<<first_node->value;
        }

        void sizeOfList(){
            cout<<size<<endl;
        }

        bool isEmpty(){
            if (first_node == nullptr)
            {
                return true;
            } else {

                return false;
            }
        }

};

void displayList(LinkedList);
int main(){
    
    LinkedList list;
    list.push(2);
    list.push(3);
    list.push(4);
    displayList(list);


    return 0;
}

void displayList(LinkedList list){
    while (!list.isEmpty())
    {
        if (list.top_node->next_node == nullptr)
        {
            cout<<list.top_node->value;
        }else{
            cout<<list.top_node->value<<"---->";
        }
        
        list.pop();
    }
    
}