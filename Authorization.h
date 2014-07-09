#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QString>

class Authorization
{
public:
    Authorization( ) :
        m_accessToken( "" ),
        m_userId( "" )
    {

    }

    QString accessToken( ) const
    {
        return m_accessToken;
    }

    QString userId( ) const
    {
        return m_userId;
    }

    void setAccessToken( const QString &accessToken )
    {
        m_accessToken = accessToken;
    }

    void setUserId( const QString &userId )
    {
        m_userId = userId;
    }

private:
    QString m_accessToken;
    QString m_userId;
};

#endif // AUTHORIZATION_H
