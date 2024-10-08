#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// void insertTail(Node *&head, int val)
// {
//     Node *newNode = new Node(val);
//     if(head == NULL){
//         head = newNode;
//         return;
//     }
//     Node *tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp = tmp->next;
//     }
//     tmp->next = newNode;
//     newNode->prev = tmp;
    
// }


// O(1)
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;// tail = newNode
}
void print_normal(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
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
        insertTail(head, tail, val);
    }
    print_normal(head);
    
    return 0;
}