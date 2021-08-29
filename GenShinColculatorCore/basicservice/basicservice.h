#ifndef BASICSERVICE_H
#define BASICSERVICE_H

#include <QObject>

class BasicService : public QObject{
    Q_OBJECT
public:
    typedef enum{
        ELEMENT_TYPE_NONE,
        ELEMENT_TYPE_PYRO,
        ELEMENT_TYPE_ELECTRO,
        ELEMENT_TYPE_HYDRO,
        ELEMENT_TYPE_CRYO,
        ELEMENT_TYPE_ANEMO,
        ELEMENT_TYPE_GEO,
        ELEMENT_TYPE_DENDRO,
    } ELEMENT_TYPE;

    typedef enum{
        WEAPON_TYPE_NONE,
        WEAPON_TYPE_SWORD,
        WEAPON_TYPE_CLAYMORE,
        WEAPON_TYPE_POLEARMS,
        WEAPON_TYPE_CATALYST,
        WEAPON_TYPE_BOW,
    } WEAPON_TYPE;

    typedef enum{
        NATION_TYPE_NONE,
        NATION_TYPE_MONDSTADT,
        NATION_TYPE_LIYUE,
        NATION_TYPE_INAZUMA,
        NATION_TYPE_SUMERU,
        NATION_TYPE_FONTAINE,
        NATION_TYPE_NATLAN,
        NATION_TYPE_SNEZHNAYA,
    } NATION_TYPE;
public:
    explicit BasicService(QObject *parent = nullptr);
signals:

};

#endif // BASICSERVICE_H
