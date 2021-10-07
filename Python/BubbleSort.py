def bubble_sort(my_list):
    for i in range(len(my_list)):
        for j in range(len(my_list) - 1):
            if my_list[j] > my_list[j+1]:
                my_list[j], my_list[j+1] = my_list[j+1], my_list[j]
                
my_list = [19, 13, 6, 2, 18, 8]
bubble_sort(my_list)
print(my_list)
