#include "Dialog.h"
#include <QApplication>
#include "VKAuth.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setApplicationName( "Send Request to vk.com" );

    VKAuth vkauth;
    Dialog w;

    QObject::connect( &vkauth, SIGNAL( signalSuccess( QString, QString ) ),
                      &w, SLOT( slotSuccess( QString, QString ) ) );

    vkauth.show( );
    vkauth.func( );

    return a.exec();
}
