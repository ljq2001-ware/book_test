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
    Elemtype data;
    struct node *next;
}LNode,*LinkList;

//创建一个带头节点的链表
void InitList(LinkList &L)
{
    L = new LNode;
    L->next=NULL;
}
//头插法建表
//void InputList(LinkList &L,int n)
//{
//    LNode *p;//开辟新的结点
//    for(int i=1;i<=n;i++)
//    {
//        p= new LNode;
//        cin>>p->data;
//        //将新结点插入头节点L后
//        p->next=L->next;
//        L->next=p;
//    }
//}
//尾插法建表
void InputList(LinkList &L,int n)
{
    LNode *p;//开辟新的结点
    LNode *r;//尾指针
    r=L;
    for(int i=1;i<=n;i++)
    {
        p= new LNode;
        cin>>p->data;
        //将新结点插入表尾
        r->next=p;
        r=p;
    }
    r->next=NULL;//尾部置为空
}
//展示单链表
void ShowList (LinkList L)
{
    LNode *p;//遍历指针
    p=L->next;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int getLength(LinkList L)
{
    LNode *p;//遍历指针
    p=L->next;
    int len=0;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}
void insertR(LinkList &L)
{
    cout<<"请输入在表尾要插入的数据"<<endl;
    LNode *p;
    p=new LNode;
    p->next=NULL;
    cin>>p->data;
    LNode *r=L;
    while(r->next!=NULL)
    {
        r=r->next;
    }
    r->next=p;
}
void Locate(LinkList L,int x)
{
    LNode *p;
    p=L->next;
    int i=0;
    while(p!=NULL&&p->data!=x)
    {
        i++;
        p=p->next;
    }
    if(p!=NULL)cout<< i+1;
    else cout<<"链表中并不存在该元素。";
}
int main() {
	LNode *head;//LinkList head;一样
	int c;
	do
    {
        cout<<endl;
        cout<<" 1 单链表的初始化 "<<endl;
        cout<<" 2 单链表的输入 "<<endl;
        cout<<" 3 单链表的显示 "<<endl;
        cout<<" 4 单链表的表长 "<<endl;
        cout<<" 5 在表尾插入一个元素 "<<endl;
        cout<<" 6 单链表的位置查找 "<<endl;
        cout<<" 7 单链表的插入 "<<endl;
        cout<<" 8 单链表的按位置删除 "<<endl;
        cout<<" 9 单链表中删除某个元素 "<<endl;
        cout<<" 10 两个有序表的合并 "<<endl;
        cout<<" 0 退出操作 "<<endl;
        cin>>c;
        if(c==1)
        {
            InitList(head);
        }
        else if(c==2)
        {
            int n;
            cout<<"\n\t请输入数据量："<<endl;
            cin>>n;
            InputList(head,n);
        }
        else if(c==3)
        {
            ShowList(head);
        }
        else if(c==4)
        {
            cout<<"表长为："<<getLength(head);
        }
        else if(c==5)
        {
            insertR(head);
        }
        else if(c==6)
        {
            int x;
            cout<<"输入要定位的元素：";
            cin>>x;
            Locate(head,x);
        }

    }while(c!=0);
    return 0;
}
