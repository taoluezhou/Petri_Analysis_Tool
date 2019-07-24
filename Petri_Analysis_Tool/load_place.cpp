#include "load_place.h"
#include "ui_load_place.h"

load_place::load_place(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::load_place)
{
    ui->setupUi(this);
    setWindowTitle("Load");

    //QColor backcolor(255,255,255);
}

load_place::~load_place()
{
    delete ui;
}

void load_place::on_load_clicked()
{    
    if(globals::item_type==1)
    {
        globals::load_place.clear();
        int placenum=globals::placeList.count();
        for(int i=0;i<placenum;i++)
        {
            struct init_Place newload_place;
            newload_place.value=TextLineList[i]->text().toInt();
            globals::load_place<<newload_place;
            //qDebug()<<globals::load_place[i].value;
        }
    }
    else if(globals::item_type==2)
    {
        globals::load_c_place.clear();
        int placenum=globals::c_placeList.count();
        for(int i=0;i<placenum;i++)
        {
            struct init_c_Place newinit_c_Place;
            for(int j=0;j<globals::c_placeList[i].color.count();j++)
            {
                struct color newcolor;
                newcolor.name=globals::c_placeList[i].color[j];
                newcolor.value=ColorLabelList[i].ColorTextLine[j]->text().toInt();
                newinit_c_Place.color_values<<newcolor;
            }
            globals::load_c_place<<newinit_c_Place;
            //qDebug()<<globals::load_c_place[i].color_values[0].name;
            //qDebug()<<globals::load_c_place[i].color_values[0].value;
        }        
    }
}

void load_place::on_begin_clicked()
{
    if(globals::item_type==1)
    {
        globals::load_c_place.clear();
        int axis_y=10;
        int placenum=globals::placeList.count();
        for(int i=0;i<placenum;i++)
        {
            QLabel *newlabel=new QLabel(globals::placeList[i].name,ui->input_zone);
            newlabel->setGeometry(20,axis_y,20,30);
            LabelList<<newlabel;
            LabelList[i]->show();
            QLineEdit *newLineEdit=new  QLineEdit("0",ui->input_zone);
            TextLineList<<newLineEdit;
            TextLineList[i]->setGeometry(50,axis_y,100,30);
            TextLineList[i]->setClearButtonEnabled(true);
            TextLineList[i]->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
            TextLineList[i]->show();
            axis_y+=50;
        }
        ui->input_zone->setMinimumSize(150,axis_y);
    }
    else if(globals::item_type==2)
    {
        globals::load_c_place.clear();
        int axis_y=10;
        int axis_x_max=0;
        int placenum=globals::c_placeList.count();
        for(int i=0;i<placenum;i++)
        {
            int axis_x=20;
            QLabel *newlabel=new QLabel(globals::c_placeList[i].name,ui->input_zone);
            newlabel->setGeometry(axis_x,axis_y,20,30);
            LabelList<<newlabel;
            LabelList[i]->show();
            axis_y+=30;
            struct ColorLabel newColorLabel;
            newColorLabel.colornum=globals::c_placeList[i].color.count();
            for(int j=0;j<newColorLabel.colornum;j++)
            {
                QLabel *newcolorlabel=new QLabel(globals::c_placeList[i].color[j],ui->input_zone);
                newcolorlabel->setGeometry(axis_x,axis_y,50,30);
                newColorLabel.Colorname<<newcolorlabel;
                newColorLabel.Colorname[j]->show();
                axis_x+=50;
                QLineEdit *newcolorLineEdit=new  QLineEdit("0",ui->input_zone);
                newColorLabel.ColorTextLine<<newcolorLineEdit;
                newColorLabel.ColorTextLine[j]->setGeometry(axis_x,axis_y,100,30);
                newColorLabel.ColorTextLine[j]->setClearButtonEnabled(true);
                newColorLabel.ColorTextLine[j]->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
                newColorLabel.ColorTextLine[j]->show();
                axis_x+=105;
            }
            if(axis_x-100>axis_x_max)
            {
               axis_x_max=axis_x-100;
            }
            ColorLabelList<<newColorLabel;
            axis_y+=50;
        }
        ui->input_zone->setMinimumSize(axis_x_max,axis_y);
    }
}
