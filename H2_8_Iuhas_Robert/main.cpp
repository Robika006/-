#include <iostream>
#include <fstream>
using namespace std;
bool ki=false;
bool vagy(int x){
    while(x>0){
        if((x%10)%2==1){
            return false;
        }
        x/=10;
    }
    ki=true;
    return true;
}
int main()
{
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int szam;
    while(in>>szam){
        if(vagy(szam)==true){
            out << szam;
        }
    }
    if(ki==false){
        out <<"nem létezik";
    }
    return 0;
}
