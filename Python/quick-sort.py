#$ Quick sort
def quick_sort(arr):
    if len(arr) < 2:
        return arr
    else:
        pivot = arr[0]
        less = [i for i in arr[1:] if i <= pivot]
        greater = [i for i in arr[1:] if i > pivot]
        return quick_sort(less) + [pivot] + quick_sort(greater)

#$ Test it out
arr = [5, 3, 7, 2, 9, 1, 6, 8, 4]
print(quick_sort(arr))
