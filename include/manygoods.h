#ifndef MANYGOODS_H
#define MANYGOODS_H
#include "goods.h"

class manygoods
{
public:
    manygoods() = default;
    manygoods(const manygoods& other);
    void save();
    void addgood();//添加商品
    void deletegood();//删除商品
    void changegood();//更改商品
    void findgood();//查找商品
    void lookthrough();//浏览商品
    void sellgood(string &,int);//出售商品

    list<goods> goodlist;
};

#endif // MANYGOODS_H
