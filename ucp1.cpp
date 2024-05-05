// 1. int, string, boleaan

// 2. if(......){}else ..... 
//      misalkan :
//      if (nrerata >= 70 || nMath > 80){
//            status = "Diterima";
//        }
//        else{
//           status = "Ditolak";
//        }

// 3. struct namastruct{informasi}; 
//    misalkan sruct mahasiswa{
//      string nim;
//  };

// 4. prosedur : void namaprosedur(){} misalkan void input(){
//    cout << "Array elements are: ";
//    for (i = 0; i < n; i++)
//	  cout << arr[i] << " ";
//    cout << endl
//  }
//    fungsi : tipedata namafungsi(){} misalkan float penjumlahan(float a, float b)

// 5. for{proses yang diulang}, while(kondisi){proses yang diluang} contoh 
//    while (i < n) {
//	    ctr++;
//	    if (arr[i] == item) {
//		cout << "\n" << item << " found at position " << (i + 1) << endl;
//		break;
//	    }
//	    i++;
//      }

#include <iostream>
using namespace std;

int main(){
    int nMath, nBI, nrerata;
    string status, nama;
    int jumlahmahasiswa[20];

    cout << "Masukkan Nama= ";
    cin >> nama;

    cout << "Masukkan nilai Matematika= " << endl;
    cin >> nMath;

    cout << "Masukkan nilai BVahasa Inggris" << endl;
    cin >> nBI;

    for(int i=0; i < 20; i++){
        nrerata = (nMath + nBI) /2;
        if (nrerata >= 70 || nMath > 80){
            status = "Diterima";
        }
        else{
            status = "Ditolak";
        }
    }
    
    cout << "statusnya adalah: "<< status << endl;

    return 0;
}
