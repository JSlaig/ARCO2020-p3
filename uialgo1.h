#ifndef UIALGO1_H
#define UIALGO1_H

#include <QDialog>
#include "ordenacion.h"
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
    int tiempoEjecucion();

private slots:


    void on_Algo1butt_OpenFile_released();

    void on_Algo1butt_DestinationFolder_released();
    void on_reset_released();
    void on_EXECUTION_released();

private:
    Ui::uiAlgo1 *ui;
//private:
    //Ui::uiAlgo1 *ui;
    std::vector<QString> paths;
    Ordenacion ordenacion;
    QString directoryFile;
    QString destinationFolder;
};

#endif // UIALGO1_H
