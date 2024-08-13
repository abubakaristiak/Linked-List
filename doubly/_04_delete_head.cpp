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
void deleteHead(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;

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
    cout << "After delete Head: ";
    deleteHead(head,tail);
    printingList(head);
    cout << "Print reverse order: ";
    reverse_print(tail);
    
    return 0;
}