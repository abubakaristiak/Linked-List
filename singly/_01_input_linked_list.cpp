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
void insertAtTail(Node * &head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
void printingList(Node * head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, val);
    }
    printingList(head);
    
    return 0;
}