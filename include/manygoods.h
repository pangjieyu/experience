#ifndef MANYGOODS_H
#define MANYGOODS_H
#include "goods.h"

class manygoods
{
public:
    manygoods() = default;
    manygoods(const manygoods& other);
    void save();
    void addgood();//�����Ʒ
    void deletegood();//ɾ����Ʒ
    void changegood();//������Ʒ
    void findgood();//������Ʒ
    void lookthrough();//�����Ʒ
    void sellgood(string &,int);//������Ʒ

    list<goods> goodlist;
};

#endif // MANYGOODS_H
