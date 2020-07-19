#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int a,s;
    string f,l;
    public:
    void set_age(int age){
        a=age;
    }
    public:
    void set_standard(int standard){
        s=standard;
    }
    public:
    void set_first_name(string first_name){
        f=first_name;
    }
    public:
    void set_last_name(string last_name){
        l=last_name;
    }
    public:
    int get_age(){
        return a;
    }
    public:
    int get_standard(){
        return s;
    }
    public:
    string get_first_name(){
        return f;
    }
    public:
    string get_last_name(){
        return l;
    }
    public:
    string to_string(){
        std::string out_stringa;
        std::stringstream sa;
        sa << a;
        out_stringa = sa.str();
        std::string out_strings;
        std::stringstream ss;
        ss << s;
        out_strings = ss.str();
        
        return out_stringa+","+f+","+l+","+out_strings;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


