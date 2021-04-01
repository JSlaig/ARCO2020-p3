#ifndef UIALGO1_H
#define UIALGO1_H

#include <QDialog>

#include <ctime>
#include <math.h>

namespace Ui {
class uiAlgo1;
}

class uiAlgo1 : public QDialog
{
    Q_OBJECT

public:
    explicit uiAlgo1(QWidget *parent = nullptr);
    ~uiAlgo1();

private slots:
    void on_execute_released();

    void on_reset_released();

private:
    Ui::uiAlgo1 *ui;
};

#endif // UIALGO1_H
