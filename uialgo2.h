#ifndef UIALGO2_H
#define UIALGO2_H

#include <QDialog>
#include "vector"

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

private:
    Ui::uiAlgo2 *ui;
    std::vector<QString> paths;

    QString directoryFolder;
    QString destinationFolder;
};

#endif // UIALGO2_H
