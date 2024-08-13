#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val = val;
            this->next = NULL;
        }
};
void insertAtHead(Node * &head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
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
    Node *head = new Node(2);
    head->next = new Node(4);
    head->next->next = new Node(6);
    head->next->next->next = new Node(8);

    cout << "Original Linked List: ";
    printingList(head);
    cout << endl;

    int val = 0;
    insertAtHead(head, val);
    cout << "After inserting Nodes at the front: ";
    printingList(head);

    return 0;
}