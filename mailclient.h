#ifndef MAILCLIENT_H
#define MAILCLIENT_H

#include <QtWidgets>
#include <datamodell.h>
#include <composemail.h>

class mailClient : public QWidget
{
    Q_OBJECT
public:
    explicit mailClient(QWidget *parent = 0);
    void addmodell(Datamodell mod);


private:

   QHBoxLayout *vindu;
   QHBoxLayout *venstrevindu;
   QVBoxLayout *hoyrevindu;
   QListView *text;
   composeMail *window;
   Datamodell *mod;





signals:






public slots:

   void check();
   void slett();
   void ny();



};

#endif // MAILCLIENT_H
