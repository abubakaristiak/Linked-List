// // 1 1 2 3 4 2

#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val; 
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
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
void find_duplicate(Node * head)
{
    Node *cur = head;
    bool isDuplicate = false;
    while (cur != NULL)
    {
        Node *idx = cur->next;
        while (idx != NULL)
        {
            if(cur->val == idx->val){
                isDuplicate = true;
                break;
            }
            idx = idx->next;
        }
        cur = cur->next; 
        
    }
    if(isDuplicate == true)
    {
        cout << "Duplicate"<< endl;
    }
    else{
        cout << "Not Duplicate"<< endl;
    }
    
}
void printingList(Node *head){
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, val);

    }
    printingList(head);
    find_duplicate(head);
    return 0;
}