#include <iostream>

using namespace std;
int t[10]={5,6,2,8,1,9,3,7,4,0};
void rendez(int &a){
    if(t[a]<t[a-1]){
        ///cout <<t[a]<<" ";
        swap(t[a],t[a-1]);
        if(a>1){
            a-=2;
        }
    }
}
int main()
{
    for(int i=1; i<10; i++){
        if(t[i]<t[i-1]){
                rendez(i);
        }
    }
    for(int i=0; i<10; i++){
        cout <<t[i]<<" ";
    }
    return 0;
}
