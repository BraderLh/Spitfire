#include <iostream>


class PointArray
{
    private:
        int _size;
        Point *points;
    public:
        PointArray();
}

PointArray::PointArray()
{
    this->_size=0;
    this->points = new Points[size];
}
PointArray::~PointArray()
{
    delete _size;
}
PointArray::PointArray(const Points pts[],int tam)
{
    this->_size=tam;
    this->points=new Point[tam];
    for(int i=0;i<tam;i++)
    {
        this->points[i]=pts[i];
    }

}
//Constructor copia
