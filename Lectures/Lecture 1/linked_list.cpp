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
    Node *head, *tail;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void printList();
    void append(int);
    int count();
    int sum();

};

void LinkedList::append(int value)
{
    Node *nn = new Node(value);

    if (this->head == NULL)
    {
        this->head = nn;
        this->tail = nn;
    }
    else 
    {
        this->tail->next = nn;
        this->tail = nn;
    }
}

int LinkedList::count()
{
    Node *node = head;
    int count = 0;

    while(node!=NULL)
    {
        count++;
        node = node->next;
    }

    return count;
}

int LinkedList::sum()
{
    Node *node = head;
    int sum = 0;

    while (node!=NULL)
    {
        sum+= node->data;
        node = node->next;
    }

    return sum;    
}
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

    llist.append(1);
    llist.printList();

    llist.append(6);
    llist.printList();

    llist.append(3);
    llist.printList();

    Node *currentNode = llist.head;
    // Börja på första noden och gå till next, tills vi kommer till slutet
    while (currentNode != NULL) {
        cout << currentNode->data << endl;

        // Gå vidare till nästa nod
        currentNode = currentNode->next;
    }
    
    cout << "Count sum: " << llist.count() << endl;
    cout << "Data sum: " << llist.sum() << endl;
}