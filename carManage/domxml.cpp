#include "domxml.h"
#include<QFile>
#include<QDomDocument>
#include<QDomProcessingInstruction>  //格式头部
#include<QDomElement>
#include<QDebug>
#include<QMessageBox>
#include<QTextStream>   //文本流
#include<QDateTime>

DomXML::DomXML()
{

}

void DomXML::createXML(const QString path)  //创建xml空文件
{
    QFile file(path);
    if(true == file.exists())//如果文件存在则不进行创建
    {
        //QMessageBox::warning(NULL,"错误","xml文件已经存在");

        qDebug()<<"文件已经存在";
        return;
    }
    else
    {
        bool isOK = file.open (QIODevice::WriteOnly);//如果不存在只写方式打开文件
        if(isOK)    //若成功
        {
            //创建xml文件对象
            QDomDocument doc;

            //创建xml文件头部格式
            QDomProcessingInstruction ins;
            ins =doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"utf-8\"");

            doc.appendChild(ins);    //追加元素

            //根节点元素
            QDomElement root =doc.createElement("日销售清单");
            doc.appendChild(root);

            //保存
            QTextStream stream(&file);     //文本关联文件
            doc.save(stream,4);            //4个字符缩进
            file.close();


        }
        else
        {
            QMessageBox::warning(NULL,"错误","打开失败");
            //qDebug()<<"打开失败";
        }
    }

}

//list.at(0)为厂家  如一汽   添加xml文件
void DomXML::appendXML(QString filePath, QStringList list)
{
    QFile file(filePath);
    bool isOk =file.open(QIODevice::ReadOnly);
    if (true == isOk)
    {
        //file和xml文档对象关联
        QDomDocument doc;
       bool isOK_1=doc.setContent(&file);
       if(isOK_1) //如果关联成功
       {
          file.close();//已经关联，可以关闭文件

          //获取根节点元素
          QDomElement root =doc.documentElement();

          //获取当前时间
          QDateTime date = QDateTime::currentDateTime();
          QString dateStr = date.toString("yyyy-MM-dd");

          //判断当前根节点有没有子节点
          if(root.hasChildNodes())     //若有子节点查找最后一个子节点元素
          {
              //QMessageBox::warning(NULL,"错误","当前有子节点");
             // return;

              //查找最后一个子节点并看是否为当天日期
              QDomElement lastEmt = root.lastChildElement();
              if(lastEmt.attribute("date")==dateStr)
                  {//有当天日期，直接写入
                  writeXML(doc,lastEmt,list);
              }
              else{ //如果不是当天日期，则创建一些预先的日期格式
                  //创建日期子节点元素
                  QDomElement dateEmt = doc.createElement("日期");

                  //创建日期属性
                  QDomAttr dateAttr = doc.createAttribute("date");

                  //创建属性的值
                  dateAttr.setNodeValue(dateStr);

                  //关联日期属性和结点
                  dateEmt.setAttributeNode(dateAttr);

                  //把日期节点添加到根节点
                  root.appendChild(dateEmt);

                  //写入文件内容
                  writeXML(doc,dateEmt,list);
              }
          }
          else   //没有子节点
          {
              //创建日期子节点元素
              QDomElement dateEmt = doc.createElement("日期");

              //创建日期属性
              QDomAttr dateAttr = doc.createAttribute("date");

              //创建属性的值
              dateAttr.setNodeValue(dateStr);

              //关联日期属性和结点
              dateEmt.setAttributeNode(dateAttr);

              //把日期节点添加到根节点
              root.appendChild(dateEmt);

              //写入文件内容
              writeXML(doc,dateEmt,list);
          }

          //保存下
          bool isOK_2 =file.open(QIODevice::WriteOnly);
          if(isOK_2)
          {
              QTextStream stream(&file);
              doc.save(stream,4);
              file.close();
          }
       }
       else {
         QMessageBox::warning(NULL,"错误","xml关联失败");
       }
    }
    else {
       QMessageBox::warning(NULL,"错误","打开已存在的xml错误");
    }
}

void DomXML::writeXML(QDomDocument &doc, QDomElement &root, QStringList &list)
{
    //获取当前时间
    QDateTime time = QDateTime::currentDateTime();
    QString timeStr = time.toString("hh-mm-ss");  //时分秒

    //创建日期子节点元素
    QDomElement timeEmt = doc.createElement("时间");

    //创建日期属性
    QDomAttr timeAttr = doc.createAttribute("time");

    //创建属性的值
    timeAttr.setNodeValue(timeStr);

    //关联日期属性和结点
    timeEmt.setAttributeNode(timeAttr);

    //把日期节点添加到根节点
    root.appendChild(timeEmt);

    QDomElement factory = doc.createElement("厂家");
    QDomElement brand = doc.createElement("品牌");
    QDomElement price = doc.createElement("报价");
    QDomElement number = doc.createElement("数量");
    QDomElement total = doc.createElement("金额");

    //依次添加传入的信息
    QDomText text =doc.createTextNode(list.at(0));
    factory.appendChild(text);

    text =doc.createTextNode(list.at(1));
    brand.appendChild(text);

    text =doc.createTextNode(list.at(2));
    price.appendChild(text);

    text =doc.createTextNode(list.at(3));
    number.appendChild(text);

    text =doc.createTextNode(list.at(4));
    total.appendChild(text);

    //添加到时间结点下
    timeEmt.appendChild(factory);
    timeEmt.appendChild(brand);
    timeEmt.appendChild(price);
    timeEmt.appendChild(number);
    timeEmt.appendChild(total);
}

void DomXML::readXML(QString filePath, QStringList &fList, QStringList &bList, QStringList &pList, QStringList &nList, QStringList &tList)
{
    QFile file(filePath);
    bool isOk =file.open(QIODevice::ReadOnly);
    if (true == isOk)
    {
        //file和xml文档对象关联
        QDomDocument doc;
       bool isOK_1=doc.setContent(&file);
       if(isOK_1) //如果关联成功
       {
           //获取根节点
           QDomElement root =doc.documentElement();
           file.close();
           
           QDateTime date = QDateTime::currentDateTime();
           QString dateStr = date.toString("yyyy-MM-dd");
           
           if(root.hasChildNodes())   //如果有子节点
               {
               //找最后一个节点元素
               QDomElement lastEmt =root.lastChildElement() ; 
                if(lastEmt.attribute("date")==dateStr)
                {
                    //找出当前日期下的所有时间子节点
                    QDomNodeList  list =lastEmt.childNodes();
                    for(int i =0;i<list.size();i++)
                    {
                        //转换为元素，并找到时间节点下的所有子节点
                        QDomNodeList subList =list.at(i).toElement().childNodes();
                        //厂家
                        QString factory=subList.at(0).toElement().text();
                        fList.append(factory);
                        
                        QString brand=subList.at(1).toElement().text();
                        bList.append(brand);
                        
                        QString price=subList.at(2).toElement().text();
                        pList.append(price);
                        
                        QString num=subList.at(3).toElement().text();
                        nList.append(num);
                        
                        QString total=subList.at(4).toElement().text();
                        tList.append(total);
                        
                    } 
                }
           }
           else{
               qDebug()<<"没有子节点";
               return;
           }
       }
       else//如果关联失败
       {
           qDebug()<<"readXML时关联失败";
       }
     }
    else
    {
        qDebug()<<"readxml时打开失败";
        return;
    }
}



