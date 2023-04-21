#include <iostream>

using namespace std;

int main()
{
    int n,v[100],d[100];
    int x=0, y=0;
    cout << "n=";
    cin>> n;
    for(int i=0; i<n; i++){
        cout << "az 1 sorozat szama =";
        cin >> v[i];
        if(v[i]%2==0){
            x+=v[i];
        }
    }
    for(int i=0; i<n; i++){
        cout << "az 2 sorozat szama =";
        cin >> d[i];
        if(d[i]%2==1 && d[i] < x){
            y+=d[i];
        }
    }
    cout << y;
    return 0;
}
