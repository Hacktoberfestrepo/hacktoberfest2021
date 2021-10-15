class sort:
    def __init__(self):
        self.arr=[]
        self.n=int(input("Enter the number of students: "))
        print("Enter the second year percentages of the students:")
        for i in range(1,self.n+1):
            value= float(input(f'Enter the percentage of student {i}: '))
            self.arr.append(value)

    def display(self):
            print("Here are the percentage marks of the second year students: ")
            for i in range (5,0,-1):#to display top 5 student's percentage
              print(self.arr[i], " ")

    def insertionSort(self):
        for i in range(1,self.n):
          temp=self.arr[i]
          j=i-1 
          while self.arr[j]>temp and j>=0:
                self.arr[j+1]=self.arr[j]
                j-=1
          self.arr[j+1]=temp  
        return self.arr  

    def shellSort(self):
         def shellSort(self): 
          gap = (self.n)//2
          while gap > 0:
                 
             for i in range(gap,self.n): 
                temp = self.arr[i] 
                j = i

                while  j >= gap and self.arr[j-gap] >temp: 
                    self.arr[j] = self.arr[j-gap] 
                    j -= gap 

                self.arr[j] = temp 
                gap //= 2  
         return self.arr          
S=sort()
flag = True
while(flag):
    # S = sort()
    choice = int(input("1) Insertion sort \n2) Shell sort \n3) Exit\n"))
    if choice == 1:
        S.insertionSort()
        S.display()
    elif choice == 2:
        S.shellSort()
        S.display()
    elif choice == 3:
        flag = False
    else:
        print("Invalid choice! Exiting now.")
        flag = False
