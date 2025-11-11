#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    int i = 0;
    while(i<n){
        cout << "#" << i+1 << "\nEnter the fullname: ";
        cin.get(pa[i].fullname, SLEN);
        while(cin.get() != '\n')   // 丢弃多余的字符和换行符
            continue;
        if(pa[i].fullname[0]=='\0')   // 若直接为fullname输入空行，则停止读取
            break;
        else{
            cout << "Enter the hobby: ";
            cin.get(pa[i].hobby, SLEN);
            while(cin.get() != '\n')   // 丢弃多余的字符和换行符
                continue;
            cout << "Enter the ooplevel: ";
            cin >> pa[i].ooplevel;
            cin.get();   // 丢弃缓冲区的换行符，防止被下一个getline()直接读取
            i++;
        }
    }
    return i;
}

void display1(student st){
    cout << "display1: " << endl << st.fullname << ", " 
         << st.hobby << ", " << st.ooplevel << endl;
}

void display2(const student * ps){
    cout << "display2: " << endl << ps->fullname << ", " 
         << ps->hobby << ", " << ps->ooplevel << endl;
}

void display3(const student pa[], int n){
    cout << "display3: " << endl;
    for(int i=0;i<n;i++)
        cout << pa[i].fullname << ", " << pa[i].hobby 
             << ", " << pa[i].ooplevel << endl;
}
