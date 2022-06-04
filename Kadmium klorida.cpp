
#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main (){
  //deklarasi variabel
  float pi =3.14
    
    //deklarasi molekul kadmium klorida
    float Cdx, Cdy, Cdz;
    float Cl1x, Cl1y, Cl1z;
    float Cl2x, Cl2y, Cl2z;
    
    //masukkan nilai untuk setiap variabel CdCl2
  Cdx = Cdy = Cdz = 0.0;
    
    Cl1x = 
    Cl1y =
    Cl1z =
    
    Cl2x =
    Cl2y =
    Cl2z = 
    
    //memasukkan nilai tersebut ke dalam file
    ofstream file;
    file.open("kadmium klorida");
    file << "3\n"<< endl;
    file << setw(3)<<" Cd"<<setw(3)<<""\
    << fixed << setprecision(3) << Cdx << setw(3)<<""\
    << fixed << setpracision(3) << Cdy << setw(3)<<""\
    << fixed << setpracision(3) << Cdz << "\n";
