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
    cout<<"�밴����˳������"<<n<<"��Ԫ��"<<endl;
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
//ɾ������minkС��maxk��Ԫ��
void Del(LinkList &L,int a,int b)//ɾ��Ԫ�ص������е�����L��ֵ����mink��С��maxk������Ԫ��
{
    Lnode *p;
    Lnode *q;
    p=L;
    while(p->next->data<=a)
    {
        p=p->next; //p�����һ��������mink��Ԫ��
    }
    if(p->next->data!=NULL)    //������б�mink�����Ԫ��
    {
        q=p->next;
        while(q->data<b)
        {
            q=q->next; //q�ǵ�һ����С��maxk��Ԫ��
        }
        p->next=q;
    }
}
int main()
{
    Lnode *A=new Lnode;
    A->next=NULL;

    int n;
    cout<<"�����������Ԫ�ظ���:"<<endl;
    cin>>n;

    InputList(A,n);
    int maxk,mink;
    cout<<"������Ҫɾ����Ԫ�ط�Χ��(С->��)"<<endl;
    cin>>mink>>maxk;
    Del(A,mink,maxk);
    cout<<"ɾ�����Ԫ��Ϊ:"<<endl;
    showList(A);
    return 0;
}
