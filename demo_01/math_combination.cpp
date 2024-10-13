//输入10个整数，显示10个数字中挑选2个数字的所有组合
#include <iostream>
using namespace std;

int main() {
    cout << "请输入10个数字:";
    int num[10];
    for(int & i : num) {
        cin >> i;
    }
    int hash[10];
    int n=1;
    for(int i =0; i < 10 ; i++) {
        int time = 0;
        for(int j = 0 ; j < n ; j++) {
            if(num[i] == hash[j]) {
                time++;
            }
        }
        if(time == 0) {
            hash[n-1] = num[i];
            n++;
        }
    }
    cout << "数字有:";
    for(int i = 0; i < n-1;i++) {
        cout << hash[i] << " ";
    }
    cout << endl << "组合有:";
    for(int i = 0 ; i < n-1 ; i++) {
        for(int j = i+1 ; j < n-1 ; j++) {
            cout << hash[i] << "&&" << hash[j] << " ";
        }
    }
}