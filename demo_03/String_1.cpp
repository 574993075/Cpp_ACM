#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main() {
    char s[100];
    fgets(s,100,stdin);
    int n = strlen(s);
    for(int i = 0 ; i < n ; i++) {
        if(s[i] >= 'A' && s[i] < 'Z') {
            s[i] += 1;
        }
        else if(s[i] == 'Z') {
            s[i] = 'A';
        }
        else if(s[i] >= 'a' && s[i] < 'z') {
            s[i] += 1;
        }
        else if(s[i] == 'z') {
            s[i] = 'a';
        }
    }
    cout << s;
    string a = "hello";
    string b = a.substr(1,3);
    cout << b;
    return 0;
}
