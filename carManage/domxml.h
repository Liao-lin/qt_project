#ifndef DOMXML_H
#define DOMXML_H
#include<QString>
#include<QStringList>
#include<QDomElement>
#include<QDomDocument>


class DomXML
{
public:
    DomXML();
    static void createXML(const QString path);
    static void appendXML(QString filePath,QStringList list);
    static void writeXML(QDomDocument &doc,QDomElement &root,QStringList &list);
    static void readXML(QString filePath,QStringList &fList,
                        QStringList &bList,
                        QStringList &pList,
                        QStringList &nList,
                        QStringList &tList
                );
};

#endif // DOMXML_H
