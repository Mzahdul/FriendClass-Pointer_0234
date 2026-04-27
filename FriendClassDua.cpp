#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNiliaipelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar() : nilai(100) {}
    friend void manusia::showNiliaipelajar(pelajar &x);
};

void manusia::showNiliaipelajar(pelajar &x)
{
    cout << x.nilai;
}
int main()
{}