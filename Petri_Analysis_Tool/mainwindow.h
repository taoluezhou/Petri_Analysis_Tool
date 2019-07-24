#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QDebug>
#include <QProcess>
#include <QMessageBox>
#include <QPalette>
#include <QLabel>
#include <QList>
#include <QLineEdit>
#include <QtSql>

#include "globals.h"
#include "load_place.h"
#include "match_place.h"
#include "PCIE.h"

#define MAX 100
#define PCIE_VID                 0x1172
#define PCIE_DID                 0xE001
#define MAX_PCIE_CARD   256
#define DEMO_PCIE_USER_BAR      PCIE_BAR1
#define DEMO_PCIE_IO_ADDR       0x00
#define DEMO_PCIE_FIFO_ID       0x00
#define AUTONUM					13
#define TESTTIME				2499

#define BEGIN 37

struct stepColorLabel
{
     int colornum;
     QList<QLabel*> Colorname;
     QList<QLineEdit*> ColorTextLine;
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool rebuildboard();
    bool connectboard();
    unsigned binToDec(QString);

private slots:
    void on_open_file_triggered();

    void on_test_interface_hide_triggered();

    void on_test_interface_visibilityChanged(bool visible);

    void on_load_place_clicked();

    void on_match_place_clicked();

    void on_connect_clicked();
    
    void on_Load_data_clicked();

    void on_match_begin_clicked();

    void on_clear_01_clicked();

    void on_clear_02_clicked();

    void on_clear_03_clicked();

    void on_clear_04_clicked();

    void on_clear_05_clicked();

    void on_clear_06_clicked();

    void on_count_clicked();

    void on_suspend_clicked();

    void on_Continue_clicked();

    void on_begin_single_clicked();

    void on_begin_deter_clicked();

    void on_begin_c_single_clicked();

    void on_begin_c_deter_clicked();

    void on_memory_reset_clicked();


    void on_read_result_clicked();

    void on_read_c_result_clicked();

    void on_check_state_clicked();

private:
    Ui::MainWindow *ui;
    bool pf_file_open_flag;
    QString pf_file_path;
    QString pf_file_name; //去后缀
    QString item_path;


    QList<int> petri_in[MAX];
    QList<int> petri_out[MAX];

    QProcess myProcess;

    load_place load_place_01;
    match_place match_place_01;
    QString load_reg_96;
    QString match_reg_96;

    QList<QLabel*> stepLabelList;
    QList<QLineEdit*> stepTextLineList;
    QList<stepColorLabel> stepColorLabelList;




};

#endif // MAINWINDOW_H
