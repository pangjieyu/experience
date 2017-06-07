#ifndef GOODS_H
#define GOODS_H
#include <list>
#include <string>
using namespace std;
struct goods
{
    string name;
    string code;
    string producer;
    double price;
    int number;
    void set_name(string&);
    void set_code(string&);
    void set_producer(string&);
    void set_price(double);
    void set_number(int);

};


#endif // GOODS_H
