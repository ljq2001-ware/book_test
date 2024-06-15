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
//初始化顺序表
bool InitList(Sqlist &va)//o(1)
{
    va.elme =new char[Maxsize];
    if(va.elme==NULL) return false;
    va.length=0;
    return true;
}
//输入n个数
void Input (Sqlist &va,int n)//o(n)
{
    if(n > Maxsize)
    {
        cout<<"太多了 放不下"<<endl;
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
    cout<<"表中的元素目前为："<<endl;
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
	cout<<"输入两个顺序表元素的个数:"<<endl;
	cin>>n1>>n2;
	cout<<"输入"<<n1<<"个数据:"<<endl;
	Input(va,n1);
    cout<<"输入"<<n2<<"个数据:"<<endl;
	Input(vb,n2);
//    Show(va);
//    Show(vb);
    if(fun(va,vb)==1)cout<<"va<vb"<<endl;
    else cout<<"va>vb"<<endl;
    return 0;
}
