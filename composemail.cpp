#include "composemail.h"
#include <iostream>

composeMail::composeMail(QWidget *parent) : QWidget(parent)
{

    mailhoved = new QVBoxLayout(this);
    topp = new QGridLayout();
    tekst = new QHBoxLayout();
    bunn = new QHBoxLayout();

    QLabel* labelTo = new QLabel("Til: ");
    QLabel* labelSubject = new QLabel("Emne:");

    adresse = new QLineEdit();
    subject = new QLineEdit();

    labelTo->setBuddy(adresse);
    labelSubject->setBuddy(subject);

    topp->addWidget(labelTo, 0,0);
    topp->addWidget(adresse,0,1);
    topp->addWidget(labelSubject,1, 0);
    topp->addWidget(subject, 1, 1);


    txt = new QTextEdit();
    tekst->addWidget(txt);

    send = new QPushButton("Send");
    connect(send, SIGNAL(clicked()), this, SLOT(sendmsg()));
    cancel = new QPushButton("Cancel");
    connect(cancel, SIGNAL(clicked()), this, SLOT(close()));

    bunn->addWidget(send);
    bunn->addWidget(cancel);

    mailhoved->addLayout(topp);
    mailhoved->addLayout(tekst);
    mailhoved->addLayout(bunn);



}

void composeMail::sendmsg()
{

    To = adresse->text();
}
