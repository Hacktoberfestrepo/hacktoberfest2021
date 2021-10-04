class TreeNode:
    def __init__(self,data):
        self.data=data
        self.parent=None
        self.children=[]

    def add_child(self,child):
        child.parent=self
        self.children.append(child)

    def get_level(self):
        p=self.parent
        # print(p,'parent')
        level=0
        while p:
            p=p.parent
            level+=1
        return level
    def printTree(self):
        spaces = ' ' * self.get_level() * 3
        prefix = spaces + "|__" if self.parent else ""
        print(prefix + self.data)
        for child in self.children:
            child.printTree()
def build_product_tree():
    root=TreeNode('Electronics')
    # print('root',root)
    laptop=TreeNode('Laptop')
    laptop.add_child(TreeNode('Dell'))
    laptop.add_child(TreeNode('Mac'))
    TV=TreeNode('TV')
    TV.add_child(TreeNode('Samsung'))
    TV.add_child(TreeNode('LG'))
    root.add_child(laptop)
    root.add_child(TV)
    root.printTree()
if __name__=='__main__':
    build_product_tree()