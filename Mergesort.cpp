#include <iostream>
using namespace std;

// create main array & temporary array
int arr[20], B[20];
//n is array input size
int n;

void input(){
    while (true){
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nMaksimal Panjang Array Adalah 20" << endl;
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan Isi Element array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++){
        cout << "Array Index Ke- " << i << " : ";
        cin >> arr[i];
    }
}

//create function mergesort
void mergeSort(int low, int high){
    if (low >= high){ //step 1
        return; //step 1.a
    } 

    int mid = (low + high) / 2; //step 2

    //step 3
    //fungsi rekursi - memanggil diri sendiri
    mergeSort(low, mid); //step 3.a
    mergeSort(mid + 1, high); //step 3.b
}