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
void printingList(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    
}
void insertAtPosition(Node *head, int pos, int val){
    Node *tmp = head;
    Node *newNode = new Node(val);
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insertAtTail(Node *&head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    printingList(head);
    int pos,v;
    cin >> pos>> v;
    insertAtPosition(head,pos,v);
    printingList(head);


    return 0;
}