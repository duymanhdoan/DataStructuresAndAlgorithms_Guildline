## Lý thuyết tuần 13 STL(map và set) 
- [file code ở đây](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/lythuyet_w13.cpp) 
- [Đọc thông tin trong thư viện STL đầy đủ ở đây.](https://drive.google.com/file/d/1iqlQ1TmgGy_CKwZ0_9KPfu_ZHsnrT3Tu/view)

## Chữa bài BTVN tuần 12. 

###  <b>I. Bài tập cơ bản </b>
<b>Bài 1: </b> Nhập vào một vector chứa kiểu nguyên. Thực hiện các thao tác sau: 
- Sử dụng chỉ số duyệt và hiển thị vector đó ra màn hình. 
- Sử dụng interator duyệt xuôi và duyệt ngược vector, hiển thị ra màn hình.

=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/B1.cpp)

<b>Bài 2: </b> Nhập vào 2 ma trận A, B có cùng kích thước m*n. Xuất ra ma trận C là kết quả phép cộng của 2 ma trận A + B.

![](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/sourceImage/cau2.png)

<b> Lưu ý: sử dụng cấu trúc lưu trữ vector (không dùng mảng 2 chiều). </b>  

=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/B2.cpp)

<b>Bài 3: </b>  Sử dụng struct xây dựng tọa độ của một điểm A. Biết điểm A có 2 thuộc tính là x và y. Trong đó x thuộc trục OX và y thuộc trục OY. A(x,y). 

Yêu cầu: 
- Tạo một vector nhập vào từ bàn phím của 5 điểm bất kỳ.
- sử dụng hàm sort để sắp xếp vector đó.
- sắp xếp vector giảm dần theo thuộc tính y.

=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/B3.cpp)

Bài 4: 

- ![](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/sourceImage/cau4a.png)

- ![](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/sourceImage/cau4b.png)


=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/B4.cpp)

###  <b>II. Bài tập nâng cao </b>

<b>Bài 1: </b> Gần khu anh Duy sống có một tiệm bán đồ cổ bán n vật. Mỗi vật chưng bày có giá trị V và khối lượng là W . Do tình hình dịch khó khăn kéo dài, anh Duy quyết định lên kế hoạch đi cướp tiệm đồ cổ đó. Anh có mang theo một balo có thể chứa được ít hơn hoặc bằng K (kg) trọng lượng tối đa của túi. Trong khi đột nhập vào tiệm đồ cổ, anh muốn làm sao để lấy được các vật có giá trị tối đa (Biết mỗi vật chỉ được lấy duy nhất 1 lần). Không may, anh Duy học không giỏi toán. Anh không biết làm sao để giải được bài toán này. Rất may anh biết 3 bạn Phúc, Hiếu và Thành học rất giỏi. Hãy giúp anh giải quyết bài toán này. 

<b>Input</b> 
- dòng đầu tiên gồm n vật. 
- n dòng tiếp theo bao gồm hai số lần lượt là:. Tương ứng là giá trị và khối lượng của vật thứ i.

<b>Output</b> 
- In ra một số duy nhất là giá trị tối đa có thể mang đi.

<b>Ví Dụ </b> 

    Input 

    5 10

    5 2

    3 1

    1 1

    2 1

    9 7

    Output 

    17


=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/B1nangcao.cpp)


<b>Bài 2: </b>  [Đề bài: 1526A - codeforces.com](https://codeforces.com/contest/1526/problem/A)

=> [lời giải](https://github.com/duymanhdoan/Guildline_ML/blob/master/C_Basic/week13/1526A.cpp)
