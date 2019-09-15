#ifndef COMPOSEMAIL_H
#define COMPOSEMAIL_H

#include <QWidget>
#include <QtWidgets>
#include <iostream>

class composeMail : public QWidget
{
    Q_OBJECT
public:
    explicit composeMail(QWidget *parent = 0);
     bool lagmail;

     QString To;
     QString sub;
     QString innhold;




private:
    QVBoxLayout *mailhoved;
    QGridLayout *topp;
    QHBoxLayout *tekst;
    QHBoxLayout *bunn;

    QLineEdit *adresse;
    QLineEdit *subject;
    QTextEdit *txt;

    QPushButton *send;
    QPushButton *cancel;




signals:


public slots:

    void sendmsg();
};

#endif // COMPOSEMAIL_H
