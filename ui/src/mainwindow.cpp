#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDesktopWidget>
#include<QPen>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logo=new QPushButton(this);
    title=new QLabel(this);
    searchEdit=new QTextEdit(this);
    searchButton=new QPushButton(this);
    routeButton=new QPushButton(this);
    painter=new QPainter(this);
//    map=new QLabel(this);


    auto devReso=getDeviceResolution();

    //logo
    logo->move(double(devReso[0])*(1.0-GOLDEN_RATIO)/36.0,double(devReso[1])*(1.0-GOLDEN_RATIO)/36.0);
    logo->setFixedSize(1.5*double(devReso[1])*GOLDEN_RATIO/18.0,1.5*double(devReso[1])*GOLDEN_RATIO/18.0);
    QPixmap pixmap(":/images/logo");
    pixmap = pixmap.scaled(logo->width(), logo->width());
    QIcon ButtonIcon(pixmap);
    logo->setIcon(ButtonIcon);
    logo->setIconSize(pixmap.rect().size());

    //title
    title->move(2*logo->x()+logo->width(),logo->y());
    title->setFixedSize(3*logo->width(),logo->width());
    title->setText("IKUNGuiding");

    //topLine
    topLine=new QLabel(this);
    topLine->move(0,logo->y()+logo->width());
    topLine->setFixedSize(devReso[0],2);
    topLine->setText("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


    //    todo: places
}

MainWindow::~MainWindow()
{
    delete ui;
    delete logo;
    delete title;
    delete searchEdit;
    delete searchButton;
    delete map;

}

void MainWindow::resizeEvent(QResizeEvent*) {
    setMyLayout();
}




void MainWindow::setMyLayout(){
    auto devReso=getDeviceResolution();
    auto windowReso=getWindowResolution();

    //searchEdit
    searchEdit->move(title->x()+title->width(),logo->y());
    double length=windowReso[0]*9/16-searchEdit->x();
    double lengthMin=devReso[0]*GOLDEN_RATIO*GOLDEN_RATIO*GOLDEN_RATIO-searchEdit->x();
    length=length<lengthMin?lengthMin:length;
    double newFontSize=searchEdit->fontPointSize()*logo->width()/searchEdit->width();
    searchEdit->setFixedSize(length-logo->width(),logo->width());
//    searchEdit->setFontPointSize(newFontSize);

    //searchbutton
    searchButton->move(searchEdit->x()+searchEdit->width(),logo->y());
    searchButton->setFixedSize(logo->width(),logo->width());
    QPixmap pixmapS(":/images/search");
    pixmapS = pixmapS.scaled(logo->width()-2, logo->width()-2);
    QIcon ButtonIconS(pixmapS);
    searchButton->setIcon(ButtonIconS);
    searchButton->setIconSize(pixmapS.rect().size());

    //routeButton
    routeButton->move(searchEdit->x()+searchEdit->width()+logo->width()+2*logo->x(),logo->y());
    routeButton->setFixedSize(logo->width(),logo->width());
    QPixmap pixmapR(":/images/route");
    pixmapR = pixmapR.scaled(logo->width()-2, logo->width()-2);
    QIcon ButtonIconR(pixmapR);
    routeButton->setIcon(ButtonIconR);
    routeButton->setIconSize(pixmapR.rect().size());

}


std::array<int,2> MainWindow::getDeviceResolution(){
    QDesktopWidget *desktop = QApplication::desktop();
    QRect screen = desktop->screenGeometry();
    int screenWidth = screen.width();
    int screenHeight = screen.height();
    return {screenWidth,screenHeight};
}

std::array<int,2> MainWindow::getWindowResolution(){
    return std::array<int,2>{this->width(),this->height()};
}
