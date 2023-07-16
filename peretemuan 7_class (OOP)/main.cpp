#include <iostream>
#include <cstring>
using namespace std;

class mahasiswa {
  public:
  virtual void status (){
    cout <<"  " <<endl;
  }
  virtual void nama (){
    cout <<"  " <<endl;
  }
  virtual void umur (){
    cout <<"  " <<endl;
  }
  virtual void jurusan (){
    cout <<"  " <<endl;
  }
  virtual void fakultas (){
    cout <<"  " <<endl;
  }
};

class risma : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa aktif "<<endl;
 }
void nama (){
  cout<<"Andin"<<endl;
 }
void umur (){
  cout<<"21 Tahun"<<endl;
 }
void jurusan (){
  cout<<"Teknologi Informasi"<<endl;
 }
void fakultas (){
  cout<<"Informatika"<<endl;
 }
};

class feby : public mahasiswa  {
public :
void status (){
  cout <<"Mahasiswa nonaktif "<<endl;
 }
void nama (){
  cout<<"nunu"<<endl;
 }
void umur (){
  cout<<"23 Tahun"<<endl;
 }
void jurusan (){
  cout<<"multimedia"<<endl;
 }
void fakultas (){
  cout<<"informatika"<<endl;
 }
};

int main (){
  mahasiswa *data1 = new risma ();
  mahasiswa *data2 = new feby ();


  cout <<"\nData Mahasiswa 1: "<<endl;
  cout <<"Status Mahasiswa : "; data1  ->  status ();
  cout <<"Nama Mahasiswa : "; data1  ->  nama ();
  cout <<"Umur : "; data1  ->  umur ();
  cout <<"Jurusan : ";data1  ->  jurusan ();
  cout <<"Fakultas : ";data1  ->  fakultas ();
  
  cout <<"\n\nData Mahasiswa 2: "<<endl;
  cout <<"Status Mahasiswa : ";data2  ->  status ();
  cout <<"Nama Mahasiswa : ";data2  ->  nama ();
  cout <<"Umur : ";data2  ->  umur ();
  cout <<"Jurusan : ";data2  ->  jurusan ();
  cout <<"Fakultas : ";data2  ->  fakultas ();
  return 0;
}