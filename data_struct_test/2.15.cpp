#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
}Lnode,*LinkList;
void InputList(LinkList &L,int n)
{
    Lnode *p;//�����µĽ��
    Lnode *r;//βָ��
    r=L;
    cout<<"������"<<n<<"��Ԫ��"<<endl;
    for(int i=1;i<=n;i++)
    {
        p= new Lnode;
        cin>>p->data;
        //���½������β
        r->next=p;
        r=p;
    }
    r->next=NULL;//β����Ϊ��
}
void showList (LinkList L)
{
    Lnode *p;//����ָ��
    p=L;
    while(p->next!=NULL)
    {
        cout<<p->next->data<<" ";
        p=p->next;
    }
}
//��B������A֮��
void ListConcat(LinkList ha,LinkList hb,LinkList &hc)//������hb����ha�����γ�����hc
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
    cout<<"���������������Ԫ�ظ������м��ÿո�ֿ���"<<endl;
    cin>>n>>m;
    InputList(ha,n);
    InputList(hb,m);
    ListConcat(ha,hb,hc);
    showList(hc);
    return 0;
}
