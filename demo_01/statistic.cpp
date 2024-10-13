#include <iostream>
//统计数字数目
using namespace std;

void Input(int num[], int &n) {
    n = 0;
    while(n < 100) {
        cin >> num[n];
        if(num[n] == 0) {
            break;
        }
        n++;
    }
}

void Output(int num[], int n) {
    int time[2*n];
    for(int i = 0 ; i < 2*n ; i++) {
        time[i] = 0;
    }
    for(int i = 0 ; i < n ; i++) {
        int m = 0;
        for(int j = 0; j < n ;j++) {
            if(num[i] == num[j]) {
                m++;
            }
        }
        time[2*i] = num[i];
        time[2*i+1] = m;
    }
    for(int q = 0 ; q < 2*n ; q+=2) {
        cout << time[q] << " occurs " << time[q+1] << " times" << endl;
    }
}

int main() {
    int num[100];
    int n;
    cout << "请输入数字：";
    Input(num, n);
    Output(num, n);
    return 0;
}
