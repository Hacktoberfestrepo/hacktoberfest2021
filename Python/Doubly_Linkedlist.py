class Node:
 
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None
 
class DoublyLinkedList:
 
    def __init__(self):
        self.head = None
 
    def push(self, new_data):
 
        new_node = Node(new_data)
 
        new_node.next = self.head
 
        if self.head is not None:
            self.head.prev = new_node
 
        self.head = new_node
 
    def insertAfter(self, prev_node, new_data):
 
        if prev_node is None:
            print "the given previous node cannot be NULL"
            return
 
        new_node = Node(new_data)
 
        new_node.next = prev_node.next
 
        prev_node.next = new_node
 
        new_node.prev = prev_node
 
        if new_node.next:
            new_node.next.prev = new_node
 
    def append(self, new_data):
 
        new_node = Node(new_data)
 
 
        if self.head is None:
            self.head = new_node
            return
 
        last = self.head
        while last.next:
            last = last.next
 
        last.next = new_node
 
        new_node.prev = last
 
        return
 
    def printList(self, node):
 
        print "\nTraversal in forward direction"
        while node:
            print " % d" % (node.data),
            last = node
            node = node.next
 
        print "\nTraversal in reverse direction"
        while last:
            print " % d" % (last.data),
            last = last.prev
 
 
 
llist = DoublyLinkedList()
 
llist.append(6)
 
llist.push(7)
 
llist.push(1)
 
llist.append(4)
 
llist.insertAfter(llist.head.next, 8)
 
print "Created DLL is: ",
llist.printList(llist.head)
