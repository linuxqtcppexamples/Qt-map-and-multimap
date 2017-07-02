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
