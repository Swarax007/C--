# include <iostream> 
 using namespace std; 
int main(){
    // int n=15;
    char arr[]="thehoundsofrock";
    for(int i=0;i!='\0';i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<arr[5]<<endl;
    //Concat strings
    //way1
    string a="hi john";
    string b="have a good day";
    string c=a+" "+b;
    cout<<c<<endl;
    //way2
    a.append(b);
    cout<<a<<endl;
    

    return 0 ; 
}