#include<iostream>

using namespace std;

int main() {
    cout << "�����������СN:";
    int N;
    cin >> N;
    int arr[N];
    cout << "���������飺";
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
    cout << "������С���ǣ�" << min << "�±꣺" << mindex;
    return 0;
}