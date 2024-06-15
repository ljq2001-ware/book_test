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
//初始化顺序表
bool InitList(Sqlist &va)//o(1)
{
    va.elme =new int[Maxsize];
    if(va.elme==NULL) return false;
    va.length=0;
    return true;
}
Status Insert_SqList(Sqlist &va,int x)//把x插入递增有序表va中
{
    //先找要插入的位置i
    int i=0;
    while(x>va.elme[i]&&i<va.length)
    {
        i++;
    }
    i++;
    //后移元素并插入
    for(int j=va.length-1;j>=i-1;j--)
    {
        va.elme[j+1]=va.elme[j];
    }
    va.elme[i-1]=x;
    va.length++;
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
int main() {
	Sqlist va;
	int c,n;
	cout<<"输入n的大小:"<<endl;
	cin>>n;
	cout<<"输入有序的"<<n<<"个数据:"<<endl;
	InitList(va);
	Input(va,n);
    int x;
    cout<<"请输入要插入的元素："<<endl;
    cin>>x;
    Insert_SqList(va,x);
    cout<<"插入元素完毕。"<<endl;
    Show(va);
    return 0;
}
