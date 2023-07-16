#include <iostream>
using namespace std; 

class contoh { //class yang dideklarasikan
  private : //akses private untuk var int nilai
  int nilai; //tipe data int pada akses private

  public : //akses public agar dapat diakses diluar class
  contoh (int n){ // setter agar dapat memasukkan nilai pada "nilai"
    nilai = n; //memasukan n kedalam class
  }
 
  int getNum (){  // mengambil nilai yang sudah dimasukkan pada fungsi setter
    return nilai; //mengembalikan nilai
  }
}; //penutup class

int main (){ //fungsi utama
  contoh obj(10); //mengalokasikan nilai untuk class menggunakan constructor
  cout <<"nilai yang diinput: "<<obj.getNum()<<endl; //output u
  return 0;
}

//*Program ini merupakan penerapan constructor*//