const int Len = 40;

class golf{
private:
    char fullname[Len];
    int handicap;
public:
    golf(const char * name = "Admin", int hc = 999);
    void sethandicap(int hc);   // 类的属性值不能和函数同名，已有handicap属性，这里函数不能再用这个名字
    void showgolf();
};

golf setgolf();
