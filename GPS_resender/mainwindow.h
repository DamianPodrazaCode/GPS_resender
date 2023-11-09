#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void read_data();
    void on_pb_serial_connect_toggled(bool checked);

    void on_pb_term_Stop_toggled(bool checked);

private:
    Ui::MainWindow *ui;
    QSerialPort *COMPORT;
    QStringList portInfoList;
    void fill_cb_serialInfo();
    QByteArray dataFromSerial;
};
#endif // MAINWINDOW_H
