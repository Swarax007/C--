# include <iostream> 
 using namespace std; 
int main(){
    string str;
    getline(cin,str);
    int flag=0;
    for(int i=0;i<str.length();i++){
        for(int j=str.length()-1;j>=0;j++){
            if (str[i]==str[j]){
                flag==1;
            }
            else
            cout<<"no"<<endl;
        }
    }
    return 0 ; 
}