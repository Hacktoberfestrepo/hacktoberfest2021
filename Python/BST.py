class BinarySearchTree:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None

    def add_child(self,data):
        if self.data==data:
            return
        if data<self.data:
            if self.left:
                self.left.add_child(data)
            else:
                self.left=BinarySearchTree(data)

        else:
            if self.right:
                self.right.add_child(data)
            else:
                self.right=BinarySearchTree(data)
        
    def search(self,data):
        if self.data==data:
            return True

        if data<self.data:
            if self.left:
               return self.left.search(data)
            else:
                return False
        else:
            if self.right:
               return self.right.search(data)
            else:
                return False
                
    def in_order(self):
        elements=[]
        if self.left:
            elements+=self.left.in_order()

        elements.append(self.data)

        if self.right:
            elements+=self.right.in_order()
        return elements
    
    def pre_order(self):
        elements=[]
        elements.append(self.data)

        if self.left:
            elements+=self.left.pre_order()
        if self.right:
            elements+=self.right.pre_order()
        return elements

    def post_order(self):
        elements=[]
        if self.left:
            elements+=self.left.post_order()
        if self.right:
            elements+=self.right.post_order()
        elements.append(self.data)
        return elements
    
    def find_min(self):
        # min_element=self.in_order()
        # return min_element[0]

        #another way
        if self.left is None:
            return self.data
        return self.left.find_min()
    def find_max(self):
        # max_element=self.in_order()
        # return max_element[-1]

        # another way
        if self.right is None:
            return self.data
        return self.right.find_max()

    def find_sum(self):
        return sum(self.in_order())
        # Another way
        # left_sum = self.left.calculate_sum() if self.left else 0
        # right_sum = self.right.calculate_sum() if self.right else 0
        # return self.data + left_sum + right_sum
    def delete(self,val):
        if val<self.data:
            if self.left:
                self.left=self.left.delete(val)
        elif val>self.data:
            if self.right:
                self.right=self.right.delete(val)
        else:
            if self.left is None and self.right is None:
                return None
            if self.left is None:
                return self.right
            if self.right is None:
                return self.right
            min_val=self.right.find_min()
            self.data=min_val
            self.right=self.right.delete(min_val)
            # min_val=self.left.find_max()
            # self.data=min_val
            # self.left=self.left.delete(val)
        return self     
       
def build_tree(elements):
    root=BinarySearchTree(elements[0])
    for i in range(1,len(elements)):
        root.add_child(elements[i])
    return root


if __name__=='__main__':
     numbers_tree = build_tree([17, 4, 1, 20, 9, 23, 18, 34]) 
     print('In-order',numbers_tree.in_order())
     numbers_tree.delete(20)
     print("After deleting 20 ",numbers_tree.in_order())
     print('pre_order',numbers_tree.pre_order())
     print('post_order',numbers_tree.post_order())
     print('min element',numbers_tree.find_min())
     print('max element',numbers_tree.find_max())
     print('Sum is',numbers_tree.find_sum())
     print(numbers_tree.search(11))


