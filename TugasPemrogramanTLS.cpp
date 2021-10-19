#include <iostream>

using namespace std;

int main()
{
    int pilih, bayar1, jml1, bayar2, jml2, total;
    double harga;
    
  
    cout<<"===================================="<<endl;
    cout<<"+++++++   Toko Roti Hayuk    +++++++"<<endl;
    cout<<"=====Jenis==================Harga==="<<endl;
    cout<<"1. Roti moka               Rp.3000"<<endl;
    cout<<"2. Roti keju               Rp.5000"<<endl;
    cout<<endl;
    cout<<"=================================="<<endl;
    cout<<endl;
    
    cout<<"Pilih menu : ";
    cin>>pilih;
    
    if (pilih==1){
        cout<< "\nRoti moka";
        cout<< "\nHarga = Rp.3000";
        cout<< "\nJumlah Roti = ";
        cin>>jml1;
    
        bayar1=3000*jml1;
        cout<<"Total = Rp."<<bayar1<<endl;
    }   
    else if (pilih==2){
        cout<< "\nRoti keju";
        cout<< "\nHarga = Rp.5000";
        cout<< "\nJumlah Roti = ";
        cin>>jml2;
    
        bayar2=5000*jml2;
        cout<<"Total = Rp."<<bayar2<<endl;
    }
    
    else {
        cout<< "\nRoti moka";
        cout<< "\nHarga = Rp.3000";
        cout<< "\nJumlah Roti = ";
        cin>>jml1;
    
        bayar1=3000*jml1;
        cout<<"Subtotal = Rp."<<bayar1<<endl;
        
        cout<< "\nRoti keju";
        cout<< "\nHarga = Rp.5000";
        cout<< "\nJumlah Roti = ";
        cin>>jml2;
    
        bayar2=5000*jml2;
        cout<<"Subtotal = Rp."<<bayar2<<endl;
        
        total=bayar1+bayar2;
        cout<<endl;
        cout<<"Total = Rp."<<total<<endl;
    }
    
    return 0;
}
