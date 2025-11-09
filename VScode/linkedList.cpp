#include<iostream>
 using namespace std;
 

class Node{
  public:   
   int data ;
     Node*next;

   Node(int val) {
    data = val;
     next= NULL;
   }

   //  ~Node(){
   //  //  cout<< " node distructor for data = "<< data<< endl;
   //     if ( next !=NULL){
   //          delete next;
   //        next=NULL;
   //     }
   //  }
};
class List {
   public: 
     Node* head ;
    Node* tail;
     List(){
     head= tail=NULL;
   }
// ~List(){
//       //cout<< " List distractor "<< endl;
//        if (head !=NULL){
//          delete head;
//          head=NULL;
//        } 
//     }

     void push_front(int val ){
       Node* newNode = new Node(val);
       if (head==NULL){
         head =tail=newNode;
       }
        else {
         newNode->next = head;
         head= newNode;
        }
     }

      void push_back( int val){
        Node *newNode= new Node( val);
        if ( head== NULL){
          head =tail= newNode;
        }
         else {
            tail->next= newNode;
             tail=newNode;
         }
      }
    
    // inserting the element before to the given key value
    void mid_insert(int val,int key){
      Node *newNode= new Node(val);
       Node* temp1= head;
      Node* temp2= head;
      if ( head==NULL){
      cout<< " con't enter without correct refereence element ..." << endl;
      }
      if ( head-> next ==NULL){
      if(head->data==key){
        newNode-> next= head;
        head= newNode;
      } else{
         cout<<"key not found "<< endl;
      }
    }
       while( temp1->next != NULL){
          if (temp1->data == key){
             temp2-> next= newNode;
             newNode-> next=temp1;
             break;
          }
          else {
             temp2=temp1;          
             temp1=temp1->next;
          }
       }
    }

    void pos_insert( int val, int pos){
       Node* newNode= new Node( val);
        Node* temp = head;
        for (int i=1;i<pos-1;i++){
          temp=temp->next;
        }
        newNode=temp-> next;
        temp-> next= newNode;
      }

   void print(Node* head){
       Node *temp = head ;
       while ( temp!=NULL){
         cout<<temp->data<< " " << endl;
          temp= temp-> next;
       }
      
    }

      
      void pop_front(){
         if (head==NULL){
             cout<< " there is no list "<< endl;
             return;
         }
        else{ Node* temp= head;
         head=temp->next ;
         temp->next=NULL;
         delete temp;
        }
      }

   void pop_back(){
     Node* temp =head;
     while(temp->next ->next!=NULL){
         temp= temp->next ;
     }
       temp->next =NULL;
       delete tail;
       tail=temp;
      }

   void search(int key){
      Node *temp = head ;
      int idx=0;
      while(temp!=NULL){
       if( temp->data==key){
         cout << " Key element is located at position : "<<idx+1<<endl; 
       }
       temp= temp-> next;
       idx++;
   } 
}
 void reverse(){
   Node * current=head;
    Node* prev= NULL;
     while (current!=NULL){
    Node* next= current -> next;
    current-> next = prev;
     prev= current ;
      current=next;
     }
      head=prev;
 }

 int Size(){
    int sz=0;
   Node* temp=head;
     while (temp!=NULL){
      temp=temp->next;
       sz=sz+1;
     }
     return sz;
}

 void removeNth(int n ){//O(n);O(n)
   int size=Size();
      Node *prev = head;
    for (int  i=1;i<(size-n);i++){
      prev = prev->next ;
    }
    Node* toDel=prev->next;
    cout<<" going to delete : "<< toDel<< endl;
    prev=prev->next->next;
}

bool isCycle(Node* head){
   Node* slow= head;
  Node* fast= head;
   while ( fast!=NULL && fast->next!=NULL){ 
    slow= slow-> next ;
    fast =fast -> next-> next;
  if ( fast==slow){
   cout<<"Cycle exists \n";
   break;
   return true ;
  }
  } if (fast!=slow) 
  cout<<"Cycle dosen't exist \n";
 
  return false;
}
void removeCycle(Node* head){
  Node* fast=head;
   Node* slow=head;
   bool IsCycle=false;
  while ( fast-> next!=NULL&& fast!=NULL){
    slow=slow -> next;
    fast=fast->next-> next ;
    if (slow==fast){
      cout<< " loop if found "<< endl;
       break;
       IsCycle=true;
    }

  }
  if (IsCycle==false){
  cout<<" Cycle does not exist "<< endl;
  return ;
  }
    Node* prev= fast;
       slow = head;
       if ( slow== fast){
      while ( fast->next==slow){
        fast=fast->next;
      }
     fast=fast->next;
       }
       else{
         while ( slow!=fast){
          slow=slow->next;
          prev=fast;
          fast=fast-> next;
         }
         prev-> next=NULL;
       }
        
      } 
  };

  int main(){
     List ll;
//      int choice ;
//      cout <<" ENTER 1. push front\n 2. push back\n 3. push before a specific value\n 4. push at particular position\n 5. pop front\n 6. pop back\n 7. search\n 8. reverse the linked list \n 9.Find a loop\n 10.remove Nth node \n ";
//      do {
//      cin>> choice;
//       switch(choice){
//       case 1: {
//          int ele;
//          cout<<"enter element to push\n";
//          cin>>ele;
//          ll.push_front(ele);
//          break;    }
//       case 2: {
//          int ele2;
//          cout<<"enter element to push\n";
//          cin>>ele2;
//          ll.push_back(ele2);
//          break;  }
//       case 3: {
//          int ele3,ref;
//          cout<<"enter element to push and also a value for reference\n ";
//          cin>>ele3>> ref;
//          ll.mid_insert(ele3,ref);
//          break;  }
//      case 4: {
//          int ele4,pos;
//          cout<<"enter element to push and also a value for reference position\n ";
//          cin>>ele4>> pos;
//          ll.mid_insert(ele4,pos);
//          break;    }
//      case 5: {
//         ll.pop_front();
//          break;  }
//      case 6: {
//         ll.pop_back();
//          break;   }
//      case 7: {
//           int ele7;
//           cout<<"enter the element to search ";
//           cin>>ele7;
//         ll.search(ele7);
//          break ;  }
//      case 8: {
//         ll.reverse();
//          break;    }
//      case 9: {
//       ll.isCycle(ll.head);
//         
//      }
//      case 10: {
//        ll.removeNth(5);
//          break;
//      }
//     default:
//       cout<<"you entered invalid integer ";
//       }
//     }while ( choice>0&&choice<=9);
//      cout<< "....THE END....."<< endl;
 ll.push_front(56);
 ll.push_front(5);
 ll.push_front(6);
 ll.push_front(2);

    cout<<" elements are :";
       ll. print(ll.head);
      ll.tail->next=ll.head->next->next->next;
     ll.isCycle(ll.head);
     ll.removeCycle(ll.head);
       ll. print(ll.head);
      }

// // g++ linkedList.cpp -o linedList      ./linkedList

    
// have to work on remove cycle........