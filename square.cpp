#include "square.h"

Square::Square() {

}

Square::Square(QVector<QVector4D> pts) {

    vertex = pts;

    if (vertex[2].z() != vertex[0].z())
        centerZ = ((vertex[2].z() - vertex[0].z()) / 2) + vertex[0].z();
    else
        centerZ = vertex[0].z();

}

const Square Square::operator=(const Square &temp) {

    this->vertex = temp.vertex;
    this->centerZ = temp.centerZ;

    return *this;

}

void Square::draw(QGraphicsScene* scene, QPen pen) {

    QVector<QPoint> polyg;

    for (int i = 0; i < 4; ++i) {

        QPoint temp(vertex[i].x(), vertex[i].y());
        polyg.push_back(temp);

    }

    scene->addPolygon(QPolygon(polyg), pen, QBrush(pen.color(), Qt::SolidPattern));

}

float Square::getCenterZ() {

    return centerZ;

}

