#include <iostream>
#include <string>

using namespace std;

/* Node class */
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

/* Linked List class */
class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    /* methods for push_back, counting, summing and printing the nodes */
    void printList();
    int countNodes();
    void push_back(int newParam);
    int sumOfNode();

};

// prints the linked lists
void LinkedList::printList()
{
    Node *temp = head;

    // Check for empty list.
    if (head == NULL)
    {
        cout << "List empty :)!" << endl;
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

// count nodes in the list
int LinkedList::countNodes()
{
    Node *temp = head;
    int i = 0;
    while(temp != NULL)
    {
        i++;
        temp = temp->next;
    }

    return i;
}

// appends value to the end of the linked list
void LinkedList::push_back(int newParam)
{
    Node *newNode = new Node();
    newNode->data = newParam;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

}

// counts the total sum of nodes
int LinkedList::sumOfNode()
{
    Node *temp = head;
    int sum = 0;

    if(head == NULL)
    {
        cout << "No value given" << endl;
        return 0;
    }
    while(temp != NULL)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }

    return sum;

}

int main()
{
    LinkedList llist;
    llist.printList();

    //Node box1(1);
    //llist.head = &box1;
    llist.push_back(1);
    llist.printList();

    //Node box2(2);
    //box1.next = &box2;
    llist.push_back(2);
    llist.printList();

    //Node box3(3);
    //box2.next = &box3;
    llist.push_back(3);
    llist.printList();

    //Node box4(4);
    //box3.next = &box4;
    llist.push_back(4);
    llist.printList();

    llist.push_back(5);
    llist.printList();

    llist.push_back(6);
    llist.printList();

    Node *currentNode = llist.head;
    // Börja på första noden och gå till next, tills vi kommer till slutet
    while (currentNode != NULL) {
        cout << currentNode->data << endl;

        // Gå vidare till nästa nod
        currentNode = currentNode->next;
    }
    
    // number of nodes in the list
    cout << "No. of nodes: " << llist.countNodes() << "\n";

    cout << "Sum amount of nodes: " << llist.sumOfNode() << endl;

    return 0;
}