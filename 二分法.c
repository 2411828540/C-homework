#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��֪��������������
    int x = 0;//x��ҪѰ�ҵ���
    int left = 0;//���±�
    int right = sizeof(arr) / sizeof(arr[0]) - 1;//�������±�  
    scanf("%d", &x);
    while (left <= right)
    {
        int mid = left+(right-left)/2;//�ҵ����м����
        if (x < arr[mid])
        {
            right = mid-1;
        }
        else if (x > arr[mid])
        {
            left = mid+1;
        }
        else
        {
            printf("�ҵ��ˣ��±���%d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("û�ҵ�");
    }
 
    return 0;
}
