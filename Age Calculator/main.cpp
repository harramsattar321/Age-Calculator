#include<iostream>
using namespace std;

int main()
{
    int d_birth,d_death,m_birth,m_death,y_birth,y_death,year,month,date;
    cout<<"Enter your date of birth"<<endl;
    cin>>d_birth;
    cin>>m_birth;
    cin>>y_birth;
    int a=0;
    while(a==0){
        if((d_birth<32)&&(d_birth>0)&&(m_birth==1||m_birth==3||m_birth==5||m_birth==7||m_birth==8||m_birth==10||m_birth==12)&&(y_birth>1990)&&(y_birth<2024))
            {
                a=1;
            }
        else if((d_birth<31)&&(d_birth>0)&&(m_birth==4||m_birth==6||m_birth==9||m_birth==11)&&(y_birth>1990)&&(y_birth<2024))
            {
                a=1;
            }
        else if((d_birth<30)&&(d_birth>0)&&(m_birth==2)&&(y_birth>1990)&&(y_birth<2024)&&(y_birth%4==0))
            {
                a=1;
            }
        else if((d_birth<29)&&(d_birth>0)&&(m_birth==2)&&(y_birth>1990)&&(y_birth<2024)&&(y_birth%4!=0))
            {
                a=1;
            }
        else
            {
                cout<<"You entered wrong DATE OF BIRTH"<<endl;
                cout<<"Enter your date of birth Again"<<endl;
                cin>>d_birth;
                cin>>m_birth;
                cin>>y_birth;
            }
        }

    cout<<"Enter your date of death"<<endl;
    cin>>d_death;
    cin>>m_death;
    cin>>y_death;
    int b=0;
    while(b==0){
        if((d_death<32)&&(d_death>0)&&(m_death==1||m_death==3||m_death==5||m_death==7||m_death==8||m_death==10||m_death==12)&&(y_death>2023)&&(y_death<=2099))
            {
                b=1;
            }
        else if((d_death<31)&&(d_death>0)&&(m_death==4||m_death==6||m_death==9||m_death==11)&&(y_death>2023)&&(y_death<=2099))
            {
                b=1;
            }
        else if((d_death<30)&&(d_death>0)&&(m_death==2)&&(y_death>2023)&&(y_death<=2099)&&(y_death%4==0))
            {
                b=1;
            }
        else if((d_death<29)&&(d_death>0)&&(m_death==2)&&(y_death>2023)&&(y_death<=2099)&&(y_death%4!=0))
            {
                b=1;
            }
        else
            {
                cout<<"You entered wrong DATE OF DEATH"<<endl;
                cout<<"Enter your date of death Again"<<endl;
                cin>>d_death;
                cin>>m_death;
                cin>>y_death;
            }
        }
        int days=29, i= 0;
        if(m_death>=m_birth)
        {
            i = m_death;
        }
        else
        {
            i = m_death - 1;
        }

        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {
                days=31;
            }
        if(i==4||i==6||i==9||i==11)
            {
                days=30;
            }
        if((i==2)&&(y_death%4!=0))
            {
                days=28;
            }

        year=y_death-y_birth;
        if(m_death<m_birth)
        {
            year=year-1;
            month=12-(m_birth - m_death);
        }
        else
        {
            month=m_death-m_birth;
        }
        if(d_death<d_birth)
        {
            month=month-1;
            date=days-(d_birth-d_death);
        }
        else
        {
            date=d_death-d_birth;
        }
        cout<<"TOTAL AGE:"<<date<<"_"<<month<<"_"<<year<<endl;

    return 0;
}

