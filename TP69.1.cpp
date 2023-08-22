#include <iostream>
#include <string>
using namespace std;
string InsertarBarraBaja(string f);
int main()
{
    string frase;
    cout<<"Ingrese frase: ";
    getline(cin, frase);
    cout<<InsertarBarraBaja(frase)<<endl;
    return 0;
}

string InsertarBarraBaja(string f)
{
    string s="_";
    for (int i=i; i<f.size(); i+=2)
    {
        if (f[i]==' ')
        {
           f.erase (i, 1);
           f.insert (i, s);
        }
    }
    return f;
}
