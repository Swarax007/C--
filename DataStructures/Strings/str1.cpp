# include <iostream> 
#include <string>
 using namespace std; 
int main(){
    string a="fnfdsjfk";
    cout<<a[4]<<endl;
    string str;
    getline(cin,str);
    cout<<str.length()<<endl;
    str.resize(67);
    cout<<str<<endl;
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
    return 0 ; 
}