#include<iostream>
using namespace std;

class conutry
{
    public:
        
    int us;
    int china;
    int india;
    
    void getdata()
    {
        cout<<"Enter US Army strength : ";
        cin>>us;
        cout<<"Enter CHINA Army strength : ";
        cin>>china;
        cout<<"Enter INDIA Army strength : ";
        cin>>india;
    }
    
    void setdata()
    {
        if(us==china && china==india)
        {
            cout<<" Every country has same Army strength";
        }
            
        else
        {
            if(us>china)
            {
                if(us>india)
                {
                    cout<<"US is largest Army strength "<<us<<endl;
                }
                
                else
                {
                    cout<<"INDIA is largest Army strength "<<india<<endl;
                }
            }
            
            else
            {
                if(china>india)
                {
                    cout<<"CHINA is largest Army strength "<<china<<endl;
                }
                
                else
                {
                    cout<<"INDIA is largest Army strength "<<india<<endl;
                }
            }   
        }
    }
};
int main()
{
    conutry survey;
    
    survey.getdata();
    survey.setdata();
    
    return 0;
}

