#include <iostream>
using namespace std;

void input(float a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void find(float a[], int n, float* max, float* min, float* average) {
    *max = a[0];
    *min = a[0];
    *average = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min = a[i];
        }
        *average += a[i];
    }
    *average /= n;
}

int main() {
    float f[5];
    float max, min, average;
    input(f, 5);
    find(f, 5, &max, &min, &average);
    cout << "最大值" << max << endl;
    cout << "最小值" << min << endl;
    cout << "平均值" << average << endl;
    return 0;
}