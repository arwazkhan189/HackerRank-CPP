

class Person
{
    public:
    char name[100];
    int age;
    int id;
    
    virtual void getdata(){}
    virtual void putdata(){}
};
class Professor:public Person
{
    int publications;
    int curr_id;
    static int count;
    public:
    Professor()
    {
        count++;
        id=count;
    }
    virtual void getdata()
    {
        cin>>name;
        cin>>age;
        cin>>publications;
    }
    virtual void putdata()

    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
    }
};
int Professor::count=0;
class Student:public Person
{
    static int count1;
    public:
    int marks[6];
     
    Student()
    {
        count1++;
        id=count1;
    }
    int cal_sum(int m[6])
    {
        int sum=0;
        for(int i=0;i<6;i++)
        {
            sum+=marks[i];
        } 
        return sum;
    }
    void getdata()
    {
        cin>>name;
        cin>>age;
       
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
        } 
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<cal_sum(marks)<<" "<<id<<endl;
    }
};
int Student::count1=0;
