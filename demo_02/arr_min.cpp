#include<iostream>

using namespace std;

int main() {
    cout << "请输入数组大小N:";
    int N;
    cin >> N;
    int arr[N];
    cout << "请输入数组：";
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int min = arr[0];
    int mindex = 0;
    for(int i = 1;i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
            mindex = i;
        }
    }
    cout << "数组最小的是：" << min << "下标：" << mindex;
    return 0;
}