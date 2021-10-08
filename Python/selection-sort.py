#$ Selection sort
def selection_sort(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]

#$ Test the code
if __name__ == '__main__':
    arr = [5, 2, 4, 6, 1, 3]
    selection_sort(arr)
    print(arr)