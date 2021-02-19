#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;
    cout<<"enter the string";
    getline(cin,str);
    int n = str.size();
    int mid = n/2;
    int k= n*2-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cout<<" ";
        }
        k-=2;
        for(int p=0; p<=i;p++){
            if (n %2 !=0){
                if(p<=mid) cout<<str[p+mid]<<' ';
                else {
                    cout<<str[p-(mid+1)]<<' ';
                }
            }
            else{
                if(p<mid) cout<<str[p+mid]<<' ';
                else {
                    cout<<str[p-(mid)]<<' ';
            }
            
                
            }
            
        }

        cout<<endl;
    }
    return 0;
}