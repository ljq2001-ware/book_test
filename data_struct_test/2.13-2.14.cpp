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

//����һ����ͷ�ڵ������
void InitList(LinkList &L)
{
    L = new LNode;
    L->next=NULL;
}
//ͷ�巨����
//void InputList(LinkList &L,int n)
//{
//    LNode *p;//�����µĽ��
//    for(int i=1;i<=n;i++)
//    {
//        p= new LNode;
//        cin>>p->data;
//        //���½�����ͷ�ڵ�L��
//        p->next=L->next;
//        L->next=p;
//    }
//}
//β�巨����
void InputList(LinkList &L,int n)
{
    LNode *p;//�����µĽ��
    LNode *r;//βָ��
    r=L;
    for(int i=1;i<=n;i++)
    {
        p= new LNode;
        cin>>p->data;
        //���½������β
        r->next=p;
        r=p;
    }
    r->next=NULL;//β����Ϊ��
}
//չʾ������
void ShowList (LinkList L)
{
    LNode *p;//����ָ��
    p=L->next;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int getLength(LinkList L)
{
    LNode *p;//����ָ��
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
    cout<<"�������ڱ�βҪ���������"<<endl;
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
    else cout<<"�����в������ڸ�Ԫ�ء�";
}
int main() {
	LNode *head;//LinkList head;һ��
	int c;
	do
    {
        cout<<endl;
        cout<<" 1 ������ĳ�ʼ�� "<<endl;
        cout<<" 2 ����������� "<<endl;
        cout<<" 3 ���������ʾ "<<endl;
        cout<<" 4 ������ı� "<<endl;
        cout<<" 5 �ڱ�β����һ��Ԫ�� "<<endl;
        cout<<" 6 �������λ�ò��� "<<endl;
        cout<<" 7 ������Ĳ��� "<<endl;
        cout<<" 8 ������İ�λ��ɾ�� "<<endl;
        cout<<" 9 ��������ɾ��ĳ��Ԫ�� "<<endl;
        cout<<" 10 ���������ĺϲ� "<<endl;
        cout<<" 0 �˳����� "<<endl;
        cin>>c;
        if(c==1)
        {
            InitList(head);
        }
        else if(c==2)
        {
            int n;
            cout<<"\n\t��������������"<<endl;
            cin>>n;
            InputList(head,n);
        }
        else if(c==3)
        {
            ShowList(head);
        }
        else if(c==4)
        {
            cout<<"��Ϊ��"<<getLength(head);
        }
        else if(c==5)
        {
            insertR(head);
        }
        else if(c==6)
        {
            int x;
            cout<<"����Ҫ��λ��Ԫ�أ�";
            cin>>x;
            Locate(head,x);
        }

    }while(c!=0);
    return 0;
}
