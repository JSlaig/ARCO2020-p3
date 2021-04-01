#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <algo1ui.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exit_released();

    void on_bubbleSort_released();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
