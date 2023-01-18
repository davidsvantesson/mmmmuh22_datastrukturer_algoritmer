#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Constructor with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    void printList();

};



void LinkedList::printList()
{
    Node *temp = head;

    // Check for empty list.
    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }
    // Traverse the list.
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "None" << endl;
}

int main()
{
    LinkedList llist;
    llist.printList();

    Node box1(1);
    llist.head = &box1;
    llist.printList();

    Node box2(2);
    box1.next = &box2;
    llist.printList();

    Node box3(3);
    box2.next = &box3;
    llist.printList();

    Node *currentNode = llist.head;
    // Börja på första noden och gå till next, tills vi kommer till slutet
    while (currentNode != NULL) {
        cout << currentNode->data << endl;

        // Gå vidare till nästa nod
        currentNode = currentNode->next;
    }
}