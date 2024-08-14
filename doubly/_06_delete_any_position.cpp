#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printingList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    
}
void reverse_print(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
    
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void deleteAnyPosition(Node *&head, int pos)
{
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tmp->next->prev = tmp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val; 
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    cout << "Print All Element: ";
    printingList(head);
    cout << "After delete Any Position: ";
    deleteAnyPosition(head, 3);     // you can input position...
    printingList(head);
    cout << "Print reverse order: ";
    reverse_print(tail);
    
    return 0;
}