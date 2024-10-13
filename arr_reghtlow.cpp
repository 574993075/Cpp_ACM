#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    cout << "输入S/M：";
    char c;
    cin >> c;
    cout << "输入数组M[12][12]:";
    double M[12][12];
    for(int i = 0 ; i < 12 ;i++) {
        for(int j = 0 ; j < 12 ; j++) {
            cin >> M[i][j];
        }
    }
    double sum = 0;
    for(int i = 1 ; i < 12 ; i++) {
        for(int j = 11 ; j >= 12 - i ; j--) {
            sum = sum + M[i][j];
        }
    }
    int count = (1+11)*11/2;
    if(c == 'S')
        printf("%.1f",sum);

    if(c == 'M')
        printf("%.1f",sum/count);
    return 0;
}