#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <QDialog>

namespace Ui {
class Template;
}

class Template : public QDialog
{
    Q_OBJECT

public:
    explicit Template(QWidget *parent = nullptr);
    ~Template();

private:
    Ui::Template *ui;
};

#endif // TEMPLATE_H
