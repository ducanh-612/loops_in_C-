Vòng lặp là các công việc được lặp đi lặp lại, trong lập trình cần có những vòng lặp để thực hiện yêu cầu

    - Nếu viết như ví dụ 1 thì sẽ rất mất nhiều thời gian do đó chúng ta cần sử dụng vòng lặp,

    _ Trong C++ có 3 cách triển khai vòng lặp
        1, vòng lặp for:
            *for(gia_tri_khoi_tao ; dieu_kien_tiep_tuc ; buoc_nhay)

            *gia_tri_khoi_tao: giá trị bắt đầu,
            dieu_kien_tiep_tuc: điều kiện để thực hiện;
            buoc_nhay: sau mỗi lần sẽ nhảy số bước nhảy này,

            * Ở ví dụ 2: ta có thể thấy code bắt đầu chạy vơis gtri khoi tao là biến int i = 1; tiếp tục đối chiếu biến i với dieu kien là i<=7 n*ế*u thỏa mãn nó sẽ tiếp tục nhảy i++ cho đến khi chạm đến 7. Kết thúc vòng lặp.
        2, Vòng lặp while: 
            *int gia_tri_khoi_tao;
            while(dieu_kien_tiep_tuc)
            {
                buoc_nhay
            }

            *Khác với for, while chỉ có điều kiện tiếp tục.

            * Ở ví dụ 3: code được thực hiện như sau:
                + đầu tiên, ta in ra biến i = 1;
                + sau đó, đối chiếu với điều kiện của hàm while i <= 7, nếu thỏa mãn sẽ thực hiện các code trong hàm while đó;
                + sau khi thực hiện xong in ra biến i, tiếp tục chạy code i++ tăng thêm 1 đơn vị cho i, rồi quay lại đối chiếu điều kiện cứ thế cho đến khi không thỏa mãn điều kiện. Kết thúc vòng lặp.
        3, Vòng lặp do while:
            *int gia_tri_khoi_tao;
            do {
                code
                buoc_nhay
            } while(dieu_kien_tiep_tuc)

            *Do while: hàm này sẽ chạy trước một lần code trong do{} sau đó mới đối chiếu với điều kiện trong while(),


