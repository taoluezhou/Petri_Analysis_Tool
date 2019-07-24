#include "globals.h"

globals::globals()
{
}
globals::~globals()
{
}
QList<struct Placeplot> globals::placeList;
QList<struct Transitionplot> globals::transitionList;
QList<struct c_Placeplot> globals::c_placeList;
QList<struct c_Transitionplot> globals::c_transitionList;
QList<struct c_arc> globals::arc_pt;
QList<struct c_arc> globals::arc_tp;
QList<struct init_Place> globals::load_place;
QList<struct init_c_Place> globals::load_c_place;
QList<struct match_Place> globals::match_place;
QList<struct match_c_Place> globals::match_c_place;
int globals::item_type=0;//初始为0，普通网1，有色网2
