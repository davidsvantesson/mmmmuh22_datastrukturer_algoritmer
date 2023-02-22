
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

    def __str__(self):
        return self.data


class LinkedList:
    def __init__(self):
        self.head = None

    def __str__(self):
        current_node = self.head
        my_str = ""

        while current_node is not None:
            my_str += f"{current_node.data} -> "
            current_node = current_node.next

        my_str += "None"
        return my_str

    # count nodes in the list
    def countNodes(self):
        temp = self.head
        i = 0
        while(temp != None):
            i += 1
            temp = temp.next
        return i

    # Counts the total sum of node
    def sumNodes(self):
        current_node = self.head
        sumCount = 0

        if(self.head is None):
            print("No value given")
            return
        while(current_node is not None):
            sumCount += current_node.data
            current_node = current_node.next
        return sumCount

    # Add new element at the end of the list
    def append(self, newParam):
        newNode = Node(newParam)
        if(self.head is not None):
            temp = self.head
            while(temp.next != None):
                temp = temp.next
            temp.next = newNode
        else:
            if(self.head == None):
                self.head = newNode
                return newNode


if __name__ == '__main__':
    llist = LinkedList()
    # print(llist)

    """box1 = Node("a")
    llist.head = box1"""
    llist.append(1)
    print(llist)
    
    """box2 = Node("b")
    box1.next = box2"""
    llist.append(2)
    print(llist)

    """box3 = Node("c")
    box2.next = box3"""
    llist.append(3)
    print(llist)

    """box4 = Node("d")
    box3.next = box4"""
    llist.append(4)
    print(llist)

    """box5 = Node("e")
    box4.next = box5"""
    llist.append(5)
    print(llist)

    current_node = llist.head
    # Börja på första noden och gå till next, tills vi kommer till slutet
    while current_node is not None:
        # Skriva ut vad noden innehåller
        print(current_node.data)

        # Gå vidare till nästa nod
        current_node = current_node.next

    print("No. of nodes:", llist.countNodes())
    print("Sum amount of nodes:", llist.sumNodes())
    
