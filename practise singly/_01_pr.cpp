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
int size(Node *head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        size++;
    }
    return size;
    
}
int main()
{
    Node *head = NULL;
    int val;
    int sz;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        sz = size(head, val);
    }
    cout << sz;
    return 0;
}