#ifndef UIALGO2_H
#define UIALGO2_H

#include <QDialog>
#include "vector"
#include <imagenes.h>
namespace Ui {
class uiAlgo2;
}

class uiAlgo2 : public QDialog
{
    Q_OBJECT

public:
    explicit uiAlgo2(QWidget *parent = nullptr);
    ~uiAlgo2();

private slots:
    void on_butt_OpenFile_released();

    void on_butt_DestinationFolder_released();

    void on_butt_Convert_released();

private:
    Ui::uiAlgo2 *ui;
    std::vector<QString> paths;
    imagenes tratado;
    QString directoryFolder;
    QString destinationFolder;
};

#endif // UIALGO2_H
