#include <bits/stdc++.h>
using namespace std;

void input(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void find(float a[], int n) {
    float max = a[0], min = a[0], sum = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
        sum += a[i];
    }
    float average = sum / n;
    cout << "最大值是" << max << endl;
    cout << "最小值是" << min << endl;
    cout << "平均值是" << average << endl;
}

int main() {
    int n;
    cout << "请输入数组长度：";
    cin >> n;
    float a[n];
    input(a, n);
    find(a, n);
    return 0;
}
