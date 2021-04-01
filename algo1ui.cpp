#include "algo1ui.h"
#include "ui_algo1ui.h"

algo1ui::algo1ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::algo1ui)
{
    ui->setupUi(this);
}

algo1ui::~algo1ui()
{
    delete ui;
}
