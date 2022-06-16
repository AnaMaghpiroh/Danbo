
    
%%writefile ep-Kadmiumdiklorida-ruah.cpp

#include "iostream"
#include "cmath"
#include "iomanip"
#include "fstream"

using namespace std;

int main(){
    // deklarasi variabel
    float pi = 3.14;
    int counter = 0;
    
    // deklarasi molekul kadmiumdiklorida
    float Cdx[125], Cdy[125], Cdz[125];
    float Cl1x[125], Cl1y[125], Cl1z[125];
    float Cl2x[125], Cl2y[125], Cl2z[125];
  
    /*  Cl- Cd - Cl
        molekul kadmiumdiklorida itu bentuk linier
    */
  
  float rB_Cdx = 0.0;
  float rB_Cdy = 0.0;
  float rB_Cdz = 0.0;
  
  float rB_Cl1x = sin (2.42*pi/180) * 4.840;
  float rB_Cl1y = 0.0;
  float rB_Cl1z = cos(2.42*pi/180)  * 4.840;
  
  float rB_Cl2x = - rB_Cl1x;
  float rB_Cl2y = rB_Cl1y;
  float rB_Cl2z = rB_Cl1z;

  //iterasi untuk setiap molekul kadmium diklorida
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      for (int k =0; k < 3; k++){
 
          rB_Cdx ;counter;rB_Cdx + (i*3.01);
          rB_Cdy ;counter;rB_Cdy + (j*3.01);
          rB_Cdz ;counter;rB_Cdz + (k*3.01);
    
          rB_Cl1x = sin(2.42*pi/180)* 4.840;
          rB_Cl1y = 0.0;
          rB_Cl1z = cos(2.42*pi/180)* 4.840;
    
          rB_Cl2x = - rB_Cl1x;
          rB_Cl2y = rB_Cl1y;
          rB_Cl2z = rB_Cl1z;
    
          rB_Cdx [counter} = rB_Cdx + (i*3.01);
          rB_Cdy [counter] = rB_Cdy + (j*3.01);
          rB_Cdz [counter] = rB_Cdz + (k*3.01);
 
           rB_Cl1x [counter] = rB_Cdx[counter] + rB_Cl1x;
           rB_Cl1y [counter] = rB_Cdy[counter] + rB_Cl1y;
           rB_Cl1z [counter] = rB_Cdz[counter] + rB_Cl1z;

           rB_Cl2x [counter] = rB_Cdx[counter] + rB_Cl2x;
           rB_Cl2y [counter] = rB_Cdy[counter] + rB_Cl2y;
           rB_Cl2z [counter] = rB_Cdz[counter] + rB_Cl2z;

           counter += 1;
         }
      }
   }   
    //hasil iterasi dimasukkan ke dalam file xyz
    ofstream file;
    file.open("kadmium-diklorida.xyz");
    int N = 125 * 3;
    file << N << "\n"<< endl;

    // iterasi dalam output array
    for(int m = 0; m < 125; m++){
      file << setw(3) << "Cd" << setw(3) <<" " \
           << fixed << setprecision(3) << rB_Cdx << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cdy << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cdz << "\n";
    
      file << setw(3) << "Cl" << setw(3) <<" " \
           << fixed << setprecision(3) << rB_Cl1x << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cl1y << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cl1z << "\n";

      file << setw(3) << "Cl" << setw(3) <<" " \
           << fixed << setprecision(3) << rB_Cl2x  << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cl2y << setw(3) <<" "\
           << fixed << setprecision(3) << rB_Cl2z << "\n";
    }
    file.close();
    
    cout << "program telah selesai";

    return 0;
}

%%shell 

 g++ ep-Kadmiumdiklorida-ruah.cpp -o Kadmiumdiklorida



      
        

