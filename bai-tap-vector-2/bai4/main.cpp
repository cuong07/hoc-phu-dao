#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    int n, x, key, numMax;    // numMax = số lần xuất hiện nhiều nhất
    cout << "Nhap so phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "mp[" << i << "]: ";
        cin >> x;
        mp[x]++;
    }

    numMax = INT_MIN;
    for(auto item : mp)
    {
        if(item.second > numMax)
        {
            numMax = item.second;   // item.second = số lần xuất hiện
            key = item.first;       // item.first = giá trị của phần tử
        }
    }
    cout << key << " co so luan xuat hien la " << numMax << endl;
    return 0;
}

/*
Tìm phẩn tử xuất hiện nhiều lần nhất trong mảng theo các yêu cầu sau:
- Đầu vào: Gồm n phần tử và giá trị các phần tử trong mảng. Ví dụ:
5
1 1 2 1 3
- Đầu ra: In phần tử xuất hiện nhiều nhất và số lần xuất hiện của nó trong mảng. Khi có
nhiều phần tử thỏa điều kiện thì lấy phần tử hỏ nhất. Ví dụ:
2
1 3
*/
