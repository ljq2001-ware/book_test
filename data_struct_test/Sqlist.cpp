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
//输入n个数
void Input (Sqlist &va,int n)//o(n)
{
    if(n > Maxsize)
    {
        cout<<"太多了 放不下"<<endl;
        return;
    }
    cout<<"input"<<n<<" datas:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>va.elme[i];
    }
    va.length=n;
}
//输出va.length个数
void Show(Sqlist va)//o(n)
{
    cout<<"表中的元素为："<<endl;
    for(int i=0;i<va.length;i++)
    {
        cout<<va.elme[i]<<" ";
    }
}
//取第3个位置的元素
int GetElem(Sqlist &va,int n)//o(1)
{
    if(n<=0||n>va.length)
    {
        cout<<"非法位置"<<endl;
        return -1;
    }
    return va.elme[n-1];

}
//求表长
int getLength(Sqlist &va)//o(1)
{
    return va.length;
}
//插入数据
bool InsertList(Sqlist &va,int i,Elemtype x)
{
    //失败
    if(va.length>=Maxsize)
    {
        cout<<"空间已满"<<endl;
        return false;
    }
    if(i<=0||i>va.length+1)
    {
        cout<<"非法位置插入"<<endl;
        return false;
    }
    //成功
    //先移动元素位置
    for(int j=va.length-1;j>=i-1;j--)
    {
        va.elme[j+1]=va.elme[j];
    }
    //插入
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
        cout<<" 1 顺序表的初始化 "<<endl;
        cout<<" 2 顺序表的输入 "<<endl;
        cout<<" 3 顺序表的显示 "<<endl;
        cout<<" 4 顺序表的位置查找 "<<endl;
        cout<<" 5 顺序表的插入(在第i个位置) "<<endl;
        cout<<" 6 顺序表删除某个元素 "<<endl;
        cout<<" 7 两个有序表的合并 "<<endl;
        cout<<" 8 顺序表的按位置删除 "<<endl;
        cout<<" 0 退出操作 "<<endl;
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
            cout<<"第3个位置的元素为："<<GetElem(va,3)<<endl;
        }
        else if(c==5)
        {
            int i,x;
            cout<<"请输入插入元素的位置："<<endl;
            cin>>i;
            cout<<"请输入要插入的元素："<<endl;
            cin>>x;
            InsertList(va,i,x);
            cout<<"插入元素完毕"<<endl;
        }


    }while(c!=0);
    return 0;
}
