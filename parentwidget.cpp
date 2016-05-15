#include "parentwidget.h"

#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
 : QMainWindow(parent)
{

 mButton = new QPushButton("Chenge ME!!!!", this);

 mButton->setGeometry(QRect(QPoint(100, 100),
 QSize(200, 50)));


 connect(mButton, SIGNAL (released()), this, SLOT (handleButton()));
}

void MainWindow::handleButton()
{

 mButton->setText("YESSSS");

 mButton->resize(500,100);
}

MainWindow::~MainWindow()
{

}
