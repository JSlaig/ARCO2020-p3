#include "uialgo1.h"
#include "ui_uialgo1.h"

uiAlgo1::uiAlgo1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::uiAlgo1)
{
    ui->setupUi(this);
}

uiAlgo1::~uiAlgo1()
{
    delete ui;
}

void uiAlgo1::on_execute_released()
{
unsigned t0, t1;
double time[5];

for(int i = 0; i < 5; i++){
    t0 = clock();

    //Llamada al algoritmo

    t1 = clock();

    time[i] = (double(t1-t0)/CLOCKS_PER_SEC) * 1000;
}

ui->time1->setText(QString::number(floor(time[0])) + " ms");
ui->time2->setText(QString::number(floor(time[1])) + " ms");
ui->time3->setText(QString::number(floor(time[2])) + " ms");
ui->time4->setText(QString::number(floor(time[3])) + " ms");
ui->time5->setText(QString::number(floor(time[4])) + " ms");
int avg = floor(time[0] + time[1] + time[2] + time[3] + time[4]) / 5;
ui->averageTime->setText(QString::number(avg) + " ms");

}

void uiAlgo1::on_reset_released()
{
    ui->time1->setText("");
    ui->time2->setText("");
    ui->time3->setText("");
    ui->time4->setText("");
    ui->time5->setText("");
    ui->averageTime->setText("");
}
