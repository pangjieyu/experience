#include "manygoods.h"
#include <fstream>
#include <iostream>
using namespace std;

manygoods::manygoods(const manygoods& other)
{
    //copy ctor
    for(list<goods>::iterator i=goodlist.begin(); i!=goodlist.end(); ++i)
        goodlist.push_back(*i);
}
void manygoods::addgood()
{
    string str;
    ofstream out;
    out.open(str.c_str(),ofstream::out | ofstream::app | ofstream::binary);
    goods newgood;
    cout << "new good's name:";
    cin >> str;
    newgood.set_name(str);
    cout<<endl;
    cout << "new good's code:";
    cin >> str;
    newgood.set_code(str);
    cout  << endl;
    cout << "new good's producer:";
    cin >> str;
    newgood.set_producer(str);
    cout << endl;
    double p;
    cout << "new good's price:";
    cin >> p;
    int n;
    cout << "new good's number:";
    newgood.set_number(n);
    cout << endl;
    goodlist.push_back(newgood);
}
void manygoods::deletegood()
{
    cout << "Which good would you like to delete?   please input the good's ID:"<<endl;
    string deid;
    cin >> deid;
    list <goods>::iterator it;
    for(it = goodlist.begin(); it != goodlist.end();)
    {
        if(it->code == deid)
        {
            it = goodlist.erase(it);
        }
        ++it;
    }
    cout << "delete completed." << endl;

}
void manygoods::changegood()
{
    cout << "Which good would you like to change? please input its ID:" << endl;
    string chid;
    cin >> chid;
    list<goods>::iterator it;
    for(it = goodlist.begin(); it != goodlist.end(); ++it)
    {
        if(it->code == chid)
        {
            cout  << "ID:" << it->code << "change to:";
            cin >> it->code;
            cout << endl;
            cout << "name:" << it-> name <<"change to:";
            cin >> it->name;
            cout << endl;
            cout << "producer:" << it-> producer <<"change to:";
            cin >> it->producer;
            cout << endl;
            cout << "price:" << it-> name <<"change to:";
            cin >> it->price;
            cout << endl;
            cout << "number:" << it-> number <<"change to:";
            cin >> it->number;
            cout << endl;
        }
    }
}
void manygoods::findgood()
{
    cout << "Please input the good's id:";
    string findcode;
    cin >> findcode;
    list<goods>::iterator it;
    for(it = goodlist.begin(); it != goodlist.end(); ++it)
    {
        if(it->code == findcode)
        {
            cout << "ID:" << it->code << endl
                 << "name:"<< it->name << endl
                 << "producer:"<< it->producer << endl
                 << "price:"<< it->price << endl
                 << "left:"<< it->number << endl;
        }
    }
}
void manygoods::lookthrough()
{
    list<goods>::iterator it;
    for(it=goodlist.begin(); it!=goodlist.end(); ++it)
    {
        cout << "ID:"<< it->code<< "\t"<< "name:"<< it->name<< "\t"<< "produce:"<< it->producer<< "\t"<< "price:"<< it->price<< endl;
    }
}
void manygoods::sellgood(string &s, int x)
{
    list<goods>::iterator it;
    for(it=goodlist.begin(); it!= goodlist.end(); ++it)
        if(s == it->code)
            if((it->number-x)>0)
            {
                it->number -= x;
            }
            else
                cout<< "NOT ENOUGH!" << endl;

}
void manygoods::save()
{
    ofstream ofile;
    ofile.open("goodlist.info",ios::out);
    if(ofile.fail()){
        cout << "原文件不存在，正在创建新文件……" << endl;
    }
    ofile.write();
    cout << "数据已保存" << endl;


}
