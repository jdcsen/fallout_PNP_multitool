#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "character_builder.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_char_create_button_released()
{
    launch_char_builder();
}

void MainWindow::launch_char_builder()
{
    Character_builder builder;
    builder.show();
}


