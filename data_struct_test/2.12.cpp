#include <bits/stdc++.h>
#define Maxsize  100
#define Status int
typedef char Elemtype;
using namespace std;
typedef struct node
{
	Elemtype *elme;
	int length;
}Sqlist;
//��ʼ��˳���
bool InitList(Sqlist &va)//o(1)
{
    va.elme =new char[Maxsize];
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
int fun(Sqlist va,Sqlist vb)
{
    int i=0,j=0;
    while(va.elme[i]==vb.elme[j])
    {
        i++;j++;
    }
    if(va.elme[i]<vb.elme[j])return 1;
    else return 0;
}
int main() {
	Sqlist va,vb;
	InitList(va);
	InitList(vb);
	int n1,n2;
	cout<<"��������˳���Ԫ�صĸ���:"<<endl;
	cin>>n1>>n2;
	cout<<"����"<<n1<<"������:"<<endl;
	Input(va,n1);
    cout<<"����"<<n2<<"������:"<<endl;
	Input(vb,n2);
//    Show(va);
//    Show(vb);
    if(fun(va,vb)==1)cout<<"va<vb"<<endl;
    else cout<<"va>vb"<<endl;
    return 0;
}
