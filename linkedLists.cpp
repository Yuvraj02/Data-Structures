//Date Of completion : 22/03/2021
//Implementation of Singly Linked List.
#include <iostream>

using namespace std;

class LinkedList {
    public :
            int value;
            LinkedList *next_node;

            LinkedList *ptr_to_head;

           LinkedList(){
               ptr_to_head = nullptr;
           }

        LinkedList(int val){
            LinkedList *firstNode = new LinkedList();
            firstNode->value = val;
            firstNode->next_node = nullptr;
            ptr_to_head = firstNode;
        }


        //Methods on List

            //This method appends the element at the end of the list
            void append(int val){
                    LinkedList *newNode = new LinkedList();

                //if there is no list, then create one else traverse to the end of the list and add a node
                if (ptr_to_head == nullptr)
                {
                    newNode->value = val;
                    newNode->next_node = nullptr;
                    ptr_to_head = newNode;

                   cout<<"("<<newNode->value<<", "<<newNode->next_node<<")"<<endl;

                } else {
                    LinkedList *temp = ptr_to_head;
                    while (temp->next_node != nullptr)
                    {
                       temp = temp->next_node;  //This has the address of the last node.
                    }

                    temp->next_node = newNode;
                    newNode->value = val;
                    newNode->next_node = nullptr;

                    cout<<"("<<newNode->value<<", "<<newNode->next_node<<")"<<endl;                               
                }
                
            }

            //This method adds the element before the head node
            void prepend(int val){
                    LinkedList *head_node = new LinkedList();
                    head_node->next_node = ptr_to_head;
                    head_node->value = val;
                    ptr_to_head = head_node;  
                }
        //This method displays Head of the list
       void display(){
            cout<<ptr_to_head->value<<endl;
         }

        //This method return element of the list with respect to it's index
         void getElementByIndex(int index) {
            
            LinkedList *temp1 = ptr_to_head;
            for (size_t i = 0; i < index; i++)
            {
                temp1 = temp1->next_node;

            }
            cout<<temp1->value<<endl;
           
         }
    //This method adds an element in between the list
    void insert(int index, int val) {
        LinkedList *newNode = new LinkedList();
        LinkedList *temp1 = ptr_to_head;
        LinkedList *afterNode = nullptr;
        for (size_t i = 0; i < (index-1); i++)
        {
            temp1 = temp1->next_node;
            afterNode = temp1->next_node;
        }
        temp1->next_node = newNode;
        newNode->next_node = afterNode;
        newNode->value = val;
    }

    //Below method removes a node from the list
    void remove(int index){
        LinkedList *temp = ptr_to_head;
        for (size_t i = 0; i < (index-1); i++)
        {
            temp = temp->next_node;

        }
        LinkedList *temp2 = temp->next_node;
        LinkedList *temp3 = temp2->next_node;
        temp->next_node = temp3;
        delete temp2;

    }
    //This method returns the size of the list
    int size(){
        LinkedList *size = ptr_to_head;
        int length = 1;
        while (size->next_node != nullptr)
        {
            size = size->next_node;
            length++;
        }
        cout<<length;
        return length;
    }
    //This method reverses the List
    void reverse(){

        LinkedList *previous_node = ptr_to_head;
        LinkedList *last_node = ptr_to_head->next_node;
        LinkedList *current_node = nullptr;

        while (last_node->next_node != nullptr)
        {
            current_node = last_node;
            last_node = last_node->next_node;
            current_node->next_node = previous_node;
            previous_node = current_node;

        }

        last_node->next_node = previous_node;
        ptr_to_head->next_node = nullptr;
        ptr_to_head = last_node;
    }
    //This method displays the list elements
    void displayList() {
        LinkedList *temp = ptr_to_head;

        while (temp != nullptr)
        {
            cout<<temp->value<<endl;
            temp = temp->next_node;

        }
    }
       
};

int main(){
    LinkedList list(10);
    list.append(4);
    list.append(5);
    list.append(12);
    list.append(15);
    list.reverse();
    list.displayList();

    return 0;
}