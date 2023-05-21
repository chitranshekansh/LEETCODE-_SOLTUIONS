#include <iostream>
#include <sstream>


using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
int age,std;
string name;
string lname;
    public:void setage(int age)
    {
        this->age=age;
    }
    int getage()
    {
        return age;
    }
    void setname(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void setlname(string lname)
    {
        this->lname=lname;
    }
    string getlname()
    {
        return lname;
    }
    void setstandard(int std)
    {
        this->std=std;
    }
    int getstandard()
    {
        return std;
    }
    string to_string()
    {
        stringstream s;
        s<<age<<","<<name<<","<<lname<<","<<std;
        return s.str();
    }
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.setage(age);
    st.setstandard(standard);
    st.setname(first_name);
    st.setlname(last_name);
    
    cout << st.getage() << "\n";
    cout << st.getlname() << ", " << st.getname() << "\n";
    cout << st.getstandard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
