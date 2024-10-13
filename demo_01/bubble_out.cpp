//ÆðÅÝÅÅÐò
#include<iostream>
using namespace std;

void Input(int a[] ,int &n) {
    for(int i = 0; i < 100; i++) {
        int x;
        cin >> x;
        if(x != 0) {
            a[i] = x;
            n++;
        }
        else {
            break;
        }
    }
}

void Bubble(int a[],int n) {
    for(int i = 0 ; i < n;i ++) {
        for(int j = 0 ; j < n - i; j++) {
            if(a[j] > a [j+1]) {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main() {
    int a[100];
    int n ;
    cout << "ÇëÊäÈëÊý×Ö:";
    Input(a,n);
    Bubble(a,n);
    for(int i = 0 ; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
