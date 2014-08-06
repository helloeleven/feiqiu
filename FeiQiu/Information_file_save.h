#ifndef INFORMATION_FILE_SAVE_H
#define INFORMATION_FILE_SAVE_H

#include<QString>
#include <QtDebug>
#include"PersonInformation.h"


template<class _Ty>
class Information_file_save
{
public:
    Information_file_save(QString path,_Ty info = _Ty())
    {
        filePath = path;
        this->info = info;
        file = new QFile(filePath);
    }

    ~Information_file_save()
    {
        delete file;
    }

    bool write()
    {
        qDebug(__func__);
        if(!file->open(QIODevice::WriteOnly))
        {
            return false;
        }
        QDataStream out(file);
        out.setVersion(QDataStream::Qt_4_3);
        out << info;
        file->close();
        return true;
    }

    bool read(_Ty& pInfo)
    {
        qDebug(__func__);
         if(!file->open(QIODevice::ReadOnly))
         {
             return false;
         }

         QDataStream in(file);
         in.setVersion(QDataStream::Qt_4_3);
         in >> pInfo;
         file->close();
         return true;

    }

private:
    QString filePath;
    QFile *file;
    _Ty info;


};



/*

#include<fstream>
using namespace std;

template<class _Ty>
class Information_file_save
{
public:
    Information_file_save(const char*,_Ty);
    void write();
    bool read(_Ty&);

private:
    const char* filePath;
    ofstream fout;
    ifstream fin;
    _Ty info;


};


template<class _Ty>
Information_file_save<_Ty>::Information_file_save(const char* filePath,_Ty info = _Ty())
{
    this->filePath = filePath;
    this->info = info;
}

template<class _Ty>
void Information_file_save<_Ty>::write()
{
    fout.open(filePath, ios::out|ios::binary);
    fout.write((const char*)&info,sizeof(info));
    fout.close();
}

template<class _Ty>
bool Information_file_save<_Ty>::read(_Ty& pInfo)
{
    qDebug(__func__);
    fin.open(filePath,ios::in|ios::binary);
    if(!fin.is_open())
        return false;
    else
    {
        fin.read((char*)&pInfo, sizeof(pInfo));
       // qDebug()<<pInfo.userName;
       // qDebug()<<pInfo.userTelephone;
       // qDebug()<<pInfo.userAddress;
       // qDebug("-----------------------------");
        fin.close();
        return true;

    }
}

*/








#endif // INFORMATION_FILE_SAVE_H
