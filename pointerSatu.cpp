#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"no induk = "<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); // Member Acces Operator
    
    mahasiswa &refMhs = mhs; //pointer reference
    refMhs.nim = 2; //member acces operator
    refMhs.showNim(); // Member Acces Operator

    mahasiswa *ptrMhs = &mhs; //pointer
    ptrMhs->nim = 3; // arrow operator
    ptrMhs->showNim(); // 
    return 0;
}

