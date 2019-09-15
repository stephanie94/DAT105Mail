#include "mailclient.h"
#include <QtWidgets>
#include <QVBoxLayout>
#include <iostream>
#include <composemail.h>
#include <datamodell.h>

mailClient::mailClient(QWidget *parent) : QWidget(parent)
{


   vindu = new QHBoxLayout(this);
   venstrevindu=new QHBoxLayout();
   hoyrevindu = new QVBoxLayout();

   text = new QListView();
   mod = new Datamodell();
   text->setModel(mod);


   QPushButton *check = new QPushButton("Check");
   connect(check, SIGNAL(clicked()), this, SLOT(check()));


   QPushButton *slett = new QPushButton("Delete");
   connect(slett, SIGNAL(clicked()), this, SLOT(slett()));


   QPushButton *ny = new QPushButton("New...");
   connect(ny, SIGNAL(clicked()), this, SLOT(ny()));

   window = new composeMail();


   venstrevindu->addWidget(text);
   hoyrevindu->addWidget(check);
   hoyrevindu->addWidget(slett);
   hoyrevindu->addWidget(ny);
   hoyrevindu->addStretch();

   vindu->addLayout(venstrevindu);
   vindu->addLayout(hoyrevindu);


}


void mailClient::check()
{

    mod->addValue(window->To);


}

void mailClient::slett()
{


}

void mailClient::ny()
{

    window->show();


}


