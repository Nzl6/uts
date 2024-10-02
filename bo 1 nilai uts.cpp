#include <iostream>
using namespace std;

  int nilaiA (int Absen){
    return Absen * 10/100;
    }

    int nilaiB (int Tugas){
    return Tugas * 20/100;
    }

    int nilaiC (int UTS){
    return UTS * 30/100;
    }

    int nilaiD (int UAS){
    return UAS *40/100;
    }


string nama;
int npm, Absen, Tugas, UTS, UAS;

    cout << "\nmasukan nama : ";
    cin >> nama;
    cout<< "\nmasukan NPM : ";
    cin >> npm ;
    cout << "\nmasukan nilai absen :";
    cin >> nilaiAbsen;
    cout << "\nmasukan nilai tugas : ";
    cin >> nilaiTugas;
    cout << "\nmasukan nilai UTS : ";
    cin >> nilaiUTS;
    cout << "\nmasukan nilai UAS : ";
    cin >> nilaiUAS;


int main(){
    int nilaiA, nilaiB, nilaiC, nilaiD, jumlahNilai;
    string hurufMutu;

    if (jumlahNilai >= 85 && jumlahNilainilai <= 100){
        hurufMutu = "A";
    }else if (jumlahNilainilai >=80 && jumlahNilainilai < 85){
        hurufMutu ="A-";
    }else if (jumlahNilainilai >=75 && jumlahNilainilai < 80){
        hurufMutu ="B+";
    }else if (jumlahNilainilai >=70 && jumlahNilainilai < 75){
        hurufMutu ="B";
    }else if (jumlahNilainilai >=65 && jumlahNilainilai < 70){
        hurufMutu ="B-";
    }else if (jumlahNilainilai >=60 && jumlahNilainilai < 65){
        hurufMutu ="C+";
    }else if (jumlahNilainilai >=55 && jumlahNilainilai < 60){
        hurufMutu ="C";
    }else if (jumlahNilainilai >=50 && jumlahNilainilai < 55){
        hurufMutu ="D";
    }else if (jumlahNilainilai >=0 && jumlahNilainilai < 50){
        hurufMutu ="E";
    }else {
        cout << "Nilai yang dimasukkan tidak valid!!!"<< endl;
        return 1;

    }

     int nilaiAbsen = nilaiA (Absen);
     int nilaiTugas = nilaiB (Tugas);
     int nilaiUTS = nilaiC (UTS);
     int nilaiUAS = nilaiD (UAS);
     int jumlahNilai = nilaiA + nilaiB + nilaiC + nilaiD;


     cout << "\nNama : " << nama;
    cout << "\nNpm : " << npm;
    cout << "\nnilai Absen " << nilaiAbsen;
    cout << "\nnilai Tugas " << nilaiTugas;
    cout << "\nnilai UTS :" << nilaiUTS;
    cout << "\nnilai UAS :" << nilaiUAS << endl;


    cout << "Huruf mutu : "<< hurufMutu << endl;
    return 0;

}
