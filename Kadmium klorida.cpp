%%writefile ep-CdCl2.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;


int main (){
  //deklarasi variabel
  float pi =3.14
  int counter =0;
    
    //deklarasi molekul kadmium klorida
    float Cdx, Cdy, Cdz;
    float Cl1x, Cl1y, Cl1z;
    float Cl2x, Cl2y, Cl2z;
  
    /*  Cl     Cl
          \   /
            Cd 
        molekul kadmium klorida itu bentuk liner
    */
  
  float rB_Cdx = 0,0;
  float rB_Cdy = 0.0;
  float rB_Cdz = 0.0;
  
  float rB_Clx =sin (2.42*pi/180) * 2.420;
  float rB_Cly =0.0;
  float rB_Clz =cos(2.42*pi/180)  * 2.420;
  
  float rB_Cl2x =- rB_Cl1x;
  float rB_Cl2z = rB_Cl1y;
  float rB_Cl2z = rB_Cl1z;
  
  //iterasi untuk setiap molekul kadmium klorida
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      for (interaksi k =0; k < 3; k++) {
        
    
    
    //masukkan nilai untuk setiap variabel CdCl2
  Cdx = Cdy = Cdz = 0.0;
    
    Cl1x =sin(2.42*pi/180)*2.420;
    Cl1y =0.0;
    Cl1z =cos(2.42*pi/180)"2.420;
    
    Cl2x =-Clx;
    Cl2y =Cly;
    Cl2z =Clz;
    
    Cdx[counter] = rB_Cdx + (i*3.01);
    Cdy[counter] = rB_Cdy + (j*3.01);
    Cdz[counter] = rB_Cdz + (k*3.01);
 
    Cl1x[counter] = Cdx[counter] + rB_Cl1x;
    Cl1y[counter] = Cdy[counter] + rB_Cl1y;
    Cl1z[counter] = Cdz[counter] + rB_Cl1z;

    Cl2x[counter] = Cdx[counter] + rB_Cl2x;
    Cl2y[counter] = Cdy[counter] + rB_Cl2y;
    Cl2z[counter] = Cdz[counter] + rB_Cl2z;

    counter += 1;
     }
   }
 }   

    //hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("kadmium-klorida.xyz");
    int N = 125 * 5;
    file << N << "\n"<< endl;

    // iterasi dalam output array
    for(int m = 0; m < 125; m++)

     
    //memasukkan nilai tersebut ke dalam file
    ofstream file;
    file.open("kadmium klorida");
    file << "3\n"<< endl;
    file << setw(3)<<" Cd"<<setw(3)<<"" \
    << fixed << setprecision(3) << Cdx << setw(3)<<""\
    << fixed << setpracision(3) << Cdy << setw(3)<<""\
    << fixed << setpracision(3) << Cdz << "\n";
    
    file << setw(3) << "Cl1" << setw(3) << " " \
    << fixed << setprecision(3) << Cl1x << setw(3) << " "\
    << fixed << setprecision(3) << Cl1y << setw(3) << " "\
    << fixed << setprecision(3) << Cl1z << "\n";

    file << setw(3) << "Cl2” << setw(3) << " " \
    << fixed << setprecision(3) << Cl2x  << setw(3) << " "\
    << fixed << setprecision(3) << Cl2y << setw(3) << " "\
    << fixed << setprecision(3) << Cl2z << "\n";

    file.close();
    
    cout << "program selesai";

    return 0;
}
 
    %%writerfile ep-CdCl2.cpp
    
    #imclude "iostream"
    #include "cmath"
    #include "iomanip"
    #include "fstream"
    
    using namespace std;

    float densitas;         /*ensitas ini memiliki satuan g cm^-3
                               dan ini harus diinput dari user */
    // converter dari nilai cm^3 ke A^3
    float cm^3_to_A3=1.0E-24;
    float numb_mol;
    float Na = 6.022E23;            // bilangan avogardo
    float Mr_CdCl2 = 111;           // massa relatif dari CdCl2
    

