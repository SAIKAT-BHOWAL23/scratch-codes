#include<bits/stdc++.h>

using namespace std;



int main()
{
    int x,s,n;
    int score[n];
    int t=0;
    
    cout<<"enter no of users"<<endl;
    cin>>n;
    
    cout<<"enter decided score"<<endl;
    cin>>s;
    
    cout<<"enter score of users"<<endl;
    
    for(int i=0;i<n;++i)
    {
        cin>>score[i];
        
    }
    
    cout<<"the scores are:"<<endl;
    
    for(int j=0;j<n;++j)
    {
        cout<<score[j];
    }
    
    
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(i!=j)
            {
               if(( score[i]+score[j])==s)
               {
                 t=t+1;  
               }
               
               }
            
        }
      
    }
    
       cout<<"the no of matching is:"<<endl;
       cout<<t;
       
    
    
    return 0;
    
    
    
    
    
}


