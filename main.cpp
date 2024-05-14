#include <iostream>
using namespace std;

// Chương trình thao tác với hàng đợi sử dụng số nguyên với các thao tác chính:
// - Enqueue: Thêm một phần tử vào cuối hàng đợi.
// - Dequeue: Lấy một phần tử ở đầu hàng đợi.
// Sử dụng mảng vòng tròn để tránh tràn mảng.

int main() {
    // Khai báo các biến cần thiết
    int front = 0; // Chỉ số đầu của hàng đợi
    int back = 0; // Chỉ số cuối của hàng đợi
    int currentSize = 0; // Độ lớn hiện tại của hàng đợi
    int arr[10]; // Mảng cố định có kích thước 10 để lưu các phần tử trong hàng đợi
     for(int i = 0; i < 10; i++) {
        arr[i] = -1;            // gán tất cả các ô đựng giá trị của mảng cho -1 để cho dễ nhìn.
         }
    int choice; // Biến lưu lựa chọn của người dùng

    // Vòng lặp vô hạn để chương trình chạy liên tục cho đến khi người dùng dừng lại
    while (true) {
        // Hiển thị menu lựa chọn cho người dùng
        cout << "Chuong trinh hang doi thao tac voi so.\n "
                "vui long chon 1 chuc nang: \n"
                "1 - them mot so vao hang doi;\n "
                "2 - lay mot so ra hang doi; \n"
                "3 - kich thuoc cua hang doi hien tai; \n"
                "4 - display thong tin trong mang hien tai. \n"
                "Vui long nhap lua chon cua ban: ";
        cin >> choice; // Đọc lựa chọn từ người dùng
        cout << "-----------------------------------" << endl;

        // Kiểm tra lựa chọn của người dùng
        if (choice == 1) {
            // Thao tác thêm phần tử vào hàng đợi
            if (currentSize == 10) { // Kiểm tra xem hàng đợi có đầy không
                cout << "Hang doi da day, vui long xoa bot phan tu de them vao." << endl;
                cout << "-----------------------------------" << endl;
                continue; // Quay lại menu nếu hàng đợi đầy
            } else {
                // Thêm phần tử vào cuối hàng đợi
                cout << "Vui long nhap so them vao: ";
                cin >> arr[back]; // Đọc số từ người dùng và lưu vào vị trí 'back' trong mảng
                back++; // Tăng chỉ số 'back' lên
                if (back > 9) { // Nếu 'back' vượt quá kích thước mảng, đặt lại 'back' về 0
                    back = 0;
                }
                currentSize++; // Tăng kích thước hiện tại của hàng đợi
                cout << "Phan tu da duoc them vao hang doi" << endl;
                cout << "-----------------------------------" << endl;
                continue; // Quay lại menu sau khi thêm phần tử
            }
        } else if (choice == 2) {
            // Thao tác lấy phần tử ra khỏi hàng đợi
            if (currentSize == 0) { // Kiểm tra xem hàng đợi có rỗng không
                cout << "Hang doi rong, vui long them phan tu de xuat." << endl;
                cout << "-----------------------------------" << endl;
                continue; // Quay lại menu nếu hàng đợi rỗng
            } else {
                // Lấy phần tử ở đầu hàng đợi
                cout << "Xuat phan tu o dau hang doi la: " << arr[front] << endl;
                arr[front] = -1; // gán -1 tương đương với rỗng để dễ thấy vị trí rỗng
                front++; // Tăng chỉ số 'front' lên
                if (front > 9) { // Nếu 'front' vượt quá kích thước mảng, đặt lại 'front' về 0
                    front = 0;
                }
                currentSize--; // Giảm kích thước hiện tại của hàng đợi
                cout << "-----------------------------------" << endl;
                continue; // Quay lại menu sau khi lấy phần tử
            }
        } else if (choice == 3) {
            // Hiển thị kích thước hiện tại của hàng đợi
            cout << "Kich thuoc cua hang doi hien tai la: " << currentSize << endl;
            cout << "-----------------------------------" << endl;
            continue; // Quay lại menu sau khi hiển thị kích thước
        } else if (choice == 4) {
            cout << "vi tri va gia tri phan tu hien tai trong mang la: " << endl;
           for(int i = 0; i < 10; i++) {
               cout << " [vi tri : " << i << ", gia tri: " << arr[i] << "]" << endl;
           }
           cout << "front dang o vi tri: " << front << endl;
           cout << "back dang o vi tri: " << back << endl;
           cout << "do lon hang doi hien tai: " << currentSize << endl;
            cout << "-----------------------------------" << endl;
            continue;
        } else {
            // Xử lý lựa chọn không hợp lệ
            cout << "Lua chon khong dung, vui long kiem tra lai." << endl;
            cout << "-----------------------------------" << endl;
            continue; // Quay lại menu nếu lựa chọn không hợp lệ
        }
    }

    return 0; // Kết thúc chương trình (thực tế không bao giờ tới đây do vòng lặp vô hạn)
}
