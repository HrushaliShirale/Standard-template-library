#include<iostream>
#include"GenericSTL.h"    
int main()
{
  bool result=false;
  int total=0;
  SinglyLL<float>sll;
  cout<<"\n\nsingly linear linked list\n";
   sll.InsertFirst(14.1);
   sll.InsertFirst(17.1);
   sll.InsertFirst(18.1);
    sll.Display();
    result=sll.search(18.1);
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }
    total=sll.LastOccurance(17.1);
    if(total>=1)
    {
      cout<<"element found at  "<<total<<"  position\n";
    }
    else
    {
      cout<<"element not found\n";
    }



  cout<<"\n\nsingly circular linked list\n";
    SinglyCL<double>scl;
    scl.InsertLast(45);
    scl.InsertLast(74);
    scl.InsertLast(101);
    scl.Display();
    scl.DeleteATPos(2);
    scl.Display();
    result=scl.search(101);
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }
    total=scl.LastOccurance(101);
    if(total>=1)
    {
      cout<<"element found at  "<<total<<" position\n";
    }
    else
    {
      cout<<"element not found\n";
    }


  cout<<"\n\ndoubly linear linked list\n";
  DoublyLL <int>dll;
  int ivalue=0;
     dll.InsertLast(101);
     dll.InsertLast(51);
     dll.InsertFirst(21);
     dll.InsertATPos(71,3);
     dll.Display();
    result=dll.search(71);
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }
    total=dll.LastOccurance(71);
    if(total>=1)
    {
      cout<<"element found at  "<<total<<" position\n";
    }
    else
    {
      cout<<"element not found\n";
    }


  cout<<"\n\ndoubly circular linked list\n";
     DoublyCL <char>dcl;
     dcl.InsertLast('z');
     dcl.InsertLast('k');
     dcl.InsertLast('q');
     dcl.Display();
     dcl.DeleteLast();
     dcl.Display();
     result=dcl.search('z');
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }
    total=dcl.LastOccurance('z');
    if(total>=1)
    {
      cout<<"element found at  "<<total<<" position\n";
    }
    else
    {
      cout<<"element not found\n";
    }
  
     cout<<"\n\n stack\n";
     stack <char>st;
     char ch='\0';
     st.push('a');
     st.push('z');
     st.pop();
     cout<<"after poping element are:";
     st.display();
     cout<<"\n";
     result=st.search('a');
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }

    cout<<"\n\n queue\n";
     queue <int>qe;
     qe.Enqueue(41);
     qe.Enqueue(41);
     qe.Enqueue(59);
      qe.Dequeue();
           cout<<"after deletion element are:";
      qe.display();
     cout<<"\n";
result=qe.search(41);
    if(result==1)
    {
      cout<<"element found\n";
    }
    else
    {
      cout<<"element not found\n";
    }

cout<<"\n\n tree\n";
tree <int>tr;
int count=0;
  int no=0;
  bool bret=false;
  tr.Insert(100);
  tr.Insert(70);
  tr.Insert(50);
  tr.Insert(20);

 cout<<"enter element to search";
 cin>>no;
 bret=tr.Search(no);
if(bret==true)
{
  cout<<" found\n";
}
else
{
  cout<<"not found\n";

}

count=tr.Count();
cout<<"count of node is\t"<<count<<"\n";
count=tr.Countleaf();
cout<<"count of leaf is\t"<<count<<"\n";
cout<<"\ninorder\n";
tr.inorder();
cout<<"\npreorder\n";
tr.preorder();
cout<<"\npostorder\n";
tr.postorder();



  return 0;
}


