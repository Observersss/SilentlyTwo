#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "RPGspace/rpgspace.h"  // Включаем заголовок RpgSpace
#include "Notespace/notespace.h"  // Включаем заголовок NoteSpace
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_change_space_clicked();

private:
    Ui::MainWindow *ui;
    Character character;
};
#endif // MAINWINDOW_H
