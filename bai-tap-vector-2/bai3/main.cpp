#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m ;
    cout << "Nhap so luong phan tu mang thu nhat: " ; cin >> n;
    cout << "Nhap so luong phan tu mang thu hai: " ; cin >> m;
    cout << "============================\n";
    vector<int> mangMot(n), mangHai(m);

    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu thu " << i << " cua mang thu nhat : ";
        cin >> mangMot[i];
    }
    cout << "============================\n";
    for(int i = 0; i < m; i++){
        cout << "Nhap phan tu thu " << i << " cua mang thu hai : ";
        cin >> mangHai[i];
    }

    vector<int> res;

    for(int i = 0 ; i < n ; i++) {
        bool found = false;
        for(int j = 0 ; j < m; j++) {
            if(mangHai[i] == mangMot[j]){
                found = true;
                break;
            }
        }
        if(!found) {
            res.push_back(mangMot[i]);
        }
    }

    if(res.empty()){
        cout << "Khong Thay";
    }else{
        for(int i = 0 ; i < res.size(); i++)
            cout << res[i] << " ";
    }
    return 0;
}

/*
Đếm số phẩn tử có trong mảng thứ 1 mà không có trong mảng thứ 2 theo các yêu cầu sau:
- Đầu vào: Gồm n và m phần tử, giá trị các phần tử trong hai mảng. Ví dụ:
4 5
1 2 3 4
1 2 5 6 7
- Đầu ra: In ra các phần tử thuộc mảng thứ 1 mà không thuộc mảng thứ 2. Nếu không tìm
thấy phần tử nào thỏa điều kiện thì in "Khong thay!". Ví dụ:
3 4
*/
