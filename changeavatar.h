#ifndef CHANGEAVATAR_H
#define CHANGEAVATAR_H

#include <QDialog>

namespace Ui {
class ChangeAvatar;
}

class ChangeAvatar : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeAvatar(QWidget *parent = nullptr);
    ~ChangeAvatar();

private:
    Ui::ChangeAvatar *ui;
};

#endif // CHANGEAVATAR_H
