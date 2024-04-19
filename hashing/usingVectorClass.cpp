#include<bits/stdc++.h>
using namespace std;

class Hashtable
{
     public :

     int capacity;

     vector<int> vec;

     Hashtable(int capacity_)
     {
        capacity=capacity_ ;
        vec.assign(capacity,0);
     }

     int hashcode(int key)
     {
        return key % capacity; 
     }
     
     void  insert(int key)
     {
        vec[hashcode(key)]=key;
        cout<<"element inserted successfully";
     }

     void remove_element(int key)
     {
        auto it =find(vec.begin(),vec.end(),key);
        if(it != vec.end())
        {
            *it=0;
            cout<<key<<" "<<"has been removed";
        }
        else
        {
            cout<<"element dosent exist\n";
        }


     }

        void size()
        {
            cout<<"size is"<<" "<<vec.size()<<endl;
        }

        void display()
        {
            cout<<"hashed key"<<"value"<<endl;
            int index=0;

            for (auto it=vec.begin();it!=vec.end();++it)
            {
                cout<<"index"<<"\t\t"<<*it<<endl;
                ++index;
            }
        }



};

int main()
{
    int capacity,choice,key,c;
    cout<<"enter size of hashtable";
    cin>>capacity;

    Hashtable obj(capacity);

    do{
         cout<<"\n implement hashtable using vector";
         cout<<"menu- 1. insert\n"
                      "2. remove\n"
                      "3. size\n"
                      "4. display\n"
                      "enter choice: ";

         cin>>choice;

         switch(choice)
         {
            case 1:
            cout<<"enter element to insert";
            cin>>key;
            obj.insert(key);
            break;

            case 2:
            cout<<"enter element to remove";
            cin>>key;
            obj.remove_element(key);
            break;

            case 3:
            cout<<"size is";
            obj.size();
            break;

            case 4:
            cout<<"displaying hashtable";
            obj.display();
            break;

            default:
            cout<<"wrong input";
         }
         cout<<"\n do you want to continue? press 1 for yes";
         cin>>c;
         
    } while(c==1);
    

}









