#include<iostream>
#include<stdlib.h>
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------//
                                    //////////////// singly linear linked list///////////////////


template <typename T>
struct node1
{
    T data;
    struct node1 * next;
};
 template<class T>
class SinglyLL
{
   private:
    node1<T> * first;
     int size;

   public:
      SinglyLL();
     void InsertFirst(T);
     void InsertLast(T);
     void InsertATPos(T,int);
     void DeleteFirst();
     void DeleteLast();
     void DeleteATPos(int);
     void Display();
     int  Count();
     bool search(T);
     int FirstOccurance(T);
     int LastOccurance(T);
 
};
//-------------------------------------------------------------------------------------------------------------------------------------//

                      //////////////////////   singly circular linked list/////////////// 



template<typename T>

 struct  node2
{
 T data;
 struct  node2 *next;
};

template<class T>
class SinglyCL
{
 private :
    node2<T> * first;
    node2<T> * last;
    int size;
  public :
 SinglyCL();
 void Display();
 int Count();
 void InsertFirst(T);
 void InsertLast(T);
void InsertATPos(T,int pos);
void DeleteFirst();
void DeleteLast();
void DeleteATPos(int pos);
bool search(T);
int FirstOccurance(T);
int LastOccurance(T);
};



//---------------------------------------------------------------------------------------------------------------------------------

                      //////////////doubly linked list/////////////////////

template<typename T>
struct node3
{
    T data;
    struct node3 *next;
    struct node3 *prev;
};

template<class T>
class DoublyLL
{
    private:
         node3<T> * first;
         int  size;

    public:
        DoublyLL();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertATPos(T,int pos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteATPos(int pos);
        void Display();
        int Count();
        bool search(T);
        int FirstOccurance(T);
        int LastOccurance(T);
};


//------------------------------------------------------------------------------------------------------------------------------------

                  ///////////////  doubly circular linked list  //////////////////////


template <typename T>
 struct  node4
{
 T data;
 struct  node4 *next;
 struct  node4 *prev;
};

template <class T>
class DoublyCL
{
 private :
     node4 <T> * first;
     node4 <T> * last;
    int size;
  public :
  DoublyCL();
void Display();
int Count();
void InsertFirst(T);
void InsertLast(T);
void InsertATPos(T,int);
void DeleteFirst();
void DeleteLast();
void DeleteATPos(int);
bool search(T);
int FirstOccurance(T);
int LastOccurance(T);
};


//----------------------------------------------------------------------------------------------------------------------------------
       
              //////////////////  stack   /////////////////
 template<typename T>
struct  node5
{
 T data;
 struct  node5 *next;
};

template<class T>
class stack
{
  private:
  node5<T> * first;
  int size;
  public:
  stack();
  void push(T no); //insertfirst
  void pop(); // deletefirst
  void display();
  int Count();
  bool search(T);
  
};


//---------------------------------------------------------------------------------------------------------------------------------

                   /////////////////  queue  ///////////////////////

template<typename T>
struct  node6
{
 int data;
 struct  node6 *next;
};

template<class T>
class queue
{
  private:
  node6<T> * first;
  int size;
  public:
   queue();
 void Enqueue(T no); //insertfirst
  void Dequeue(); // deletefirst
  void display();
  int Count();
  bool search(T);
  
};


//--------------------------------------------------------------------------------------------------------------------------------

                          /////////////////////  tree     //////////////////

template <typename T>
 struct node
{
  T data;
  struct node *left;
  struct node *right;
};
template <class T>
class tree
{
  private :
           node<T> *first;
            int size;
  public:
         tree();
         void Insert(T no);
         bool Search(T no);
         int Count();
         void preorder();
         void inorder();
         void postorder();
         int Countleaf();
         
  private:
          int tCount(node<T> *);
         void tpreorder(node<T> *);
         void tinorder(node<T> *);
         void tpostorder(node<T> *);
         int tCountleaf(node<T> *);
        
};



//--------------------------------------------------------------------------------------------------------------------------------
                                         //////////  creating array and sorting  ////////////////////


template <typename T>
 class Arrayx
{

  public:
  T *arr;
  int size;
     Arrayx(int);
  void display();
   void accept();
};

template <typename T>
class Sorting
{
   private:
   T *arr;
   int size;
   public:
   Sorting(T *,int);
   void bubblesort();
   void SelectionSort();
   void InsertionSort();
   
};

//----------------------------------------------------------------------------------------------------------------------------------
                      /////////////////    searching           ////////////////////

template <typename T>
class Searching
{
   private:
   T *arr;
   int size;
   public:
   Searching(T *,int);
   int LinearSearch(T no);
   int BinarySearch(T no);   
};
//----------------------------------------------------------------------------------------------------------------------------------

                                                         //  FUNCTIONS

//----------------------------------------------------------------------------------------------------------------------------------


 template<class T>
  SinglyLL<T> :: SinglyLL()
    {
        first=NULL;
        size=0;
    }  

 template<class T>
    void SinglyLL<T> :: InsertFirst(T No)
    {
    node1<T> * newn=new  node1<T>;
      
      newn->data=No;
      newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
          newn->next=first;
          first=newn;
      }
      size++;
    }

 template<class T>
    void SinglyLL<T> :: InsertLast(T No)
    {
       node1<T>  * newn=new node1<T> ;

        newn->data=No;
        newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else
      {
         node1<T> * temp = first;
         
         while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newn;
      }
      size++;

    }

     template<class T>
    void SinglyLL<T> :: InsertATPos(T No,int pos)
    {
       if( (pos < 1) || (pos > (size +1)) )
       {
           return;
       }  

       if(pos==1)
       {
           InsertFirst(No);
       }
       else if(pos==(size+1))
       {
           InsertLast(No);
       }
       else
       {
           node1<T>  * newn=new node1<T> ;
           newn->data=No;
           newn->next=NULL;

           node1<T>* temp = first;
           int i=1;
           while(i!=(pos-1))
           { 
              i++;
              temp=temp->next;
           }
           newn->next=temp->next;
           temp->next=newn;
           size++;

       }

    }

     template<class T>
    void SinglyLL<T> :: DeleteFirst()
    {
      node1<T>  * temp=first;

        if(first!=NULL)
        {
            if((first->next)==NULL)
            {
                  delete (first);
                  first=NULL;
            }
            else
            {
                 first=first->next;
                 delete temp;
                 size--;

            }
            
        }
        else
        {
            return;
        }
    }

     template<class T>
    void SinglyLL<T> :: DeleteLast()
    {
      node1<T>  * temp=first;

      if(first!=NULL)
      {
         if(first->next==NULL)
         {
             delete first;
             first=NULL;
             size--;
         }
         else
         {
             int i=1;
             while(i!=(size-1))
             {
               i++;
               temp=temp->next;
             }
             delete(temp->next);
             temp->next=NULL;
             size--;
         }
      }
      else
      {
          return;
      }
    }

     template<class T>
    void SinglyLL<T> :: DeleteATPos(int pos)
    {
        if( (pos < 1) || (pos > (size+1)) )
        {
            return;
        }

        if(pos==1)
        {
            DeleteFirst();
        }
        else if (pos==size)
        {
            DeleteLast();
        }
        else
        {
            node1<T>  * temp=first;
            node1<T>  * target=NULL;
            int i=1;
            while(i!=(pos-1))
            {
               i++;
               temp=temp->next;
            }
             target=temp->next;
             temp->next=target->next;
             delete(target);
             size--;
        }
        

    }

     template<class T>
    void SinglyLL<T> :: Display()
    {
        if(first==NULL)
        {
            cout<<"Linked list is empty\n";
        }
       else
       {
           node1<T>  * temp =first;

              while (temp!=NULL)
             {
                 cout<<"|"<<temp->data<<"|->";
                 temp=temp->next;
              }
                 cout<<"NULL\n";
       }
       
    }

     template<class T>
    int SinglyLL<T> :: Count()
    {
       return size;
    }
  
  template<class T>
    bool SinglyLL<T> :: search(T No)
    {
        if(first==NULL)
        {
            return -1;
        }
       else
       {
           node1<T>  * temp =first;

              while (temp!=NULL)
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }
       }
       return 0;
    }

 template<class T>
    int SinglyLL<T> :: FirstOccurance(T No)
    {
      int i=0;
       if(first==NULL)
        {
            return -1;
        }
       else
       {
           node1<T>  * temp =first;
           

              while (temp!=NULL)
             {
                 i++;
                 if(temp->data==No)
                 {
                   return i;
                 }
                 temp=temp->next;
              }
       }
       return i;
    }

 template<class T>
    int SinglyLL<T> :: LastOccurance(T No)
    {
      int i=0,iret=0;
       if(first==NULL)
        {
            return -1;
        }
       else
       {
           node1<T>  * temp =first;
           

              while (temp!=NULL)
             {
                 i++;
                 if(temp->data==No)
                 {
                   iret=i;
                 }
                 temp=temp->next;
              }
       }
       return iret;
    }
//-----------------------------------------------------------------------------------------------------------------------------






template<class T>
 SinglyCL<T> :: SinglyCL()
  {
    first=NULL;
    last=NULL;
    size=0;
  }

template<class T>
 void SinglyCL<T> ::Display()
{
  node2<T> * temp=first;
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else
  do
  {
    cout<<"|"<<temp->data<<"|->";
    temp=temp->next;
  }while (temp != last->next);
  cout<<"null";
  cout<<"\n";
}

template<class T>
int SinglyCL<T> ::Count()
{
  return size;
}

template<class T>
void SinglyCL<T> ::InsertFirst(T no)
{
  node2<T> * newn=new node2<T>;
  newn->data=no;
  newn->next=NULL;
 if((first==NULL) && (last == NULL))
 {
   first=newn;
   last=newn;
 }
 else
 {
   newn->next=first;
   first=newn;
 }
   last->next=first;
   size++;
}

template<class T>
void SinglyCL<T> ::InsertLast(T no)
{
 node2<T> * newn=new node2<T>;
  newn->data=no;
  newn->next=NULL;
 if((first==NULL) && (last == NULL))
 {
   first=newn;
   last=newn;
 }
 else
 {
   last->next=newn;
   last=newn;
 }
   last->next=first;
   size++;

}

template<class T>
void SinglyCL<T> ::InsertATPos(T no,int pos)
{
  int i=0;
  node2<T> * temp=first;
  if((pos<1) && (pos>size+1))
  {
    cout<<"enter correct position";
    return;
  }
  if(pos==1)
  {
    InsertFirst(no);
  }
  else if(pos==size+1)
  {
    InsertLast(no);
  }
  else
  {
   node2<T> * newn=new node2<T>;
    newn->data=no;
    newn->next=NULL;
    for(i=1;i<pos-1;i++)
     {
       temp=temp->next;   
     }
     newn->next=temp->next;
     temp->next=newn;
     size++;
  }

}

template<class T>
void SinglyCL<T> ::DeleteFirst()
{
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else if(first==last)
  {
    free(first);
    first=NULL;
    last=NULL;
  }
  else
  {
    first=first->next;
    delete(last->next);
    last->next=first;
  }
   size--;
}

template<class T>
void SinglyCL<T> ::DeleteLast()
{
  node2<T> * temp=first;
  if((first==NULL) && (last ==NULL))
  {
    return;
  }
  else if(first==last)
  {
    free(first);
    first=NULL;
    last=NULL;
  }
  else
  {
    while(temp->next!=last)
    {
      temp=temp->next;
    }
    delete(last);
    last=temp;
    last->next=first;
  }
   size--;
}

template<class T>
void SinglyCL<T> ::DeleteATPos(int pos)
{
  int i=0;
  node2<T> * temp=first;
    node2<T> * targeted=NULL;
  if((pos<1) && (pos>size))
  {
    cout<<"enter correct position";
    return;
  }
  if(pos==1)
  {
    DeleteFirst();
  }
  else if(pos==size)
  {
    DeleteLast();
  }
  else
  {
    for(i=1;i<pos-1;i++)
     {
       temp=temp->next;   
     }
     targeted=temp->next;
     temp->next=temp->next->next;
     delete(targeted);
     size--;
  }

}
 

 template<class T>
    bool SinglyCL<T> :: search(T No)
    {
        if((first==NULL) &&(last==NULL))
        {
            return -1;
        }
       else
       {
           node2<T>  * temp =first;

              do
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return 0;
    }

 template<class T>
    int SinglyCL<T> :: FirstOccurance(T No)
    {
      int i=0;
       if((first==NULL) && (last==NULL))
        {
            return -1;
        }
       else
       {
           node2<T>  * temp =first;
           

              do
             {
                 i++;
                 if(temp->data==No)
                 {
                   return i;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return i;
    }

 template<class T>
    int SinglyCL<T> :: LastOccurance(T No)
    {
      int i=0,iret=0;
       if((first==NULL) && (last==NULL))
        {
            return -1;
        }
       else
       {
           node2<T>  * temp =first;
           

              do
             {
                 i++;
                 if(temp->data==No)
                 {
                   iret=i;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return iret;
    }

//-------------------------------------------------------------------------------------------------------------------------



 template<class T>
       DoublyLL<T>:: DoublyLL()
        {
            first=NULL;
            size=0;
        }

        template<class T>
        void DoublyLL<T>::InsertFirst(T No)
        {
           node3<T> * newn = new  node3<T>;
          newn->data=No;
          newn->next=NULL;
          newn->prev=NULL;
          
          if(first==NULL)
          {
              first=newn;
          }
          else
          {
              newn->next=first;
              first->prev=newn;
              first=newn;
          }
          size++;

        }

        template<class T>
        void DoublyLL<T>::InsertLast(T No)
        {
             node3<T> * newn = new  node3<T>;
            newn->data=No;
            newn->next=NULL;
            newn->prev=NULL;

            if(first==NULL)
            {
                first=newn;
            }
            else
            {
                 node3<T> * temp=first;
                int i=1;
                while (i!=size)
                {
                    i++;
                    temp=temp->next;
                }
                temp->next=newn;
                newn->prev=temp;
                
            }
            size++;

        }   
        

        template<class T>
        void DoublyLL<T>::InsertATPos(T No,int pos)
        {
          if( (pos < 1 ) || (pos > (size+1)) )
          {
              return;
          }

          if(pos==1)
          {
              InsertFirst(No);
          }
          else if(pos==(size+1))
          {
              InsertLast(No);
          }
          else
          {
               node3<T> * temp=first;
              int i=1;
               node3<T> * newn=new  node3<T>;
              newn->data=No;
              newn->next=NULL;
              newn->prev=NULL;

             while(i!=(pos-1))
             {
                i++;
                temp=temp->next;
             }
             newn->next=temp->next;
             newn->next->prev=newn;
             newn->prev=temp;
             temp->next=newn;
            
              size++;
          }

        }
        

        template<class T>
        void DoublyLL<T>::DeleteFirst()
        {
            if(first!=NULL)
            {
                if(first->next==NULL)
                {
                    delete(first);
                    first=NULL;
                }
                else
                {
                    first=first->next;
                    delete(first->prev);
                    first->prev=NULL;
                     size--;
                }
               
            }

        }

        
        template<class T>
        void DoublyLL<T>::DeleteLast()
        {
            if(first!=NULL)
            {
                if(first->next==NULL)
                {
                    delete(first->next);
                    first=NULL;
                }
                else
                {
                     node3<T> * temp=first;
                    int i=1;

                    while(i!=size)
                    {
                        i++;
                        temp=temp->next;
                    }
                     temp->prev->next=NULL;
                     delete(temp);
                     size--;
                    
                }
               

            }

        }

       
       template<class T>
        void DoublyLL<T>::DeleteATPos(int pos)
        {
            if((pos < 1) || (pos > size))
            {
                return;
            }

            if(pos==1)
            {
                DeleteFirst();
            }
            else if(pos==size)
            {
                DeleteLast();
            }
            else
            {
                 node3<T> * temp=first;
                int i=1;
                while(i!=(pos))
                {
                    i++;
                    temp=temp->next;
                }
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev; 
                delete(temp);
                size--;
            }

        }

       template<class T>
        void DoublyLL<T>::Display()
        {
           node3<T> * temp=first;

          while (temp!=NULL)
          {
              cout<<"|"<<temp->data<<"|->";
              temp=temp->next;
          }
          cout<<"NULL\n";
          
        }

      
      template<class T>
         int DoublyLL<T>::Count()
        {
            return size;
        }



 template<class T>
    bool DoublyLL<T> :: search(T No)
    {
        if(first==NULL)
        {
            return -1;
        }
       else
       {
           node3<T>  * temp =first;

              while (temp!=NULL)
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }
       }
       return 0;
    }

 template<class T>
    int DoublyLL<T> :: FirstOccurance(T No)
    {
      int i=0;
       if(first==NULL)
        {
            return -1;
        }
       else
       {
           node3<T>  * temp =first;
           

              while (temp!=NULL)
             {
                 i++;
                 if(temp->data==No)
                 {
                   return i;
                 }
                 temp=temp->next;
              }
       }
       return i;
    }

 template<class T>
    int DoublyLL<T> :: LastOccurance(T No)
    {
      int i=0,iret=0;
       if(first==NULL)
        {
            return -1;
        }
       else
       {
           node3<T>  * temp =first;
           

              while (temp!=NULL)
             {
                 i++;
                 if(temp->data==No)
                 {
                   iret=i;
                 }
                 temp=temp->next;
              }
       }
       return iret;
    }







//---------------------------------------------------------------------------------------------------------------------------------



template <class T>
DoublyCL<T>::DoublyCL()
  {
    first=NULL;
    last=NULL;
    size=0;
  } 

  template <class T>
void DoublyCL<T>::Display()
{
  node4<T> *temp=first;
   if((first== NULL)  &&   (last==NULL))
   {
     return;
   }
   do
   {
     cout<<"|"<<temp->data<<"|->";
    temp=temp->next;
   } while (temp!=last->next);
   cout<<"null";
   cout<<"\n";
}

template <class T>
int DoublyCL<T> :: Count()
{
  return size;
}

template <class T>
void DoublyCL<T>::InsertFirst(T no)

{
  node4<T> *newn=new node4<T>;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
 if((first== NULL)  &&   (last==NULL))
   {
     first=newn;
     last=newn;
   }
   else
   {
     newn->next=first;
     first->prev=newn;
     first=newn;
   }
   last->next=first;
   first->prev=last;
   size++;
}

template <class T>
void DoublyCL<T>::InsertLast(T no)
{
 node4<T> *newn=new node4<T>;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
 if((first== NULL)  &&   (last==NULL))
   {
     first=newn;
     last=newn;
   }
   else
   {
     last->next=newn;
     newn->prev=last;
     last=newn;   
   }
   last->next=first;
   first->prev=last;
   size++;
}

template <class T>
void DoublyCL<T>::InsertATPos(T no,int pos)
{
 node4<T> *newn=new node4<T>;
 node4<T> *temp=first;
 newn->data=no;
 newn->next=NULL;
 newn->prev=NULL;
 if((pos<1) && (pos>size+1))
 {
   cout<<"enter correct position";
   return;
 }
 if(pos==1)
   {
     InsertFirst(no);
   }
   else if(pos==size+1)
   {
     InsertLast(no);
   }
   else
   {
     for(int i=1;i<pos-1;i++)
     {
       temp=temp->next;
     }
     newn->next=temp->next;
     temp->next->prev=newn;
     temp->next=newn;
     newn->prev=temp;
     size++;
   }
}

template <class T>
void DoublyCL <T>:: DeleteFirst()
{
  if(first==NULL && last==NULL)
  {
    return;
  }
  else if(first==last)
  {
   delete first;
    first=NULL;
    last=NULL;
  }
  else
  {
    first=first->next;
    delete first->prev;
    first->prev=last;
    last->next=first;
  }
    size--;
}

template <class T>
void DoublyCL <T>:: DeleteLast()
{
  if(first==NULL && last==NULL)
  {
    return;
  }
  else if(first==last)
  {
    delete first;
    first=NULL;
    last=NULL;
  }
  else
  {
    last=last->prev;
    delete last->next;
    first->prev=last;
    last->next=first;
  }
    size--;
}

template <class T>
void DoublyCL<T>::DeleteATPos(int pos)
{
  node4<T> *temp=first;
 if((pos<1) && (pos>size))
 {
   cout<<"enter correct position";
   return;
 }
 if(pos==1)
   {
     DeleteFirst();
   }
   else if(pos==size)
   {
     DeleteLast();
   }
   else
   {
     for(int i=1;i<pos-1;i++)
     {
       temp=temp->next;
     }
       temp->next=temp->next->next;
       delete(temp->next->prev);
       temp->next->prev=temp;

       size--;     
   }
}


template<class T>
    bool DoublyCL<T> :: search(T No)
    {
        if((first==NULL) &&(last==NULL))
        {
            return -1;
        }
       else
       {
           node4<T>  * temp =first;

              do
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return 0;
    }

 template<class T>
    int DoublyCL<T> :: FirstOccurance(T No)
    {
      int i=0;
       if((first==NULL) && (last==NULL))
        {
            return -1;
        }
       else
       {
           node4<T>  * temp =first;
           

              do
             {
                 i++;
                 if(temp->data==No)
                 {
                   return i;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return i;
    }

 template<class T>
    int DoublyCL<T> :: LastOccurance(T No)
    {
      int i=0,iret=0;
       if((first==NULL) && (last==NULL))
        {
            return -1;
        }
       else
       {
           node4<T>  * temp =first;
           

              do
             {
                 i++;
                 if(temp->data==No)
                 {
                   iret=i;
                 }
                 temp=temp->next;
              }while (temp!=last->next);
       }
       return iret;
    }

//-------------------------------------------------------------------------------------------------------------------------------

template<class T>
  stack<T> :: stack()
  {
    first=NULL;
    size=0;
  }

  
  template<class T>
  void stack<T> :: push(T no) //insertfirst
  {
    node5<T> * newn=new node5<T>;
    newn->data=no;
    newn->next=NULL;
    if(first==NULL)
    {
      first=newn;
    }
    else
    {
      newn->next=first;
      first=newn;
    }
    size++;
  }

  template<class T>
  void stack<T> ::pop() // deletefirst
  {
    node5<T> * temp=NULL;
    int data=0;
    if(first==NULL)  //(size == 0)
    {
      cout<<"stack is empty";
       return ;
    }
    if(first->next==NULL)  //(size==1)
    {
      delete first;
      first=NULL;
    }
    else
    {
      temp=first;
      first=first->next;
      delete temp;
    }
    size--;
  }
  
  template<class T>
  void stack<T> :: display()
  {
    node5<T> * temp=first;
    while(temp!=NULL)
    {
      cout<<"|"<<temp->data<<"|\t";
      temp=temp->next;
    }
  }
  template<class T>
  int stack<T> ::Count()
  {
    return size;
  }
template<class T>
    bool stack<T> :: search(T No)
    {
        if(first==NULL)
        {
            return -1;
        }
       else
       {
           node5<T>  * temp =first;

              while (temp!=NULL)
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }
       }
       return 0;
    }

//--------------------------------------------------------------------------------------------------------------------------


template<class T>
  queue<T> :: queue()
  {
    first=NULL;
    size=0;
  }
  
  template<class T>
 void queue<T> :: Enqueue(T no) //insertLast
  {
    node6<T>* newn;
     newn=new node6<T>;
    node6<T> * temp=first;
    newn->data=no;
    newn->next=NULL;
    if(first==NULL)   //(size==0)
    {
      first=newn;
    }
    else
    {
      while(temp->next!=NULL)
      {
        temp=temp->next;
      }
      temp->next=newn;

    }
    size++;

  }
    template<class T>
  void queue<T>::Dequeue() // deletefirst
  {
    node6<T> * temp=NULL;
        if(first==NULL)
    {
      cout<<"queue is empty";
       return ;
    }
    else if(first->next==NULL)
    {
      delete first;
      first=NULL;
    }
    else
    {
      temp=first;
      first=first->next;
      delete temp;
    }
    size--;


  }

  template<class T>
  void queue<T>:: display()
  {
    node6<T>* temp=first;
    while(temp!=NULL)
    {
      cout<<"|"<<temp->data<<"|\t";
      temp=temp->next;
    }
  }
   template<class T>
  int queue<T>:: Count()
  {
    return size;
  }

template<class T>
    bool queue<T> :: search(T No)
    {
        if(first==NULL)
        {
            return -1;
        }
       else
       {
           node6<T>  * temp =first;

              while (temp!=NULL)
             {
                 if(temp->data==No)
                 {
                   return 1;
                 }
                 temp=temp->next;
              }
       }
       return 0;
    }

//-----------------------------------------------------------------------------------------------------------------------------
template <class T>
tree<T>::tree()
{
  first=NULL;
}
template <class T>
void tree<T> :: Insert(T no)
{
  node<T> *newn;
   newn=new node<T>;
   newn->data=no;
   newn->left=NULL;
   newn->right=NULL;
   if(first==NULL)
   {
      first=newn;
   }
   else
   {

     node<T> *temp=first;
      while(1)  //unconditional loop
      {

       if(temp->data==no)
       {
         cout<<"duplicate data";
         free(newn);
         break;
         
       }
       else if(no<temp->data)
       {
         if(temp->left==NULL)
         {
           temp->left=newn;
          break;
         }
        temp=temp->left;
       } 
      else if(no>temp->data)
       {
         if(temp->right==NULL)
         {
           temp->right=newn;
          break;
         }
        temp=temp->right;

       } 
      
      }
   }

}

template <class T>
bool tree<T> :: Search(T no)
{
 
  if(first==NULL)
  {
    return false;
  }
  else
  {
     node<T> *temp=first;
    while(temp!=NULL)
    {
      if((temp->data)==no)
      {
        break;
      }
     else if(no<temp->data)
      {
        temp=temp->left;
      }
     else if(no>temp->data)
      {
       temp=temp->right;      
      }
    }
   if(temp==NULL)
   {
     return false;
   }
   else
    {
      return true;
    }
  }
}
  

template <class T>
int tree<T> :: tCount(node<T> *temp)
{ 
 static int count=0;
 if(temp!=NULL)
  {
    count++;
  
    tCount(temp->left);
    
    tCount(temp->right);
  }
 return count;
  
}
template <class T>
int tree<T> :: Count()
{
   int iret=tCount(first);
}
template <class T>
void tree<T> :: preorder()
{
   tpreorder(first);
}

template <class T>
void tree<T> :: tpreorder(node<T> *temp)
{
 if(temp!=NULL)
  {
    cout<<"\t"<<temp->data;
  
    tpreorder(temp->left);

    tpreorder(temp->right);

  }
}

template <class T>
void tree<T> :: inorder()
{
   tinorder(first);
}

template <class T>
void tree<T> :: tinorder(node<T> *temp)
{
     
 if(temp!=NULL)
  {
      
    tinorder(temp->left);
    
    cout<<"\t"<<temp->data;

    tinorder(temp->right);

  }
}
template <class T>
void tree<T> :: postorder()
{
   tpostorder(first);
}
template <class T>
void tree<T> :: tpostorder(node<T> *temp)
{
     
 if(temp!=NULL)
  {
    tpostorder(temp->left);
      
    tpostorder(temp->right);
    cout<<"\t"<<temp->data;

  }
}
template <class T>
int tree<T> :: Countleaf()
{
   int iret=tCountleaf(first);
}
template <class T>
int tree<T> :: tCountleaf(node<T> *temp)
{
 static int count=0;
 if(temp!=NULL)
  {
    if((temp->left==NULL) && (temp->right==NULL))
    {
      count++;
    }
      
    tCountleaf(temp->left);
      
    tCountleaf(temp->right);

  }
 return count;
}

//---------------------------------------------------------------------------------------------------------------------------

template <class T>
Arrayx<T>::Arrayx(int length)
{
  this->size=length;
  arr=new T[size];
}


template <class T>
void Arrayx<T>::display()
{
  int k=0;
  cout<<"data:\t";
      for(k=0;k<size;k++)
       {
         cout<<"\t"<<arr[k];
       }
       cout<<"\n";
}

template <class T>
void Arrayx<T>::accept()
{
  int k=0;
  cout<<"enter the element";
      for(k=0;k<size;k++)
       {
         cin>>arr[k];
       }
}

template <class T>
Sorting<T>::Sorting(T *a,int s)
{
  this->arr=a;
  this->size=s;
}

template <class T>
  void Sorting<T>::bubblesort()
   {
     bool flag=false;
     T temp;    
     for(int i=0;i<size;i++)
     {
       flag=false;
     
      for(int j=0;j<size-1;j++)
      {
         if(arr[j]>arr[j+1])
         {
           flag=true;
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
         }
      }
      if(flag==false)
      break;
      
    }
   }

   template <class T>
  void Sorting<T>::SelectionSort()
  {
     int i=0,j=0,minindex=0,temp=0;
     for(i=0;i<size;i++)
     {
       minindex=i;
       for(j=i;j<size-1;j++)
       {
         if(arr[minindex]>arr[j])
         {
         minindex=j;
         }
      }
        temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
     }
  }

  template <class T1>
 void  Sorting<T1>::InsertionSort()
  {
     int i=0,j=0,key=0;
     for(i=0;i<size;i++)
     {
       key=arr[i];
       for(j=i-1;(j>=0) && (arr[j]>key);j--)
       {
          arr[j+1]=arr[j];
       }
       arr[j+1]=key;
     }
  }

//---------------------------------------------------------------------------------------------------------------------------
template<class T>
Searching<T>::Searching(T *a,int s)
{
   this->arr=a;
   this->size=s;
}
template<class T>
int Searching<T>::LinearSearch(T no)
{
   int k=0,pos=1;
      for(k=0;k<size;k++)
       {
         if(arr[k]==no)
         break;
         pos++;
       }
       if(pos>size)
       {
         return -1;
       }
       else
       {
         return pos;
       }

}
template<class T>
int Searching<T>::BinarySearch(T no)
{
   
   int start,end,mid;
     start=0;
     end=size-1;
     mid=(start+end)/2;

     while(start<=end)
     {
       if(arr[mid]==no)
       {
         break;
       }
       else if(no>arr[mid])
       {
          start=mid+1;
       }
       else if(no<arr[mid])
       {
         end=mid-1;
       }
       mid=(start+end)/2;
     }
     if(arr[mid]==no)
     {
       return mid+1;
     }
     else
     {
       return -1;
     }
   
}

    
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
