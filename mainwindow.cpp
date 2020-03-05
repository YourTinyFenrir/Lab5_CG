#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene* scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::drawCoordAxes() {

    ui->graphicsView->items().clear();
    ui->graphicsView->scene()->clear();

    ui->graphicsView->scene()->addLine(0, 200, 0, -200, QPen(Qt::black));
    ui->graphicsView->scene()->addLine(-200, 0, 200, 0, QPen(Qt::black));

}


void MainWindow::on_createCube_clicked() {

    drawCoordAxes();

    Cube temp(ui->edge->value());
    cube = temp;
    cube.draw(ui->graphicsView->scene());

}

void MainWindow::on_rotateOX_clicked() {

    drawCoordAxes();

    Cube temp = cube.rotateOX(ui->angle->value());
    cube = temp;
    cube.draw(ui->graphicsView->scene());

}

void MainWindow::on_rotateOY_clicked() {

    drawCoordAxes();

    Cube temp = cube.rotateOY(ui->angle->value());
    cube = temp;
    cube.draw(ui->graphicsView->scene());

}
