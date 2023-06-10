# selection sort
def selectionSort(arr):
    n = len(arr)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

# insertion sort
def insertionSort(arr):
    n = len(arr)
    for i in range(1, n):
        j = i - 1
        key = arr[i]
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

# print array
def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")

def searchNum(arr, search):
    n = len(arr)
    for i in range(n):
        if arr[i] == search:
            print("ada, posisi di:", i + 1)
            return
    print("Data tidak ditemukan")

def inputArr(arr):
    n = len(arr)
    for i in range(n):
        arr[i] = int(input(f"Data[{i}]: "))

sizeArr = int(input("Masukkan jumlah data: "))
arr = [0] * sizeArr
inputArr(arr)
print("Data sebelum sorting:")
printArray(arr)
print()

print("Data setelah sorting dengan selection sort:")
selectionSort(arr)
printArray(arr)
print()
print("Data setelah sorting dengan insertion sort:")
insertionSort(arr)
printArray(arr)
print()

search = int(input("Cari data: "))
searchNum(arr, search)
