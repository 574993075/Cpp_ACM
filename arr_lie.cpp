#include<cstdio>
#include<iostream>

using namespace std;

int main() {
    cout << "��������������������0��ʼ��";
    int rank; char st;
    cin >> rank;
    cout << "������S,M:";
    cin >> st;
    double R[4][4];
    cout << "��������:";
    for(int i = 0 ; i < 4 ; i++)
        for(int j = 0 ; j < 4; j++)
            cin >> R[i][j];
    double num = 1;
    if(st == 'S') {
        for(int i = 0 ; i < 4 ; i++)
            num = num + R[i][rank];
        num = num -1;
    }
    if(st == 'M') {
        for(int i = 0 ; i < 4; i++)
            num = num + R[i][rank];
        num = num -1;
        num = num / 4;
    }
    cout << num;
    return 0;
}