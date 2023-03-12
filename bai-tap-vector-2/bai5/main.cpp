#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    map<char, int> mp;
    for(char c : str)
    {
        if(islower(c)) // chỉ đếm các ký tự thường
            mp[c]++;
    }

    char key;
    int numMax = INT_MIN;
    for(auto item : mp)
    {
        if(item.second > numMax)
        {
            numMax = item.second;
            key = item.first;
        }
    }

    cout << key << endl;
    return 0;
}

/*
Tìm ký tự xuất hiện nhiều lần nhất trong chuỗi (chữ thường) theo các yêu cầu sau:
- Đầu vào: Một chuỗi ký tự. Ví dụ:
abcdedddd fghijk
- Đầu ra: In ký tự xuất hiện nhiều nhất trong chuỗi. Ví dụ:
d
*/
