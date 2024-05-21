//Link: https://www.e-olymp.com/az/problems/9656

#include <bits/stdc++.h>
using namespace std;

class Shape{
private:
    string shapeName;
public:
    Shape(string name){
        shapeName = name;
    }
    string getShapeName(){
        return shapeName;
    }
};

class Circle: public Shape{
public:
    Circle(string name) : Shape(name){}
};

class Rectangle: public Shape{
public:
    Rectangle(string name) : Shape(name){}
};

class Triangle: public Shape{
public:
    Triangle(string name) : Shape(name){}
};

int main(int argc, char** argv) {
    
    string str;
    while(cin >> str) {
        if(str == "Circle"){
            Circle c(str);
            cout << c.getShapeName() << endl;
        }
        else if(str == "Rectangle"){
            Rectangle r(str);
            cout << r.getShapeName() << endl;
        }
        else if(str == "Triangle"){
            Triangle t(str);
            cout << t.getShapeName() << endl;
        }
    }

    return 0;
}
