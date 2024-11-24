#include<bits/stdc++.h>
using namespace std;
class Task
{
    public:
    string name;
    bool completed;
    Task() //Default constructor
    {
        completed=false;
    }
};
void toDoList()
{
    int choice;
    Task t[100];
    int i=0;
    while(1)
    {
        cout<<"Enter\n1. To add task.\n2. To view tasks\n3. To mark the task as completed\n4. To delete task\n5. To exit from the application"<<endl<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: {
                    cout<<"Enter task name : ";
                    cin>>t[i].name;
                    i++;
                    }
                    break;
            case 2: {
                    cout<<"All the tasks with status "<<endl<<endl;
                    if(i == 0)
                    {
                        cout<<"No tasks added"<<endl<<endl;
                    }
                    else
                    {
                        cout<<"Task name\tStatus"<<endl<<endl;
                        for(int j=0;j<i;j++)
                        {
                            string status;
                            if(t[j].completed == false)
                            {
                                status="Pending";
                            }
                            else
                            {
                                status="Completed";
                            }
                            cout<<t[j].name<<setw(15)<<status<<endl;
                        }
                    }
                    }
                    break;
            case 3:{
                   cout<<"Enter the name of the task you want to mark as completed"<<endl;
                   string marktask;
                   cin>>marktask;
                   int j=0;
                   for(int j=0;j<i;j++)
                   {
                       if(t[j].name == marktask)
                       {
                           t[j].completed=true;
                       }
                   }
                   }
                   break;
           case 4:{
                  cout<<"Enter the name of the task you want to delete"<<endl;
                  int j=0;
                  string marktaskdelete;
                  cin>>marktaskdelete;
                  bool found=false;
                  for(j=0;j<i;j++)
                  {
                       if(t[j].name == marktaskdelete)
                       {
                           found=true;
                           break;
                       }
                  }
                  int k=0;
                  if(found == true)
                  {
                      for(k=j;k<i-1;k++)
                      {
                        t[k]=t[k+1];
                      }
                      i--;                  //The number of tasks reduces by one
                  }

                }
                break;
            case 5:{
                    exit(0);
                   }
        }
    }
}
int main()
{
    cout<<"********** WELCOME TO TO-DO-LIST APP **********"<<endl<<endl;
    toDoList();
    return 0;
}
