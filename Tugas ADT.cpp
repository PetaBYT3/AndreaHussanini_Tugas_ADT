#include <iostream>
using namespace std;

struct jam{
    int hours;
    int minute;
    int seconds;
};


int gethours(int hours){
    return hours;
};

int getminute(int minute){

    return minute;
};

int getseconds(int seconds){

    return seconds;
};

int main(){
	cout<<"Nama              = Andrea Hussanini"<<endl;
	cout<<"NIM               = 1121031017"<<endl;
	cout<<"Deskripsi Program = Memasukan nilai Jam, Menit, dan Detik lalu di"<<endl;
	cout<<"                    cek apakah inputan yang di masukan Valid atau."<<endl;
	cout<<"                    tidak Valid Jika nilai inputan benar maka akan"<<endl;
	cout<<"                    menampilkan (Valid) jika salah maka akan"<<endl;
	cout<<"                    menampilkan (Tidak Valid)"<<endl;
	cout<<"==================================================================="<<endl;
	
    jam sethours;
    jam setminute;
    jam setseconds;

    cout << "Masukan Jam   = ";
    cin >> sethours.hours;
    int hh = gethours(sethours.hours);

    cout << "Masukan Menit = ";
    cin >> setminute.minute;
    int jj = getminute(setminute.minute);

    cout << "Masukan Detik = ";
    cin >> setseconds.seconds;
    cout<<"==================================================================="<<endl;
    int dd = getseconds(setseconds.seconds);

    if (hh < 24 && jj < 58 && dd < 58){
        cout << "Valid \n";
        cout << "Jam : " << hh << " Menit : " << jj << " Detik : " << dd;
    }else {
        cout << "Tidak Valid";
    }
    return 0;
};
