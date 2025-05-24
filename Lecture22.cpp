#include<iostream>
#include<string>
using namespace std;

//                                           String Compression 

class solution{
public:
    int compress(vector<char>& chars){
        int n = char.size();
        int idx = 0;

        for(int i=0; i<n; i++){
            char ch = chars[i];
            int count = 0;

            while(i<n && chars[i]==ch){
                count++;
                i++;
            }

            if(count==1){
                chars[idx++] = ch;
            }
            else{
                chars[idx++] = ch;
                string str = to_string(count);
                for(char dig : str){
                    chars[idx++] = dig;
                }
            }

            i--;
        }
        chars.resize(idx);
        return idx;
    }

}

//                                           RemoveDuplicates

class Solution {
    public:
        string removeDuplicates(string s) {
            string temp = "";
            int i = 0;
            
            while (i < s.length()) {
                if (temp.empty() || s[i] != temp.back()) {
                    temp.push_back(s[i]);
                } else {
                    temp.pop_back();
                }
                i++;
            }
            
            return temp;
        }
    };

//                                             permutation in string 

class solution{
private:
    bool checkequal(int a[26], int b[26]){
        if(a[i] != b[i]){
            return 0;
        }
        return 1;
    }

public:
    bool checkpermutation(string s1, string s2){

//      Character count array
        int count1[26] = {0};

        for(int i=o; i<s1.length(); i++){
            int index = s[i]-'a';
            count1[index]++;
        }

//      Traverse s2 string in window of size s1 length and compare 
        int i=0;
        int windowsize = s1.length();
        int count2[26] = {0};

//      Running for 1st window  
        while(i < windowsize && i < s2.length()){
            int index = s[i]-'a';
            count2[ndex]++;
            i++;
        }

        if(checkequal(count1,count2)){
            return 1;
        }

//      aage window process karo
        while(i < s2.length()){
            char newchar = s2[i];
            int index = s2[i]-'a';
            count2[index]++;

            char oldchar = s2[i-windowsize];
            index = oldchar-'a';
            count2[index]--;

            i++;

            if(checkequal(count1,count2)){
                return 1;
            }
        }
        return 0;
    }
};

string removeOccurrences(string s, string part) {
    
    while(s.length()!=0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

//                                         with extra space (temp string)

string replaceSpaces(string &str){
	string temp = "";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

//                                         with extra space (temp string)

string replaceSpaces(string &str){
    string s="@40";

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,s);  
        }
    }
    return str;
}

char getMaxOccChar(string s){
    int arr[26]={0};

    for(int i=0; i<s.size(); i++){
        char ch = s[i];
        int number = 0;
        number = ch-'a';
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}

bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
    
    return 0;
}

char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string a){
    int s = 0;
    int e = a.size()-1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else
            s++;
            e--;
    }
    return 1;
}

void reverseString(char name[], int n) {
    int s = 0;
    int e = n-1;
    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

//                                         solution from shraddha didi 

void reversewords(string s){
    int n = s.length();
    string ans = "";
    reverse(s.begin(),s.end());

    for(int i=0; i<n; i++){
        string word = "";
        while(i<n && s[i] !=0){
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int getlength(char name[]){
    int cnt = 0;
    for(int i = 0; name[i]!='\0'; i++){
        cnt++;
    }
    return cnt;
}

bool isPalindrome(string s) {
    
    //faltu character hatado
    string tp = "";
    
    for(int j=0; j<s.length(); j++) {   
        if(valid(s[j])) {
            tp.push_back(s[j]);
        }
    }
    
    //lowercase me kardo
    for(int j=0; j<tp.length(); j++) { 
        tp[j] = toLowerCase(tp[j]);
    }
    
    //check palindrome
    return checkpalindrome(tp);
    
}

int main(){
    char name[20];
    cout<<"enter the name "<<endl;
    cin>>name;
    int len = getlength(name);
    cout<<"length of the name is "<<len<<endl;

    reverseString(name,len);
    cout<<name<<endl;

//  cout<<"palindrome or not "<<checkpalindrome(name,len)<<endl;

    return 0;

}


// last 4 questions is remaining 