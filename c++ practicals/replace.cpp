#include<iostream>
using namespace std;


bool isThere(string a,string b){
    if( a.find(b) < a.length() ){
        return true;
    }else{
        return false;
    }
}

string replace(string a,string b,string c){
    if(isThere(a,b)){
        string temp;
        int index = a.find(b);
        
        for(int i=0;i<index;i++){
            temp += a[i];
        }
      
        temp += c;
        
        index += b.length();
        
        for(int i=index;i<a.length();i++){
            temp += a[i];
        }
        
        return temp;
        
    }else{
        return "No String found";
    }
}

int main(){
    string str,pat,rep;
    
    cout << "enter your main string :";
    cin >> str;
    cout << endl << "string you want to replace : ";
    cin >> pat;
    cout << endl << "replacing string : ";
    cin >> rep;
    
    cout << endl << replace(str,pat,rep);
    
    return 0;
}