#ifndef UNIVERSAL_HEADER_H
#define UNIVERSAL_HEADER_H

#include <QString>
typedef struct
{
    QString name;
    QString user_name;
    QString passwd;
    QString gender;
    QString age;
}info;

extern info personal_data;


#endif // UNIVERSAL_HEADER_H
