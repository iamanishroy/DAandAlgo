#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}
void removeFromTail(node *&head)
{
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next->prev = NULL;
    temp->next = NULL;
}
void removeFromHead(node *&head)
{
    head = head->next;
    head->prev = NULL;
}
void removeAtN(node *&head, int n)
{
    if (n == 0)
    {
        removeFromHead(head);
        return;
    }
    node *temp = head;
    int counter = 0;
    while (counter < n && temp->next != NULL)
    {
        counter++;
        temp = temp->next;
    }
    if (n - counter == 0)
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
}
void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    removeFromTail(head);
    display(head);
    removeFromHead(head);
    display(head);
    removeAtN(head, 3);
    display(head);
    removeAtN(head, 0);
    display(head);
    return 0;
}