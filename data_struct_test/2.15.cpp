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
    cout<<"请输入"<<n<<"个元素"<<endl;
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
//将B链接在A之后
void ListConcat(LinkList ha,LinkList hb,LinkList &hc)//把链表hb接在ha后面形成链表hc
{
    Lnode *p;
    hc=ha;p=ha;
    while(p->next) p=p->next;
    p->next=hb->next;
}

int main()
{
    Lnode *ha=new Lnode;
    ha->next=NULL;
    Lnode *hb=new Lnode;
    hb->next=NULL;
    Lnode *hc=new Lnode;
    hc->next=NULL;
    int n,m;
    cout<<"请输入两个链表的元素个数，中间用空格分开："<<endl;
    cin>>n>>m;
    InputList(ha,n);
    InputList(hb,m);
    ListConcat(ha,hb,hc);
    showList(hc);
    return 0;
}
