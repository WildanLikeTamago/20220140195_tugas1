#include <iostream>
using namespace std;

int main()
{ //Begin
    //Numeric bil
    int bil;
    //Character status
    string status;
    //Display "Masukkan bilangan = "
    cout << "Masukkan bilangan = ";
    //Accept bil
    cin>> bil;
    // if (bil == 0)
    if (bil == 0)
        //status "nol"
        status = "nol";
    //else if (bil % 2 == 0)
    else if (bil % 2 == 0)
        //Status = "genap"
        status = "genap";
    //else  
    else
        //Status = "ganjil"
        status = "ganjil";
    //Display "bilangannya = " + status
    cout << "bilangannya = " << status;

} //end