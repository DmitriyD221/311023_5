#include <iostream>
#include <string>
using namespace std;

class Class1 {
private:
    int field1;
public:
    Class1() : field1(0) {}
    Class1(int value) : field1(value) {}
    Class1(double value) : Class1(static_cast<int>(value)) {}
    Class1(const string& value) : Class1(stoi(value)) {}
    \
        void setField1(int value) { field1 = value; }
    void setField1(double value) { setField1(static_cast<int>(value)); }
    void setField1(const string& value) { setField1(stoi(value)); }
    int getField1() const { return field1; }
    ~Class1() {}
    Class1(const Class1& other) :  field1(other.field1) {}
};

class Class2 {
private:
    double field2;
public:
    Class2() : field2(0.0) {}
    Class2(int value) : field2(static_cast<double>(value)) {}
    Class2(double value) : field2(value) {}
    Class2(const string& value) : Class2(stod(value)) {}
      void setField2(int value) { field2 = static_cast<double>(value); }
    void setField2(double value) { field2 = value; }
    void setField2(const string& value) { field2 = stod(value); }
    double getField2() const { return field2; }
    ~Class2() {}
    Class2(const Class2& other) : field2(other.field2) {}
};

class ñlass3 {
private:
    string field3;
public:
    ñlass3() : field3(" ") {}
    ñlass3(int value) : field3(to_string(value)) {}
    ñlass3(double value) : field3(to_string(value)) {}
    ñlass3(const string& value) : field3(value) {}
    void setField3(int value) { field3 = to_string(value); }
    void setField3(double value) { field3 = to_string(value); }
    void setField3(const string& value) { field3 = value; }
    const string& getField3() const { return field3; }
    ~ñlass3() {}
    ñlass3(const ñlass3& other) : field3(other.field3) {}
};

int main() {
    Class1 obj1;
    Class2 obj2;
    ñlass3 obj3;
    obj1.setField1(42);
    obj2.setField2(3.14);
    obj3.setField3("Ïðèâiò, Ñâiò!");
    Class1 copy1 = obj1;
    Class2 copy2 = obj2;
    ñlass3 copy3 = obj3;
    cout << "obj1.field1: " << obj1.getField1() << endl;
    cout << "obj2.field2: " << obj2.getField2() << endl;
    cout << "obj3.field3: " << obj3.getField3() << endl;
    cout << "copy1.field1: " << copy1.getField1() << endl;
     cout << "copy2.field2: " << copy2.getField2() << endl;
    cout << "copy3.field3: " << copy3.getField3() << endl;
    return 0;
}
