#ifndef CHARACTER_BUILDER_H
#define CHARACTER_BUILDER_H

#include <QMainWindow>

namespace Ui {
class Character_builder;
}

class Character_builder : public QMainWindow
{
    Q_OBJECT

public:
    explicit Character_builder(QWidget *parent = 0);
    ~Character_builder();

private:
    Ui::Character_builder *ui;
};

#endif // CHARACTER_BUILDER_H
