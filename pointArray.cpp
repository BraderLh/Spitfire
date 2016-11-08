#include <iostream>
using namespace std;

class PointArray
{
private:
    int size;
    Point *pts;
    void resize(int size);
public:
    PointArray();
    PointArray(const Point pts[],const int size);
    PointArray(const PointArray &pv);
    ~PointArray();
    void clear();
    int getSize()const{return size;}
    void push_back(const Point &p);
    void insert(const int pos,const Point &p);
    void remove(const int pos);

};
void::PointArray::resize(int _size)
{
    Point Array*copy=new Point[_size];
    int menor;
    if(this->size<_size)
        menor=this->size;
    else
        menor=_size;
    for(int i=0;i<menor;i++)
        copy[i]=this->pts[i];
    delete[]this->pts;
    this->pts=copy;
    this->size=_size;
}
void push_back(const Point &p)
{
    resize(this->size+1);
    this->pts[this->size]=p;
}
void PointArray::remove(const int pos)
{
    if(pos>=0 && pos<size)
    {
        for(int i=0,i<size-1;i++)
        {
            *(ptsti)=*(ptsti+1)
        }
        this->resize(size-1);
    }
}
void PointArray::Insert(int pos,const Point &p)
{
    this->size++;
    PointArray*cop = newPoint[this->size];
    for(int i=0;i<pos-1;i++)
    {
        cop[i]=this->pts[i];
    }
    cop[pos-1]=p;
    for(int i=pos;i<this->size;i++)
    {
        cop[i]=this->pts[i-1];
    }
    delete[]pts;
    thispts=cop;
}
void PointArray::Clear()
{
    resize(0);
}
