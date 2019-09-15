#include "datamodell.h"
#include <QListView>
#include <QAbstractListModel>
#include <QApplication>

Datamodell::Datamodell(QObject *parent) :
    QAbstractListModel(parent)
{
    //QString test = "hei";
   // dataStore.push_back(test);

}

QVariant Datamodell::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole){

        return dataStore.at(index.row());
    }
    else{

        return QVariant();
    }
}

int Datamodell::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return dataStore.size();

}

void Datamodell::addValue(QString tittel){
    int row = dataStore.size();
    beginInsertRows(QModelIndex(), row, row);
    dataStore.push_back(tittel);
    endInsertRows();
}

void Datamodell::removeValue(QModelIndex index)
{
    int row = index.row();
    beginRemoveRows(QModelIndex(), row, row);
    dataStore.erase(dataStore.begin()+row);
    endRemoveRows();
}
