Exercise 1.1: Yêu cầu: Viết chương trình hiển thị dòng text "IoT Programming by Lumi Smarthome" trên
giao diện C/C++ application.

Exercise 1.3: Yêu cầu: Viết chương trình nhập một số nguyên và hiển thị ra mã hex của số đó trên giao
diện C/C++ application.

Exercise 1.4: Yêu cầu: Viết chương trình hiển thị mã ASCII của một số bất kỳ trên giao diện C/C++
application.

Exercise 1.5: Yêu cầu: Viết chương trình hiển thị dòng text "I love Embedded Programming" ra màn hình
LCD sử dụng Kit mở rộng của Lumi (hướng dẫn sử dụng thư viện SDK của Lumi
Smarthome).

Lab 1.1: Yêu cầu: Viết chương trình hiển thị hình tam giác đều với chiều dài cạnh bằng 5 dấu sao "*"
trên giao diện C/C++ application.

Lab 1.2: Yêu cầu: Viết chương trình hiển thị hình chữ nhật với chiều dài bằng 6 dấu sao "*"
và chiều rộng bằng 4 dấu sao "*" trên giao diện C/C++ application.

Lab 1.3: Yêu cầu: Viết chương trình hiển thị hình thoi với chiều dài các cạnh bằng 5 dấu sao
"*" trên giao diện C/C++ application.

Lab 2.2:Cho chương trình sau:
Yêu cầu: Xác định phân vùng lưu trữ giá trị của biến local(ko khởi tạo) dựa vào bảng console
trong phần mềm STM32CubeIDE sử dụng giao diện STM32 application?

Lab 2.3: Cho chương trình sau: Yêu cầu: Xác định phân vùng lưu trữ giá trị của biến local dựa vào bảng console
trong phần mềm STM32CubeIDE sử dụng giao diện STM32 application?

Lab 2.4: Cho chương trình sau: Yêu cầu: Xác định phân vùng lưu trữ giá trị của biến global(ko khởi tạo) dựa vào bảng console
trong phần mềm STM32CubeIDE sử dụng giao diện STM32 application?

Lab 2.5: Cho chương trình sau: Yêu cầu: Xác định phân vùng lưu trữ giá trị của biến global dựa vào bảng console
trong phần mềm STM32CubeIDE sử dụng giao diện STM32 application?


Exercise 3.1: Yêu cầu: Viết chương trình nhập 6 ký tự bất kỳ (số, ký tự bất kỳ) từ bàn phím, sau
đó hiển thị trên giao diện C/C++ application.

Exercise 3.2: Yêu cầu: Viết chương trình tính và hiển thị chu vi, diện tích hình tròn trên giao diện
C/C++ application với bán kính R được nhập từ bàn phím (Bán kinh R là số phẩy
động và kết quả in ra màn hình được làm tròn đến 2 chữ số thập phân).

Exercise 3.4: Yêu cầu: Viết chương trình nhập hai số nguyên a, b và hiển thị giá trị tổng, hiệu,
tích, thương của hai số đó trên giao diện C/C++ application.

Lab 3.1: Yêu cầu: Viết chương trình nhập họ và tên riêng rẽ của học viên từ bàn phím và
hiển thị theo thứ tự họ - tên trên giao diện C/C++ application.

Lab 3.2: Yêu cầu: Viết chương trình tính và hiển thị chu vi, diện tích hình chữ nhật trên giao
diện C/C++ application với chiều dài, chiều rộng được nhập từ bàn phím.

Lab 3.3: Viết chương trình in ra kết quả của các macro sau trên giao diện C/C++
application:RELAY_SET_ON(relay_id, relay_state) - Đặt bit thứ relay_id của relay_state lên 1, 
RELAY_SET_OFF(relay_id, relay_state) - Đặt bit thứ relay_id của relay_state về 0 

Exercise 4.1: Yêu cầu: Viết chương trình nhập vào hai số thực float a, b và hiển thị ra màn hình
kết quả tổng, tích, hiệu, thương của hai số vừa nhập.

Exercise 4.2: Yêu cầu: Viết chương trình hiển thị ra màn hình kích thước của các kiểu dữ liệu
sau: unsigned short, short, float, double, long double.

Exercise 4.4: Yêu cầu: Hãy xác định vị trí của các biến sau trong phân vùng bộ nhớ chương trình
của vi điều khiển:
- Biến cục bộ
- Biến toàn cục, static (có khởi tạo giá trị và không khởi tạo giá trị)

Lab 4.1:
Yêu cầu: Biểu diễn số nguyên âm -25 thành byte có dấu và hiển thị trên giao diện
STM32 application.
Output:
Mã hex là 0xE7
Mã thập phân là 231

Lab 4.2:
Yêu cầu: Viết chương trình nhập ký tự bất kỳ (chữ cái, số, ký tự bất kỳ) từ bàn
phím, sau đó in ra mã ASCII, mã Hex.
Input: Nhập ký tự từ bàn phím: a.
Output: Mã ascii là a.
Mã hex là 61.

Lab 4.3:
Yêu cầu: Viết chương trình nhập giá trị nhiệt độ kiểu số thực từ bàn phím nếu lớn
hơn hoặc bằng 35.0 độ C sẽ hiển thị dòng text &quot;Ok Lumi! Điều hòa đã được bật&quot; và
nếu nhỏ hơn 35.0 độ C sẽ in ra &quot;Ok Lumi! Điều hòa đã được tắt&quot;.
Input: Nhiệt độ môi trường là: 40.7 độ C
Output: &quot;Ok Lumi! Điều hòa đã được bật&quot;

Lab 4.5:
Yêu cầu: Viết chương trình điều khiển đảo trạng thái của Led trên Board STM32 với
chu kỳ 500ms (Hướng dẫn sử dụng thư viện SDK của Lumi).
Lưu ý: Led trên Board STM32 là led đơn có màu green duy nhất và chỉ điều khiển
bật tắt mà không điều khiển được độ sáng.


Exercise 5.1:
Yêu cầu: Viết chương trình hiển thị địa chỉ của biến const được khai báo trong
chương trình trên giao diện C/C++ application và nhận xét.
● Cách 1: Khai báo hằng sử dụng từ khóa #define:
#define address 433  =======> marco không phải là hằng số nên có địa chỉ nó chỉ thay thế 
từ address bằng số 433

Exercise 5.2:
Yêu cầu: Tìm x trong chương trình sau và nếu sai thì sửa lại cho đúng: con trỏ và const

Exercise 5.3:
Yêu cầu: Tìm x trong chương trình sau và nếu sai thì sửa lại cho đúng: con trỏ và const


Exercise 6.1: Viết chương trình nhập một số bất kỳ và hiển thị kết quả là một số gấp
4 lần số vừa nhập bằng phép toán trên bit.

Exercise 6.2: Viết chương trình tìm số nguyên dương chẵn lẻ từ người dùng nhập
vào từ bàn phím sử dụng phép toán thao tác trên bit.

Exercise 6.3: Viết chương trình đặt bit thứ 4(thứ 5 nếu tính bắt đầu bằng 1) và 7 của một số bất kỳ được nhập từ
bàn phím lên trạng thái 1 và hiển thị kết quả ra màn hình.(0-1-2-3-4)

Exercise 6.4: Viết chương trình xóa bit thứ 4, 5, 6 của một số bất kỳ được nhập từ
bàn phím về trạng thái 0 và in ra màn hinh kết quả mã hex.

Exercise 6.5: Viết chương trình tính XOR bit của các phần tử trong phạm vi [A, B].

Lab 6.1:
Yêu cầu: Viết chương trình tính giá trị trung bình của hai số nguyên dương được
nhập từ bàn phím có sử dụng phép toán trên bit.

Lab 6.2:
Yêu cầu: Tính giá trị của biểu thức A, B sau và đưa ra giá trị của biến a, b, c sau khi
thực hiện phép toán:

Lab 6.3:
Yêu cầu: Dùng biểu thức điều kiện ? : để đưa ra số lớn nhất trong 3 số thực nhập
vào từ bàn phím

Lab 6.4:
Yêu cầu: Sử dụng toán tử để đảo trạng thái của led trên Board STM32 với chu kỳ T
= 500ms (hướng dẫn sử dụng SDK của LUMI).
Lưu ý: Led trên Board STM32 là led đơn có màu green duy nhất và điều khiển bật
tắt.

Lab 6.5:
Yêu cầu: Sử dụng phép toán để đảo trạng thái của còi với chu kỳ T = 500ms trên
Board STM32 (hướng dẫn sử dụng SDK của LUMI).

Exercise 7.1: Viết chương trình tìm số thực nhỏ nhất và lớn nhất trong ba số được
nhập từ bàn phím.

Exercise 7.2: Nhập ba số thực vào từ bàn phím, kiểm tra có tồn tại một tam giác
được tạo bởi ba cạnh có độ dài bằng ba số nhập vào hay không và in kết quả ra màn
hình.

Exercise 7.3: Viết chương trình tính tiền điện hàng tháng của hộ gia đình theo bảng
dưới đây:

Exercise 7.4: Viết chương trình tính số ngày trong một tháng sử dụng điều kiện
switch case.


Exercise 7.5: Viết chương trình máy tính cầm tay thực hiện các phép toán cộng,
trừ, nhân, chia hai số sử dụng câu lệnh điều kiện switch-case.
Input: 22.0 * 6.0
Output: 132.00
Hướng dẫn:
- Bước 1: Tạo project như bài Exercise 7.1 .
- Bước 2: Dùng lệnh printf để hiển thị các thông tin cho người dùng.
- Bước 3: Dùng lệnh scanf để nhập số và phép toán. Sử dụng hàm do - while
và kiểm tra xem phép toán nhập vào có thuộc tập hợp các phép toán { +, -, *, / }.
Nếu không đúng thì nhập lại biểu thức.
- Bước 4: Dùng lệnh switch-case để lựa chọn và thực hiện các phép tính toán.
- Bước 5: Hiển thị kết quả ra màn hình bằng lệnh printf.



Lab 7.1:
Yêu cầu: Viết chương trình nhận nút nhấn đầu vào từ Board STM32 nếu nút được
nhấn sẽ bật led và khi nút được nhả ra sẽ tắt led (hướng dẫn sử dụng SDK của
LUMI).


Lab 7.2:
Yêu cầu: Viết chương trình nhận nút nhấn đầu vào từ Board STM32 nếu nút được
nhấn sẽ đảo trạng thái của Led (hướng dẫn sử dụng SDK của LUMI).


Lab 7.3:
Yêu cầu: Viết chương trình điều khiển tự động độ sáng của led trên Board STM32
(Auto Brightness Led - ABL) theo điều kiện ánh sáng đầu vào từ cảm biến quang
trở:


Lab 7.4:
Yêu cầu: Viết chương trình điều khiển điều hòa tự động theo giá trị nhiệt độ, độ ẩm
từ cảm biến.

Lab 7.5:
Yêu cầu: Viết chương trình quản lý bản tin giao tiếp đơn giản giữa máy tính (HOST)
và Board STM32 (MCU) với giá trị được nhập từ bàn phím:

Bài 1: Hiển thị hình tam giác bằng dấu sao (*)
Bài 2: Tính giai thừa của một số
Bài 3: Đảo thứ tự các chữ số của một số
Bài 4: Hiển thị bảng nhân
Bài 5: Hiển thị tất cả số chẵn

Lab 8.1:
Yêu cầu: Viết chương trình đảo trạng thái của led trên Board STM32 với chu kì T =
500ms sử dụng vòng lặp theo hai cách: while hoặc for.

Lab 8.2:
Yêu cầu: Viết chương trình điều khiển băm xung PWM cho còi Buzzer với chu kỳ T
= 1s sử dụng vòng lặp theo hai cách: while hoặc for.


Lab 8.3:
Yêu cầu: Viết chương trình nhận nút nhấn đầu vào từ Board STM32 Nucleo sử
dụng vòng lặp tạo độ trễ làm giảm rung phím theo hai cách: while hoặc for ở Lab
8.1.


Lab 8.4:
Yêu cầu: Viết chương trình thực hiện việc nhận và hiển thị dữ liệu từ cảm biến nhiệt
độ-độ ẩm sử dụng vòng lặp while hoặc do-while.
- Nếu trạng thái đọc về từ cảm biến là ready thì hiển thị giá trị nhiệt độ và độ ẩm với
chu kỳ lấy mẫu T = 1s ra màn hình LCD.

Lab 8.5:
Yêu cầu: Viết chương trình xử lý nhận dữ liệu từ cảm biến ánh sáng sử dụng vòng
lặp while hoặc do-while:
- Nếu trạng thái đọc về từ cảm biến là ready thì hiển thị giá trị cường độ ánh sáng
với chu kỳ lấy mẫu T = 1s ra màn hình LCD.

Exercise 9.1:
Yêu cầu: Viết hàm tìm ước số chung lớn nhất uscln(int x, int y) và bội số chung nhỏ
nhất bscnn(int x, int y) của hai số.

Exercise 9.2:
Yêu cầu: Lập hàm tính giai thừa và dùng hàm này tính tổng:
S = 1! + 2! +...+N! (N nhập từ bàn phím và &lt;=10)

Exercise 9.3:
Yêu cầu: Viết chương trình hoán đổi hai số nguyên a, b và hiển thị trên giao diện
C/C++ application.

Exercise 9.4:
Yêu cầu: Viết chương trình đảo chuỗi và hiển thị trên giao diện C/C++ application
sử dụng hàm đệ quy.

Exercise 9.5:
Yêu cầu: Viết chương trình hiển thị tất cả các số chẵn hoặc lẻ trên giao diện C/C++
application sử dụng hàm đệ quy.