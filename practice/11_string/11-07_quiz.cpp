#include <iostream>
using namespace std;

int main() {
    string s;

    getline(cin,s);

    if(s.find("@") != string::npos){ //string::npos는 찾는 문자열이 없을떄 반환되는 값이다 })
        
        cout << s.substr(s.find("@")+1) <<endl;
    }

    else{

        cout << "Invalid email" << endl;

    }

    return 0;
}

int main() {
    string s;
    getline(cin,s);

    if(s.rfind(".") != string::npos){

        cout << s.substr(s.rfind(".")+1) << endl;
    }
    else{
        cout << "No extesnsion" << endl;
    }

    return 0 ;
}

//rfind는 뒤에서 부터 찾는것임 

int main() {

    string s;

    getline(cin,s);

    if(s.find("error") != string::npos){

        cout << "Error found" << endl;
    }
    else{
        cout << "NO Error" << endl;
    }
    
    return 0;

}

int main() {
    string s;
    string s2;
    getline(cin,s);

    for (int i =0 ; i<s.length(); i++){
        if(s[i] != '-'){
            s2 += s[i];
        }
    }

    cout << s2 << endl;

    return 0;
}

int main() {

    string s;
    string s2;

    getline(cin,s);

    for (int i = 0; i<s.length(); i++){
        if(i<2){
            s2 += s[i];
        }
        else{
            s2 += "*";
        }
        
    }

    cout << s2 << endl;

    return 0;
}

int main() {

    string s;
    string s2;

    getline(cin,s);

    for (int i = 0; i<s.length(); i++){

        s2 += s[s.length()-1-i];
        
    }

    cout << s2 << endl;

    return 0;
}
        
    