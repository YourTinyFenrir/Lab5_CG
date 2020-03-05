#ifndef SQUARE_H
#define SQUARE_H

#include "QVector4D"
#include "QGraphicsScene"
#include "QtMath"

class Square {

private:
    QVector<QVector4D> vertex; // Вершины, нумерация с левой верхней по часовой стрелке
    float centerZ; // Координата Z центра квадрата
public:
    Square();
    Square(QVector<QVector4D>);
    const Square operator = (const Square&);
    void draw(QGraphicsScene*, QPen);
    float getCenterZ();

};

#endif // SQUARE_H
