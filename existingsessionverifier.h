#ifndef EXISTINGSESSIONVERIFIER_H
#define EXISTINGSESSIONVERIFIER_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class ExistingSessionVerifier;
}

class ExistingSessionVerifier : public QDialog
{
    Q_OBJECT

public:
    explicit ExistingSessionVerifier(QWidget *parent , loggedUser &currentLoggedInUser,
                                     QString &sessionType, int &drawerCash, QDateTime& OpeningTime);
    ~ExistingSessionVerifier();

private slots:
    void on_btnContinueSession_clicked();

    void on_btnEndSession_clicked();

    void on_btnCancel_clicked();

private:
    Ui::ExistingSessionVerifier *ui;
};

#endif // EXISTINGSESSIONVERIFIER_H
