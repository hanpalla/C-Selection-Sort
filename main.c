#include <stdio.h>
#include <stdlib.h>

void cetak(int arr[], int n){
    for(int k = 0; k < n; k++){
        printf("%d", arr[k]);
        if(k != n-1)
            printf(", ");
        }
    printf("\n");
}

int main(){
    system("cls");

    // Value dalam array yang sudah ditentukan
    int arr[10] = {30, 5, 23, 66, 43, 32, 20, 52, 80, 12};

    // ATAU

    // input value ke dalam array sesuai input pengguna menggunakan perulangan
    // int arr[10];
    // int angka; 
    // for(int i = 0; i < 10; i++){
    //     printf("Input Nilai\t: ");
    //     scanf("%d", &angka);
    //     arr[i] = angka;
    // }
    
    // Mencari nilai yang merupakan ukuran array
    int n = sizeof(arr)/sizeof(int);

    // Perulangan ganda selection sort
    int i, j, minimum;
    printf("\nProses Pengurutan Array.\n");
    for(i = 0; i < n-1; i++){
        // Untuk melihat hasil setiap terjadinya perulangan
        // Tidak peduli apakah terjadi pertukaran tempat atau tidak
        cetak(arr, n);
        minimum = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[minimum])
                minimum = j;
        }
        
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }

    // Pencetakan array yang nilainya sudah diurutkan
    printf("\nAngka di dalam array yang sudah terurut.\n");
    cetak(arr, n);
    return 0;
}
