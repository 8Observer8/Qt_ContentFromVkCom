#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "Authorization.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void slotSuccess( const QString &accessToken,
                      const QString &userId);

private:
    Ui::Dialog *ui;
    Authorization m_auth;
};

#endif // DIALOG_H
