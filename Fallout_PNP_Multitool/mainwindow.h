#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <character_builder.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_char_create_button_released();

    void on_char_create_button_clicked();

private:
    Ui::MainWindow *ui;
    Character_builder m_builder;
    void launch_char_builder();
};

#endif // MAINWINDOW_H
