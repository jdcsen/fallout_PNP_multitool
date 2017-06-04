#include "character_builder.h"
#include "ui_character_builder.h"

Character_builder::Character_builder(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Character_builder)
{
    ui->setupUi(this);
}

Character_builder::~Character_builder()
{
    delete ui;
}
