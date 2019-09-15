#ifndef DATAMODELL_H
#define DATAMODELL_H
#include <QListView>
#include <QAbstractListModel>
#include <QApplication>
#include <vector>

class Datamodell : public QAbstractListModel
{

    Q_OBJECT
public:
    explicit Datamodell(QObject *parent = 0);
    QVariant data(const QModelIndex &index, int role) const;
    int rowCount(const QModelIndex &parent) const;


public slots:
    void addValue(QString tittel);
    void removeValue(QModelIndex index);
private:
    std::vector<QString> dataStore;
    //QString
};

#endif // DATAMODELL_H
