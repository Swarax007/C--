# include <iostream> 
 using namespace std; 
int main(){
    char name[15];
    //We will input name of size 15 and further part will be cut out
    cin.getline(name,15);
    cout<<name<<endl;
    return 0 ; 
}