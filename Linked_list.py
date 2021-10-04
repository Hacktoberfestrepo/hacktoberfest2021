
class Node:
    def __init__(self,data,next=None):
        self.data=data
        self.next=next

class LinkedList:
    def __init__(self):
        self.head=None
    
    def insert_at_beginning(self,data):
        node=Node(data,self.head)
        self.head=node

    def insert_at_end(self,data):
        if self.head==None:
            self.head=Node(data,None)
            return
        itr=self.head
        while itr.next:
            itr=itr.next
        itr.next=Node(data,None)
    
    def insert_values(self,data_list):
        self.head=None
        for data in data_list:
            self.insert_at_end(data)
    def remove_at(self,index):
        if index<0 or index>self.length():
            raise Exception('Invalid data')

        if index==0:
            self.head=self.head.next

        c=0
        itr=self.head
        while itr:
            if c==index-1:
              itr.next=itr.next.next
              break
            c+=1
            itr=itr.next
    def insert_at(self,index,data):
        if index<0 or index>self.length():
            raise Exception('Invalid index provided')
        if index==0:
            self.insert_at_beginning(data)
            return
        c=0
        itr=self.head
        while itr:
            if c==index-1:
                temp_address=itr.next
                itr.next=Node(data,temp_address)
                break
            itr=itr.next
            c+=1
    def insert_after_value(self, data_after, data_to_insert):
        if(self.head==None):
            raise Exception ('No data available')
        itr=self.head
        found=False
        while itr:
            if itr.data==data_after:
                found=True
                node=Node(data_to_insert,itr.next)
                itr.next=node
                break
            itr=itr.next
        if(found==False):
            raise Exception ("Data where the value {0} has to be inserted is not present".format(data_to_insert))
            
    def remove_by_value(self,value):
        if(self.length()<=0):
            raise Exception ('No linked list found')
        itr=self.head
        found=False
        while itr:
            if itr.next.data==value:
                found=True
                itr.next=itr.next.next
                break
            itr=itr.next
        if (found==False):
            raise Exception ("Element {0} data was not found in the Linkedlist".format(value))        
    def length(self):
        itr=self.head
        c=0
        while itr:
            c+=1
            itr=itr.next
        return c
    def print(self):
        if self.head==None:
            print('Linked list is empty')
            return
        itr=self.head
        print_ll=''
        while itr:
            print_ll+=str(itr.data)+'--> '
            itr=itr.next
        print(print_ll)

if __name__=='__main__':
    l=LinkedList()
    l.insert_values([10,20,30,40,50])
    l.print()
    # l.insert_at_beginning(5)
    # l.insert_at_end(1)
    # l.insert_at_beginning(50)
    # l.insert_at_end(20)
    l.remove_at(2)
    l.print()
    l.insert_at(3,22)
    l.print()
    print(l.length(),'pp')
    l.insert_after_value(20,60)
    l.print()
    l.remove_by_value(20)
    l.print()