#ifndef GLOBALS_H
#define GLOBALS_H

#include <QString>
#include <QStringList>
#include <QList>

struct Placeplot
{
    //int ID;
    QString name;
    float x;
    float y;
    QList<int> value;
};

struct Transitionplot
{
    //int ID;
    QString name;
    float x;
    float y;
    QList<int> value;
};

struct color_value
{
    QString name;
    QList<int> value;
};

struct c_Placeplot
{
    //int ID;
    QString name;
    float x;
    float y;
    QStringList color;
    QList<struct color_value> value;
};

struct c_Transitionplot
{
    //int ID;
    QString name;
    float x;
    float y;
    QStringList color;
    QList<struct color_value> value;
};

struct c_arc{
    //int ID;
    int placeID;
    int transitionID;
    QStringList color;
};

struct init_Place
{
    int value;
};

struct color
{
    QString name;
    int value;
};

struct init_c_Place
{
    QList<struct color> color_values;
};

struct match_Place
{
    int value;
};

struct match_c_Place
{
    QList<struct color> color_values;
};

class globals
{
public:
    globals();
    ~globals();
public:
    static QList<struct Placeplot> placeList;
    static QList<struct Transitionplot> transitionList;
    static QList<struct c_Placeplot> c_placeList;
    static QList<struct c_Transitionplot> c_transitionList;
    static QList<struct c_arc> arc_pt;
    static QList<struct c_arc> arc_tp;
    static QList<struct init_Place> load_place;
    static QList<struct init_c_Place> load_c_place;
    static QList<struct match_Place> match_place;
    static QList<struct match_c_Place> match_c_place;
    static int item_type;//初始为0，普通网1，有色网2
};



#endif // GLOBALS_H
