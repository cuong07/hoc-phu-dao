#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int x;
    for(int i = 0 ; i < 5 ; i++){
        cout << "nhap phan tu thu" << i+1 << " : ";
        cin >> x;
        s.insert(x);
    }
    cout << "So phan tu khac nhau trong mang la: " << s.size() << endl;
    return 0;
}
/*
Đếm số phần tử khác nhau trong mảng bằng nhiều cách (nếu có thể) theo các yêu cầu sau:
- Đầu vào: Gồm n phần tử và giá trị các phần tử trong mảng. Ví dụ:
5
1 2 3 3 4
- Đầu ra: Số phần tử khác nhau trong mảng. Vi dụ:
4
*/
