#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
 class MainWindow;
}

class MainWindow : public QMainWindow
{
 Q_OBJECT

public:
 explicit MainWindow(QWidget *parent = 0);
 virtual ~MainWindow();

private slots:
 void handleButton();

private:
 QPushButton *mButton;
};

#endif // MAINWINDOW_H
