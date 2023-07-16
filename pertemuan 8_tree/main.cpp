#include <iostream>
#include <stdio.h>
using namespace std;

struct Node{
      int data;
      Node *kiri;
      Node *kanan;
};

void tambah(Node **root, int databaru)
{
      if((*root) == NULL)
      {
            Node *baru;
            baru = new Node;

            baru->data = databaru;
            baru->kiri = NULL;
            baru->kanan = NULL;
            (*root) = baru;
            (*root)->kiri = NULL;
            (*root)->kanan = NULL;
            cout <<"Data Bertambah!";
      }
      else if(databaru<(*root)->data)
            tambah(&(*root)->kiri, databaru);

      else if(databaru>(*root)->data)
            tambah(&(*root)->kanan, databaru);
    
      else if(databaru == (*root)->data)
            cout<<"Data sudah ada!";
}

void preOrder(Node *root)
{
      if(root != NULL){
            cout<< root->data<<" ";
            preOrder(root->kiri);
            preOrder(root->kanan);
      }
}

void inOrder(Node *root)
{
      if(root != NULL){
            inOrder(root->kiri);
            cout<< root->data<<" ";
            inOrder(root->kanan);
      }
}

void postOrder(Node *root)
{
      if(root != NULL){
            postOrder(root->kiri);
            postOrder(root->kanan);
            cout<< root->data <<" ";
      }
}

int main(){
      int pil, data;
      Node *pohon;
      pohon = NULL; 

      do{
            cout<<"Menu:";
            cout<<"\n----\n";
            cout<<"1. Tambah dan Input data";
            cout<<"2. pre-order\n";
            cout<<"3. in-order\n";
            cout<<"4. post-order\n";
            cout<<"5. Exit\n";
            cout<<"Pilihan : ";
            cin>> pil;
            switch(pil)
            {
    
            case 1 :
                  cout<<"\nINPUT : ";
                  cout<<"\n-------";
                  cout<<"\nData baru : ";
                  cin>> data;
                  tambah(&pohon, data);
                  break;
                
            case 2 :
                  cout<<"\nPRE ORDER : ";
                  if(pohon!=NULL)
                        preOrder(pohon);
                  else
                        cout<<"Masih kosong!";
                  break;
                 
            case 3 :
                  cout<<"\nIN ORDER : ";
                  if(pohon!=NULL)
                  inOrder(pohon);
                  else
                        cout<<"Masih kosong!";
                  break;
        
            case 4 :
                  cout<<"\nPOST ORDER : ";
                  if(pohon!=NULL)
                        postOrder(pohon);
                  else
                        cout<<"Masih kosong!";
                  break;
            }
            getchar();
      }while(pil != 5); 
  
      return EXIT_FAILURE;
}