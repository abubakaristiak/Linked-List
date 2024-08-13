#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// void deleteTail(Node *head){
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         tmp = tmp->next;
//     }
//     Node *deleteNode = tmp;
//     delete deleteNode;
    
// }

void deleteAtPosition(Node *head, int pos){
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void printingList(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printingList(head);
    cout << endl;
    int pos = 3;
    deleteAtPosition(head, pos);
    printingList(head);

    return 0;
}