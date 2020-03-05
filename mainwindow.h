#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPen>
#include "cube.h"
#include "ui_mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void drawCoordAxes();

private slots:
    void on_createCube_clicked();

    void on_rotateOX_clicked();

    void on_rotateOY_clicked();

private:
    Cube cube;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
