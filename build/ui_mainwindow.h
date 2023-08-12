/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <axbopenglwidget.h>
#include <camera_qweight.h>
#include <hms2000.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *connect_server_pushButton;
    QPushButton *safety_check_pushButton;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QLabel *label_19;
    QLabel *label_16;
    QLabel *tra_r_label;
    QLabel *thr_ur_label;
    QLabel *label_17;
    QLabel *thr_ul_label;
    QLabel *thr_lr_label;
    QLabel *label_18;
    QLabel *tra_l_label;
    QLabel *thr_ll_label;
    QLabel *label;
    QLabel *label_26;
    QLabel *thr_l_label;
    QLabel *label_28;
    QLabel *thr_r_label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *height_label;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *depth_label;
    QLabel *rol_label;
    QLabel *label_6;
    QLabel *label_15;
    QLabel *yaw_label;
    QLabel *pitch_label;
    QLabel *mode_label;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *temperature_label;
    QLabel *label_8;
    QLabel *humidity_label;
    QLabel *label_9;
    QLabel *cpu_temperature_label;
    QLabel *label_10;
    QLabel *water_level_label;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLabel *servo_angle_label;
    QSlider *servo_angle_slider;
    QLabel *label_5;
    QLabel *brightness_label;
    QSlider *brightness_slider;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QPushButton *camera_off_pushButton;
    QPushButton *led_off_pushButton;
    QPushButton *led_on_pushButton;
    QPushButton *sonar_off_pushButton;
    QPushButton *sonar_on_pushButton;
    QPushButton *camera_on_pushButton;
    QPushButton *camera2_on_pushButton;
    QPushButton *camera2_off_pushButton;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_20;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    AXBOpenGLWidget *openGLWidget;
    AXBOpenGLWidget *openGLWidget_yaw;
    camera_qweight *camera2;
    Hms2000 *sonar;
    QLabel *tubiao_label;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    camera_qweight *camera1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1600, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_6 = new QHBoxLayout(centralwidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        connect_server_pushButton = new QPushButton(widget_2);
        connect_server_pushButton->setObjectName(QString::fromUtf8("connect_server_pushButton"));
        connect_server_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        horizontalLayout->addWidget(connect_server_pushButton);

        safety_check_pushButton = new QPushButton(widget_2);
        safety_check_pushButton->setObjectName(QString::fromUtf8("safety_check_pushButton"));
        safety_check_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        horizontalLayout->addWidget(safety_check_pushButton);


        verticalLayout->addWidget(widget_2);

        groupBox_4 = new QGroupBox(widget_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox_4->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 3, 2, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 0, 2, 1, 1);

        tra_r_label = new QLabel(groupBox_4);
        tra_r_label->setObjectName(QString::fromUtf8("tra_r_label"));
        tra_r_label->setFont(font);
        tra_r_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(tra_r_label, 3, 3, 1, 1);

        thr_ur_label = new QLabel(groupBox_4);
        thr_ur_label->setObjectName(QString::fromUtf8("thr_ur_label"));
        thr_ur_label->setFont(font);
        thr_ur_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_ur_label, 0, 3, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 1, 2, 1, 1);

        thr_ul_label = new QLabel(groupBox_4);
        thr_ul_label->setObjectName(QString::fromUtf8("thr_ul_label"));
        thr_ul_label->setFont(font);
        thr_ul_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_ul_label, 0, 1, 1, 1);

        thr_lr_label = new QLabel(groupBox_4);
        thr_lr_label->setObjectName(QString::fromUtf8("thr_lr_label"));
        thr_lr_label->setFont(font);
        thr_lr_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_lr_label, 1, 3, 1, 1);

        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 3, 0, 1, 1);

        tra_l_label = new QLabel(groupBox_4);
        tra_l_label->setObjectName(QString::fromUtf8("tra_l_label"));
        tra_l_label->setFont(font);
        tra_l_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(tra_l_label, 3, 1, 1, 1);

        thr_ll_label = new QLabel(groupBox_4);
        thr_ll_label->setObjectName(QString::fromUtf8("thr_ll_label"));
        thr_ll_label->setFont(font);
        thr_ll_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_ll_label, 1, 1, 1, 1);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_5->addWidget(label_26, 2, 0, 1, 1);

        thr_l_label = new QLabel(groupBox_4);
        thr_l_label->setObjectName(QString::fromUtf8("thr_l_label"));
        thr_l_label->setFont(font);
        thr_l_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_l_label, 2, 1, 1, 1);

        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_5->addWidget(label_28, 2, 2, 1, 1);

        thr_r_label = new QLabel(groupBox_4);
        thr_r_label->setObjectName(QString::fromUtf8("thr_r_label"));
        thr_r_label->setFont(font);
        thr_r_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_5->addWidget(thr_r_label, 2, 3, 1, 1);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        height_label = new QLabel(groupBox);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        height_label->setFont(font);
        height_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(height_label, 1, 3, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 5, 4, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 4, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 4, 1, 1);

        depth_label = new QLabel(groupBox);
        depth_label->setObjectName(QString::fromUtf8("depth_label"));
        depth_label->setFont(font);
        depth_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(depth_label, 0, 3, 1, 1);

        rol_label = new QLabel(groupBox);
        rol_label->setObjectName(QString::fromUtf8("rol_label"));
        rol_label->setFont(font);
        rol_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(rol_label, 5, 5, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 5, 0, 1, 1);

        yaw_label = new QLabel(groupBox);
        yaw_label->setObjectName(QString::fromUtf8("yaw_label"));
        yaw_label->setFont(font);
        yaw_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(yaw_label, 0, 5, 1, 1);

        pitch_label = new QLabel(groupBox);
        pitch_label->setObjectName(QString::fromUtf8("pitch_label"));
        pitch_label->setFont(font);
        pitch_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(pitch_label, 1, 5, 1, 1);

        mode_label = new QLabel(groupBox);
        mode_label->setObjectName(QString::fromUtf8("mode_label"));
        mode_label->setFont(font);
        mode_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout_2->addWidget(mode_label, 5, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        temperature_label = new QLabel(groupBox_2);
        temperature_label->setObjectName(QString::fromUtf8("temperature_label"));
        temperature_label->setFont(font);
        temperature_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout->addWidget(temperature_label, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        humidity_label = new QLabel(groupBox_2);
        humidity_label->setObjectName(QString::fromUtf8("humidity_label"));
        humidity_label->setFont(font);
        humidity_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout->addWidget(humidity_label, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        cpu_temperature_label = new QLabel(groupBox_2);
        cpu_temperature_label->setObjectName(QString::fromUtf8("cpu_temperature_label"));
        cpu_temperature_label->setFont(font);
        cpu_temperature_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout->addWidget(cpu_temperature_label, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        water_level_label = new QLabel(groupBox_2);
        water_level_label->setObjectName(QString::fromUtf8("water_level_label"));
        water_level_label->setFont(font);
        water_level_label->setStyleSheet(QString::fromUtf8("color: rgb(229, 165, 10);"));

        gridLayout->addWidget(water_level_label, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        servo_angle_label = new QLabel(widget_4);
        servo_angle_label->setObjectName(QString::fromUtf8("servo_angle_label"));
        servo_angle_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        gridLayout_4->addWidget(servo_angle_label, 0, 1, 1, 1);

        servo_angle_slider = new QSlider(widget_4);
        servo_angle_slider->setObjectName(QString::fromUtf8("servo_angle_slider"));
        servo_angle_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{ \n"
"         height: 12px; \n"
"         left: 0px; \n"
"         right: 0px; \n"
"         border:0px;    \n"
"         border-radius:6px;\n"
"background:rgba(0,0,0,60);\n"
"\n"
"  } \n"
"\n"
"QSlider::handle:horizontal{ \n"
"        width:  20px; \n"
"         height: 50px;\n"
"		margin-top:0px;\n"
"		margin-bottom:0px;\n"
"	background-color: rgb(255, 150, 0);\n"
"\n"
"\n"
" } \n"
"\n"
" QSlider::sub-page:horizontal{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 170, 0, 255));\n"
"\n"
"border-radius:6px;    \n"
"}"));
        servo_angle_slider->setMinimum(-90);
        servo_angle_slider->setSingleStep(90);
        servo_angle_slider->setValue(0);
        servo_angle_slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(servo_angle_slider, 0, 2, 1, 1);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        brightness_label = new QLabel(widget_4);
        brightness_label->setObjectName(QString::fromUtf8("brightness_label"));
        brightness_label->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 0);"));

        gridLayout_4->addWidget(brightness_label, 1, 1, 1, 1);

        brightness_slider = new QSlider(widget_4);
        brightness_slider->setObjectName(QString::fromUtf8("brightness_slider"));
        brightness_slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{ \n"
"         height: 12px; \n"
"         left: 0px; \n"
"         right: 0px; \n"
"         border:0px;    \n"
"         border-radius:6px;\n"
"background:rgba(0,0,0,60);\n"
"\n"
"  } \n"
"\n"
"QSlider::handle:horizontal{ \n"
"        width:  20px; \n"
"         height: 50px;\n"
"		margin-top:0px;\n"
"		margin-bottom:0px;\n"
"	background-color: rgb(255, 150, 0);\n"
"\n"
"\n"
" } \n"
"\n"
" QSlider::sub-page:horizontal{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 0, 255), stop:1 rgba(255, 170, 0, 255));\n"
"\n"
"border-radius:6px;    \n"
"}"));
        brightness_slider->setValue(50);
        brightness_slider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(brightness_slider, 1, 2, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        camera_off_pushButton = new QPushButton(widget);
        camera_off_pushButton->setObjectName(QString::fromUtf8("camera_off_pushButton"));
        camera_off_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(camera_off_pushButton, 1, 1, 1, 1);

        led_off_pushButton = new QPushButton(widget);
        led_off_pushButton->setObjectName(QString::fromUtf8("led_off_pushButton"));
        led_off_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(led_off_pushButton, 0, 1, 1, 1);

        led_on_pushButton = new QPushButton(widget);
        led_on_pushButton->setObjectName(QString::fromUtf8("led_on_pushButton"));
        led_on_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(led_on_pushButton, 0, 0, 1, 1);

        sonar_off_pushButton = new QPushButton(widget);
        sonar_off_pushButton->setObjectName(QString::fromUtf8("sonar_off_pushButton"));
        sonar_off_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(sonar_off_pushButton, 3, 1, 1, 1);

        sonar_on_pushButton = new QPushButton(widget);
        sonar_on_pushButton->setObjectName(QString::fromUtf8("sonar_on_pushButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        sonar_on_pushButton->setFont(font1);
        sonar_on_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(sonar_on_pushButton, 3, 0, 1, 1);

        camera_on_pushButton = new QPushButton(widget);
        camera_on_pushButton->setObjectName(QString::fromUtf8("camera_on_pushButton"));
        camera_on_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(camera_on_pushButton, 1, 0, 1, 1);

        camera2_on_pushButton = new QPushButton(widget);
        camera2_on_pushButton->setObjectName(QString::fromUtf8("camera2_on_pushButton"));
        camera2_on_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(camera2_on_pushButton, 2, 0, 1, 1);

        camera2_off_pushButton = new QPushButton(widget);
        camera2_off_pushButton->setObjectName(QString::fromUtf8("camera2_off_pushButton"));
        camera2_off_pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	font: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 10px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"}\n"
"\n"
"QPushButton::hover{	\n"
"    color: #FFFFFF;\n"
"    background-color: #718093;\n"
"    border-color: #2f3640;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_6->addWidget(camera2_off_pushButton, 2, 1, 1, 1);


        verticalLayout->addWidget(widget);

        groupBox_3 = new QGroupBox(widget_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_3->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_3->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}\n"
""));

        gridLayout_3->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        gridLayout_3->addWidget(pushButton_5, 3, 0, 1, 1);

        widget_5 = new QWidget(groupBox_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_20 = new QLabel(widget_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_4->addWidget(label_20);

        lineEdit = new QLineEdit(widget_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));

        horizontalLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        horizontalLayout_4->addWidget(pushButton);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        gridLayout_3->addWidget(widget_5, 0, 0, 1, 2);

        widget_6 = new QWidget(groupBox_3);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_21 = new QLabel(widget_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_5->addWidget(label_21);

        lineEdit_2 = new QLineEdit(widget_6);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(222, 221, 218);"));

        horizontalLayout_5->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(widget_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 11pt ;\n"
"	font-weight: bold;\n"
"    color: #2f3640;\n"
"    background-color: #f5f690;\n"
"    border-color: #2f3640;\n"
"    border-radius: 2px;\n"
"    border-style: solid;\n"
"    border-width: 2px;\n"
"    padding: 3px;\n"
"}\n"
"\n"
"QPushButton::pressed,QPushButton::checked{\n"
"    color: #FFFFFF;\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #273c75, stop:1 #487eb0);\n"
"}\n"
"\n"
"QPushButton::disabled{\n"
"    color: #FFFFFF;\n"
"    background-color: #dcdde1;\n"
"    border-color: #dcdde1;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_2);

        horizontalLayout_5->setStretch(0, 2);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        gridLayout_3->addWidget(widget_6, 2, 0, 1, 2);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 1);
        gridLayout_3->setRowStretch(2, 1);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnMinimumWidth(0, 1);
        gridLayout_3->setColumnMinimumWidth(1, 1);
        gridLayout_3->setRowMinimumHeight(0, 1);
        gridLayout_3->setRowMinimumHeight(1, 1);
        gridLayout_3->setRowMinimumHeight(2, 1);

        verticalLayout->addWidget(groupBox_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 4);
        verticalLayout->setStretch(3, 5);
        verticalLayout->setStretch(4, 2);
        verticalLayout->setStretch(5, 4);
        verticalLayout->setStretch(6, 5);

        horizontalLayout_6->addWidget(widget_3);

        widget_9 = new QWidget(centralwidget);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        verticalLayout_2 = new QVBoxLayout(widget_9);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        openGLWidget = new AXBOpenGLWidget(widget_7);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        horizontalLayout_2->addWidget(openGLWidget);

        openGLWidget_yaw = new AXBOpenGLWidget(widget_7);
        openGLWidget_yaw->setObjectName(QString::fromUtf8("openGLWidget_yaw"));

        horizontalLayout_2->addWidget(openGLWidget_yaw);

        camera2 = new camera_qweight(widget_7);
        camera2->setObjectName(QString::fromUtf8("camera2"));
        camera2->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));

        horizontalLayout_2->addWidget(camera2);

        sonar = new Hms2000(widget_7);
        sonar->setObjectName(QString::fromUtf8("sonar"));
        sonar->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 194, 17);"));

        horizontalLayout_2->addWidget(sonar);

        tubiao_label = new QLabel(widget_7);
        tubiao_label->setObjectName(QString::fromUtf8("tubiao_label"));
        tubiao_label->setStyleSheet(QString::fromUtf8("background-color: rgb(153, 193, 241);"));

        horizontalLayout_2->addWidget(tubiao_label);

        horizontalLayout_2->setStretch(0, 21);
        horizontalLayout_2->setStretch(1, 21);
        horizontalLayout_2->setStretch(2, 28);
        horizontalLayout_2->setStretch(3, 24);
        horizontalLayout_2->setStretch(4, 28);

        verticalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        camera1 = new camera_qweight(widget_8);
        camera1->setObjectName(QString::fromUtf8("camera1"));
        camera1->setStyleSheet(QString::fromUtf8("background-color: rgb(97, 53, 131);"));

        horizontalLayout_3->addWidget(camera1);


        verticalLayout_2->addWidget(widget_8);

        verticalLayout_2->setStretch(0, 7);
        verticalLayout_2->setStretch(1, 24);

        horizontalLayout_6->addWidget(widget_9);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ROV_Client_X", nullptr));
        connect_server_pushButton->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        safety_check_pushButton->setText(QCoreApplication::translate("MainWindow", "SAFETY", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "MOTOR STATUS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "THR_LL", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "TRA_R", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "THR_UR", nullptr));
        tra_r_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        thr_ur_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "THR_LR", nullptr));
        thr_ul_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        thr_lr_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "TRA_L", nullptr));
        tra_l_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        thr_ll_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "THR_UL", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "THR_L", nullptr));
        thr_l_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "THR_R", nullptr));
        thr_r_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "ROV STATUS", nullptr));
        height_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "depth:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "rol:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "yaw:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "pitch:", nullptr));
        depth_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rol_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "height:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "mode:", nullptr));
        yaw_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pitch_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        mode_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "STATUS IN CABIN", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "temperature:", nullptr));
        temperature_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "humidity:", nullptr));
        humidity_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "cpu temperature:", nullptr));
        cpu_temperature_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "water level:", nullptr));
        water_level_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "servo", nullptr));
        servo_angle_label->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "LED", nullptr));
        brightness_label->setText(QString());
        camera_off_pushButton->setText(QCoreApplication::translate("MainWindow", "Camera OFF", nullptr));
        led_off_pushButton->setText(QCoreApplication::translate("MainWindow", "LED OFF", nullptr));
        led_on_pushButton->setText(QCoreApplication::translate("MainWindow", "LED ON", nullptr));
        sonar_off_pushButton->setText(QCoreApplication::translate("MainWindow", "Sonar OFF", nullptr));
        sonar_on_pushButton->setText(QCoreApplication::translate("MainWindow", "Sonar ON", nullptr));
        camera_on_pushButton->setText(QCoreApplication::translate("MainWindow", "Camera ON", nullptr));
        camera2_on_pushButton->setText(QCoreApplication::translate("MainWindow", "Detec ON", nullptr));
        camera2_off_pushButton->setText(QCoreApplication::translate("MainWindow", "Deterc OFF", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "ROV CONTROL", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Depth OFF", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Depth Hold", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Attitude OFF", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Attitude Hold", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "target dep", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "target att", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "SET", nullptr));
        tubiao_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
