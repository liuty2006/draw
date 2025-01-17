#include "mainwindow.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    //SimpleItem *item = new SimpleItem();
    QGraphicsRectItem *item = new QGraphicsRectItem();
    item->setRect(0,0,100,100);
    scene->addItem(item);  // 将图形项添加到场景中

    QGraphicsView *view = new QGraphicsView(scene, this);
    setCentralWidget(view);  // 将视图设置为中央部件

    // 设置窗口大小
    resize(800, 600);  // 设置窗口大小为 800x600
}

MainWindow::~MainWindow() {}
