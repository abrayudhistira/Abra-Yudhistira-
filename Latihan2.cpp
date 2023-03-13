#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}

string status(double c){
    if (c >= 60)
        return "Lulus";
    else
        return "Gagal";
}

int main(){
    double nilM,nilB;
    cout << "Masukkan Nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan NIlai Matematika = ";
    cin >> nilB;
    cout << "Status Kelulusan = " << status(rerata(nilM,nilB));
    return 0;
}