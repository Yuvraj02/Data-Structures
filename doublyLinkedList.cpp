#include <iostream>

using namespace std;

class LinkedList{

    public:
        //Linked Lists NODE
        int value;
        LinkedList *next_node;
        LinkedList *previous_node;

        //Variable to keep address of HEAD node
        LinkedList *ptr_to_head;          

        LinkedList(){
            ptr_to_head = nullptr;
        }


        LinkedList(int val){
            LinkedList *newNode = new LinkedList();
                  ptr_to_head = newNode;
                  newNode->value = val;
                  newNode->next_node = nullptr;  
        }

        void append(int val) {
            LinkedList *newNode = new LinkedList();
            if (ptr_to_head == nullptr)
            {
                  ptr_to_head = newNode;
                  newNode->value = val;
                  newNode->next_node = nullptr;     
            } else {
               LinkedList *temp = ptr_to_head;
               while (temp->next_node != nullptr)
               {
                   temp = temp->next_node;
               }
               temp->next_node = newNode;
               newNode->value = val;
               newNode->next_node = nullptr;
               newNode->previous_node = temp;

            }
                cout<<newNode->previous_node<<endl;

            
        }

        void displayHead(){
            cout<<ptr_to_head<<endl;
        }

};

int main(){
    LinkedList list;
    list.append(10);
    list.append(20);
    list.displayHead();

    return 0;
}
