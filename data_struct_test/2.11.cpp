#include <bits/stdc++.h>
#define Maxsize  100
#define Status int
typedef int Elemtype;
using namespace std;
typedef struct node
{
	Elemtype *elme;
	int length;
}Sqlist;
//��ʼ��˳���
bool InitList(Sqlist &va)//o(1)
{
    va.elme =new int[Maxsize];
    if(va.elme==NULL) return false;
    va.length=0;
    return true;
}
Status Insert_SqList(Sqlist &va,int x)//��x������������va��
{
    //����Ҫ�����λ��i
    int i=0;
    while(x>va.elme[i]&&i<va.length)
    {
        i++;
    }
    i++;
    //����Ԫ�ز�����
    for(int j=va.length-1;j>=i-1;j--)
    {
        va.elme[j+1]=va.elme[j];
    }
    va.elme[i-1]=x;
    va.length++;
}
//����n����
void Input (Sqlist &va,int n)//o(n)
{
    if(n > Maxsize)
    {
        cout<<"̫���� �Ų���"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        cin>>va.elme[i];
    }
    va.length=n;
}
void Show(Sqlist va)//o(n)
{
    cout<<"���е�Ԫ��ĿǰΪ��"<<endl;
    for(int i=0;i<va.length;i++)
    {
        cout<<va.elme[i]<<" ";
    }
}
int main() {
	Sqlist va;
	int c,n;
	cout<<"����n�Ĵ�С:"<<endl;
	cin>>n;
	cout<<"���������"<<n<<"������:"<<endl;
	InitList(va);
	Input(va,n);
    int x;
    cout<<"������Ҫ�����Ԫ�أ�"<<endl;
    cin>>x;
    Insert_SqList(va,x);
    cout<<"����Ԫ����ϡ�"<<endl;
    Show(va);
    return 0;
}
