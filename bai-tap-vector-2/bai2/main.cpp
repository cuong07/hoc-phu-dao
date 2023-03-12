#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n,m;
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    set<int> s;
    for(int i = 0; i< n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << "Nhap gia tri muon tim: ";
    cin >> m;
    for(int i = 1 ; i <= m ; i++) {
        int x;
        cout << "nhap han tu thu " << i << " : " ;
        cin >> x;
        s.count(x) == 1 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
/*
Tìm kiếm phần tử trong mảng bằng nhiều cách (nếu có thể) theo các yêu cầu sau:
- Đầu vào: Gồm n phần tử, giá trị các phần tử trong mảng, m phần tử cần tìm và giá trị
mỗi phần tử cần tìm. Ví dụ:
6
1 2 3 4 5 6
3
1
2
8
- Đầu ra: In ra YES nếu tìm thấy, ngược lại in ra NO. Ví dụ:
YES
YES
NO
*/
