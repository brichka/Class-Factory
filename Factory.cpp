#include <iostream>
#include <vector>
using namespace std;
class Creator {
virtual void type_of_creator() = 0;
};

class Product {
public :
string product;
Product(){};
Product(string product_):product(product_) {};
virtual void type_of_product()
{
cout«"It is base class Product->";
};
};
class ConcreteCreator: public Creator{
public:
string concrete_creator;
ConcreteCreator();
ConcreteCreator(string concrete_creator_):concrete_creator(concrete_creator_) {};
void type_of_creator()
{
cout«"children creator "«concrete_creator«endl;
}
};
class ConcreteProductA: public Product {
public:

ConcreteProductA(string product="A"):Product(product) {};
void type_of_product()
{
Product::type_of_product();
cout«"children product "«product«endl;
}
};

class ConcreteProductB: public Product {
public:
ConcreteProductB(string product="B"):Product(product) {};
void type_of_product()
{
Product::type_of_product();
cout«"children product "«product«endl;
}
};

class ConcreteProductC: public Product {
public:
ConcreteProductC(string product="C"):Product(product) {};
void type_of_product()
{
Product::type_of_product();
cout«"children product "«product«endl;
}
};

int main(int argc, char *argv[])
{
ConcreteCreator concrete_creator("ConcreteCreator");
ConcreteProductA A("A");
ConcreteProductB B("B");
ConcreteProductC C("C");
concrete_creator.type_of_creator();
A.type_of_product();
B.type_of_product();
C.type_of_product();
return 0;
}
