#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exit_released()
{
    exit(0);
}

void MainWindow::on_bubbleSort_released()
{
    uiAlgo1 a1;
    a1.exec();
}
