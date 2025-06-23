#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch>=0 && ch<=9)){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void reverse(char name[],int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        swap(name[s++], name[e--]);
    }
}

bool isPalindrome(string a){
    int s = 0;
    int e = a.length()-1;

    while(s<=e){
        if(a[s] != a[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

bool validChar(char ch){
    if((ch>='a' && ch <='z') || (ch >= 'A' && ch <= 'Z') || (ch>=0 && ch<=9)){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s){
    string temp="";
    // check valid character
    for (int j=0; j<s.size();j++){
        if(validChar(s[j])){
            temp.push_back(s[j]);
        }
    }
    // convert to lower case
    for (int j=0; j<s.size();j++){
        temp[j] = toLowerCase(temp[j]);
    }
    // check if it is a palindrome or not
    return isPalindrome(temp);
}

char getMaxOccCharacter(string s){
    int arr[26]={0};

    for(int i=0; i<s.length();i++){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int max = -1 , ans = 0;
    for(int i=0; i<26;i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

string replaceSpaces(string &str){
    string temp = "";
    for(int i=0; i < str.length(); i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main(){
    char name[20];
    
    cin >> name;
    
     cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << "Length : " << len << endl;
     reverse(name,len) ;
    cout << "Your name is ";
    cout << name << endl;
    string s ;
    cin >> s;
    cout << isPalindrome(s) << endl;
    cout << getMaxOccCharacter(s) << endl;
    cout << replaceSpaces(s) << endl;

    cout << toLowerCase('b') << endl;
    cout << toLowerCase('C') << endl;

    return 0;
}