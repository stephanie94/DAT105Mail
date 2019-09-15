#include <QApplication>
#include <QtWidgets>
#include <mailclient.h>
#include <composemail.h>
#include <datamodell.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    mailClient *window = new mailClient();


    window->resize(400,300);
    window->show();


    return app.exec();
}
