#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<array>
#include<vector>
#include<QDebug>
#include<QLabel>
#include<QTextEdit>
#include<QPushButton>
#include<string>
#include<QPainter>

constexpr double GOLDEN_RATIO=0.618;
//const char* LOGO_PATH="../pictures/logo.png";

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    //
    virtual void resizeEvent(QResizeEvent*) override final;


    Ui::MainWindow *ui;

    //控件
    QPushButton* logo;
    QLabel* title;
    QTextEdit* searchEdit;
    QPushButton* searchButton;
    QPushButton* routeButton;
    QPainter* painter;
    QLabel* topLine;
    QLabel* map;
    std::vector<QPushButton> places;
    //todo: 比例尺 放缩按钮

    //显示参数
    std::array<double,2> mapCenterPoint;
    std::array<double,2> mapRect;

    //功能函数
    std::array<int,2> getDeviceResolution();
    std::array<int,2> getWindowResolution();
    void setMyLayout();
};
#endif // MAINWINDOW_H
