#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//void bubble_sort(int arr[],int sz)//ð��������
//{
//	int i=0;
//	int j=0;
//	for(i=0;i<sz;i++)//�Ƚ�ѭ������
//	{
//		for(j=0;j<sz-1;j++)//��Ԫ�ضԱ�
//		{
//			if(arr[j]<arr[j+1])//�ж���ֵ��С
//			{
//				int tmp=arr[j];//��ֵ����
//			arr[j]=arr[j+1];
//			arr[j+1]=tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int i=0;
//	int arr[]={88,87,75,76,90};//��������
//	int sz=sizeof(arr)/sizeof(arr[0]);//��������Ԫ��
//	bubble_sort(arr,sz);//����ð�ݺ���
//	for(i=0;i<sz;i++)//��ӡ����
//	{
//		printf("%d ",arr[i]);
//	}
//
//}

//�жϲ�����30��ͬѧ�ĳɼ�����
#define N 30 //����ȫ�ֱ�����������30��
void disp(int a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sort(int a[],int n)
{
	int i=0;
	int j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j] >a[j+1])
			{
				int tmp=a[j];
				a[j] = a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int i=0;
	int n=0;//ѧ������
	int a[N];
	do
	{
		printf("������ʵ��ѧ������>: ");
		scanf("%d",&n);
		if(n <=0 || n >= 30)
		{
			printf("�������\n");
		}
		else
			break;
	}while(1);//ѭ��
	printf("������%d��ѧ���ĳɼ��� \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n ����ǰ�ĳɼ�����>:");
	disp(a,n);//�������a��ǰn��Ԫ�ص�ֵ
	printf("\n �����ɼ�����>:");
	sort(a,n);//������a��ǰn��Ԫ�ص�ֵ���д�С���������
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}


