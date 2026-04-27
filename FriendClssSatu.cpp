#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string nama);
    friend class siswa;
};

class siswa
{   
private:
    int id;

public:
    void setId(int pId);
    void display(orang &a);
};

void siswa::display(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
int main()
{
    orang joko;
    joko.setNama("joko susislo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.display(joko);
    return 0;
}