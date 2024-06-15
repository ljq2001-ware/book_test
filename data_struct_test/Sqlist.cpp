#include <bits/stdc++.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define Maxsize  100
typedef int Status;
typedef int Elemtype;
using namespace std;
typedef struct node
{
	Elemtype *elme;
	int length;
}Sqlist;
bool InitList(Sqlist &va)//o(1)
{
    va.elme =new int[Maxsize];
    if(va.elme==NULL) return false;
    va.length=0;
    return true;
}
//����n����
void Input (Sqlist &va,int n)//o(n)
{
    if(n > Maxsize)
    {
        cout<<"̫���� �Ų���"<<endl;
        return;
    }
    cout<<"input"<<n<<" datas:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>va.elme[i];
    }
    va.length=n;
}
//���va.length����
void Show(Sqlist va)//o(n)
{
    cout<<"���е�Ԫ��Ϊ��"<<endl;
    for(int i=0;i<va.length;i++)
    {
        cout<<va.elme[i]<<" ";
    }
}
//ȡ��3��λ�õ�Ԫ��
int GetElem(Sqlist &va,int n)//o(1)
{
    if(n<=0||n>va.length)
    {
        cout<<"�Ƿ�λ��"<<endl;
        return -1;
    }
    return va.elme[n-1];

}
//���
int getLength(Sqlist &va)//o(1)
{
    return va.length;
}
//��������
bool InsertList(Sqlist &va,int i,Elemtype x)
{
    //ʧ��
    if(va.length>=Maxsize)
    {
        cout<<"�ռ�����"<<endl;
        return false;
    }
    if(i<=0||i>va.length+1)
    {
        cout<<"�Ƿ�λ�ò���"<<endl;
        return false;
    }
    //�ɹ�
    //���ƶ�Ԫ��λ��
    for(int j=va.length-1;j>=i-1;j--)
    {
        va.elme[j+1]=va.elme[j];
    }
    //����
    va.elme[i-1]=x;
    va.length++;
    return true;
}
int main() {
	Sqlist va;
	int c;
	do
    {
        cout<<endl;
        cout<<" 1 ˳���ĳ�ʼ�� "<<endl;
        cout<<" 2 ˳�������� "<<endl;
        cout<<" 3 ˳������ʾ "<<endl;
        cout<<" 4 ˳����λ�ò��� "<<endl;
        cout<<" 5 ˳���Ĳ���(�ڵ�i��λ��) "<<endl;
        cout<<" 6 ˳���ɾ��ĳ��Ԫ�� "<<endl;
        cout<<" 7 ���������ĺϲ� "<<endl;
        cout<<" 8 ˳���İ�λ��ɾ�� "<<endl;
        cout<<" 0 �˳����� "<<endl;
        cin>>c;
        if(c==1)
        {
            InitList(va);
            cout<<va.elme<<endl;
        }
        else if(c==2)
        {
            Input(va,5);
        }
        else if(c==3)
        {
            Show(va);
        }
        else if(c==4)
        {
            cout<<"��3��λ�õ�Ԫ��Ϊ��"<<GetElem(va,3)<<endl;
        }
        else if(c==5)
        {
            int i,x;
            cout<<"���������Ԫ�ص�λ�ã�"<<endl;
            cin>>i;
            cout<<"������Ҫ�����Ԫ�أ�"<<endl;
            cin>>x;
            InsertList(va,i,x);
            cout<<"����Ԫ�����"<<endl;
        }


    }while(c!=0);
    return 0;
}
