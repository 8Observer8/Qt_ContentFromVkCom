#ifndef VKAUTH_H
#define VKAUTH_H

#include <QObject>
#include <QWebView>

class VKAuth : public QWebView
{
    Q_OBJECT

public:
    void func( )
    {
        emit signalSuccess( "Ivan", "123" );
        this->close( );
    }

signals:
    void signalSuccess( const QString &accessToken,
                        const QString &userId );
};

#endif // VKAUTH_H
