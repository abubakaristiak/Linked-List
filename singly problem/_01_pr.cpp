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
int sz = 0;
void insertAtTail(Node * &head, int val){
    Node *newNode = new Node(val);
    sz++;
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
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, val);
    }
    cout << sz;
    return 0;
}