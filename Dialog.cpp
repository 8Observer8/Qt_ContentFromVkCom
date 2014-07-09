
#include <QDebug>
#include "Dialog.h"
#include "ui_Dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::slotSuccess(const QString &accessToken, const QString &userId)
{
    this->show( );
    m_auth.setAccessToken( accessToken );
    m_auth.setUserId( userId );
    qDebug() << m_auth.accessToken( );
    qDebug() << m_auth.userId( );
}
