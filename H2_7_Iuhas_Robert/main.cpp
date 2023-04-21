#include <iostream>

using namespace std;
int fakt(int &a){
    int b=1;
    for(int i=1; i<=a; i++){
        b*=i;
    }
    return b;
}
int main()
{
    int n,oszeg=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2==1){
            oszeg+=fakt(i);
        }else{
            oszeg-=fakt(i);
        }
    }
    cout <<oszeg;
    return 0;
}
