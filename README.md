# Qt-map-and-multimap
Difference between map and multimap with example

QMap

QMap<Key, T> This provides a dictionary (associative array) that maps keys of type Key to values of type T. Normally each key is associated with a single value. QMap stores its data in Key order; if order doesn't matter QHash is a faster alternative.

QMultiMap

QMultiMap<Key, T> This is a convenience subclass of QMap that provides a nice interface for multi-valued maps, i.e. maps where one key can be associated with multiple values.

Example:

multimapex.pro

QT += core
QT -= gui
CONFIG += c++11
TARGET = multimapex
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
SOURCES += main.cpp
main.cpp
#include <QCoreApplication>
#include <QMap>
#include <QDebug>
#include <QMultiMap>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString,QString> map;
    map.insert("first","1");
    map.insert("FIRST","1");
    map.insert("first","1");
    qDebug() << "Map: " << map.keys();
 
    QMultiMap<QString,QString> multimap;
    multimap.insert("first","1");
    multimap.insert("FIRST","1");
    multimap.insert("first","1");
    qDebug() << "Multi Map: " << multimap.keys();
    return a.exec();
}
//Output:
//Map: FIRST,first
//Multi Map: first,FIRST,first
Download  multimapex source code.
