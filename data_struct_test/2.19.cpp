#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}Lnode,*LinkList;
void InputList(LinkList &L,int n)
{
    Lnode *p;//开辟新的结点
    Lnode *r;//尾指针
    r=L;
    cout<<"请按递增顺序输入"<<n<<"个元素"<<endl;
    for(int i=1;i<=n;i++)
    {
        p= new Lnode;
        cin>>p->data;
        //将新结点插入表尾
        r->next=p;
        r=p;
    }
    r->next=NULL;//尾部置为空
}
void showList (LinkList L)
{
    Lnode *p;//遍历指针
    p=L;
    while(p->next!=NULL)
    {
        cout<<p->next->data<<" ";
        p=p->next;
    }
}
//删除大于mink小于maxk的元素
void Del(LinkList &L,int a,int b)//删除元素递增排列的链表L中值大于mink且小于maxk的所有元素
{
    Lnode *p;
    Lnode *q;
    p=L;
    while(p->next->data<=a)
    {
        p=p->next; //p是最后一个不大于mink的元素
    }
    if(p->next->data!=NULL)    //如果还有比mink更大的元素
    {
        q=p->next;
        while(q->data<b)
        {
            q=q->next; //q是第一个不小于maxk的元素
        }
        p->next=q;
    }
}
int main()
{
    Lnode *A=new Lnode;
    A->next=NULL;

    int n;
    cout<<"请输入链表的元素个数:"<<endl;
    cin>>n;

    InputList(A,n);
    int maxk,mink;
    cout<<"请输入要删除的元素范围：(小->大)"<<endl;
    cin>>mink>>maxk;
    Del(A,mink,maxk);
    cout<<"删除后的元素为:"<<endl;
    showList(A);
    return 0;
}
