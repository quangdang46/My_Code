// Bài 155: Hãy tìm giá trị trong mảng các số thực xa giá trị x nhất
#include<stdio.h>
#include<math.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void TimXa(int arr[],int n){
    int k;
    printf("Nhap k: ");
    scanf("%d",&k);
    int max=INT_MIN;
    int index;
    for(int i=0; i < n; i++){
        if(abs(k-arr[i])>max){
            k=abs(k-arr[i]);
            index=i;
        }
    }
    printf("Gia tri xa K nhat la: %d",arr[index]);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    Nhap(arr,n);
    TimXa(arr,n);
}

/*

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100

void nhap (float a[], int &n)
{
    do
    {
        printf("\nNhap so phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%8.3f", a[i]);
    }
}

// Tạo mảng b chứa các khoảng cách từ x đến các giá trị trong mảng a
void TaoMang(float a[], int n, float b[], int x)
{
    for(int i = 0; i < n; i++)
    {
        b[i] = abs(x - a[i]);
    }
}

// Tìm max của mảng b
float TimMax(float b[], int n)
{
    int Max = b[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i] > Max)
        {
            Max = b[i];
        }
    }
    return Max;
}
void XuatKetQua(float a[], float b[], int n)
{
    printf("\nGia tri trong mang xa gia tri x nhat la: ");
    int Max = TimMax(b, n);
    for (int i = 0; i < n; i++)
    {
        if (b[i] == Max)    
        {
            printf("%8.3f", a[i]); // Đối chiếu qua mảng a, in phần tử ở vị trí thứ i thỏa ĐK
        }
    }
}

int main()
{
    int n;
    float a[MAX];
    float b[MAX];

    nhap(a, n);
    xuat(a, n);

    float x;
    printf("\nNhap vao gia tri x: ");
    scanf("%f", &x);

    TaoMang(a, n, b, x);
    printf("\nKhoang cach tu x = %.3f den cac phan tu trong mang la:\n", x);
    xuat(b, n);
    XuatKetQua(a, b, n);

    getch();
    return 0;
}
*/ 