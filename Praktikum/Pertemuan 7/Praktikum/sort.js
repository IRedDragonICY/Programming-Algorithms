function selectionSort(arr, n) {
    for (i = 0; i < n - 1; i++) {
        let min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        swap(arr[i], arr[min]);
    }
}

function insertionSort(arr, n) {
    for (i = 1; i < n; i++) {
        let j = i - 1;
        let key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

function printArray(arr, n) {
    for (i = 0; i < n; i++) console.log(arr[i] + " ");
}

function searchNum(arr, n, search) {
    i = 0;
    while (i < n) {
        if (arr[i] == search) {
            console.log("ada, posisi di: " + (i + 1));
            break;
        }
        i++;
    }
    if (i == n) {
        console.log("Data tidak ditemukan");
    }
}

function inputArr(arr, n) {
    for (i = 0; i < n; i++) {
        console.log("Data[" + i + "] : ");
        arr[i] = input();
    }
}

function main() {
    let sizeArr;
    let search;
    console.log("Masukkan jumlah data : ");
    sizeArr = input();
    let arr = new Array(sizeArr);
    inputArr(arr, sizeArr);
    console.log("Data sebelum sorting : ");
    printArray(arr, sizeArr);
    console.log();
    console.log("Data setelah sorting : ");
    selectionSort(arr, sizeArr);
    printArray(arr, sizeArr);
    console.log();
    console.log("cari data :");
    search = input();
    searchNum(arr, sizeArr, search);
}