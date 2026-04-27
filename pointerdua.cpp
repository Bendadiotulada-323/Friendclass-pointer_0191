#include <iostream>
using namespace std;

class mahasiswa
{
public:
int nim;
void shownim(int nim)
    {
        cout << "No Induk : " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa();// pointer object mhs
    mhs->nim = 2;
    mhs->shownim(mhs->nim);
    delete mhs;
    return 0;
}