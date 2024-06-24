text = "Computer Science"               #input text

huffManCode = {}                    #dictionary used to store codes for each character
dechuffManCode = {}             #dictionary used to store character for codes

class Node:         #Node used for the tree
    def __init__(self,freq,sym,left=None,right=None):
        self.freq=freq
        self.symbol=sym
        self.left=left
        self.right=right
        self.huff=''

def height(tree):               #gives height of the tree
    if tree==None:
        return 0
    else:
        left = height(tree.left)
        right = height(tree.right)
        if left>right:
            return left+1
        return right+1

def printHuffTree(node):                    #prints Huffman Tree 
    h = height(node)                                             #Each node seprated by ,
    for i in range(1,h+1):
        printLevel(root,i)
        print()

def printLevel(node,level):                         #helper function to print the tree
    if node is None:
        print('__',end=', ')
        return node
    if level==1:
        print(node.freq,node.symbol,end=', ')
    elif level>1:
        printLevel(node.left,level-1)
        printLevel(node.right,level-1)

def getHuff(node, hufval=''):               #gets huffman codes and stores in huffManCode
    newVal = hufval + str(node.huff)
    if(node.left):
        getHuff(node.left, newVal)
    if(node.right):
        getHuff(node.right, newVal)
    if(not node.left and not node.right):
        huffManCode[node.symbol]=newVal

li_text = list(text)
letters = [i for i in set(li_text)]
freq ={i:li_text.count(i) for i in letters}             #to find the frequency of letters in the input string

u_freq = list(set(freq.values()))
in_tree=[]
nodes={}

for i in freq.items():                              #create nodes for every letter and stores in dictionary
    if i[1] not in nodes:
        nodes[i[1]]=[Node(i[1],i[0])]
    else:
        nodes[i[1]].append(Node(i[1],i[0]))

def getMin(u_frequ):                                #helper functions to create huffman tree
    try:
        m = min(u_frequ)
    except:
        return None,[]
    node = nodes[m].pop()
    if len(nodes[m])==0:
        u_frequ.remove(m)
    return node,u_frequ

root=None                                                           #root node will be stored in this variable

while len(u_freq)>0:
    small1,u_freq = getMin(u_freq)
    if small1==None:
        break
    small2,u_freq = getMin(u_freq)
    if small2==None:
        root=small1
        break
    in_tree.extend([small1,small2])
    new_freq = small1.freq+small2.freq
    small1.huff=0
    small2.huff=1
    root = Node(new_freq,'',small1,small2)
    if new_freq not in u_freq:
        u_freq.append(new_freq)
        nodes[new_freq]=[root]
    else:
        nodes[new_freq].append(root)

printHuffTree(root)
getHuff(root)

for i in huffManCode.items():
    dechuffManCode[i[1]]=i[0]

def encode(encodeTable,input):  #encoded text seperates each character in input by a space
    encoded = ''
    for i in input:
        encoded=encoded+encodeTable[i]+' '
    return encoded

def decode(decodeTable,input):          #returns decoded string by taking encoded string
    decoded = ''
    input = input.split()
    for i in input:
        decoded+=decodeTable[i]
    return decoded

#Using text="Computer Science" to encode and decode


encoded = encode(huffManCode,text)
print("Encoded String for "+text+" : \n",encoded)               #printing encoded string
decoded = decode(dechuffManCode,encoded)
print("\nDecoded String for "+encoded+": \n",decoded)                 #printing decoded string which should be same as text