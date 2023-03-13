#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}

string status(double rata){
    if (rata >= 60)
        return "Selamat Anda Lulus";
    else
        return "Maaf Anda Gagal";
}
string status2(double rata,double nil){
    if (rata >= 60 || nil >= 70)
        return "Selamat Anda Lulus";
    else
        return "Maaf Anda Gagal";
}


int main(){
    double nilM,nilB;
    cout << "Masukkan Nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan NIlai Bahasa Indonesia = ";
    cin >> nilB;
    cout << "Status Kelulusan = " << status(rerata(nilM,nilB));
    cout << "\nStatus Kelulusan ke 2 = " << status2(rerata(nilM,nilB),nilM);
    return 0;
}