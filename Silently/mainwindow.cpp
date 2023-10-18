#include "mainwindow.h"
#include "./ui_mainwindow.h"

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


void MainWindow::on_change_space_clicked()
{
    if(ui->spaces->currentIndex()==1)
    {
        ui->spaces->setCurrentIndex(0);
        ui->change_space->setText("Go Notes");
        ui->info->setText("Space now: RPG");
    } else
    {
        ui->spaces->setCurrentIndex(1);
        ui->change_space->setText("Go RPG");
        ui->info->setText("Space now: Notes");
    }
}

