/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QGridLayout *gridLayout_2;
  QScrollArea *scrollArea;
  QWidget *scrollAreaWidgetContents_2;
  QGridLayout *gridLayout;
  QVBoxLayout *DowloadImages;
  QLabel *label_downloadImage;
  QHBoxLayout *format;
  QLabel *labelImage;
  QSplitter *splitter_4;
  QRadioButton *radioButton_jpgFormat;
  QRadioButton *radioButton_bmpFormat;
  QPushButton *pushButton_downloadImage;
  QSpacerItem *horizontalSpacer_4;
  QVBoxLayout *ProectionType;
  QLabel *label_projectionType;
  QHBoxLayout *horizontalLayout_2;
  QSplitter *splitter;
  QRadioButton *radioButton_orthogonal;
  QRadioButton *radioButton_perspective;
  QSpacerItem *horizontalSpacer_7;
  QVBoxLayout *FileInformation;
  QVBoxLayout *FileInformation_2;
  QLabel *label_fileInfo;
  QHBoxLayout *filePath_layout;
  QLabel *label_filepath;
  QLabel *label_filepathInfo;
  QHBoxLayout *verticesNumber_layout;
  QLabel *label_vertices_num;
  QLabel *label_verticesInfo;
  QHBoxLayout *edgesNumber_layout;
  QLabel *label_edges;
  QLabel *label_edgesNumber;
  QHBoxLayout *upload_reset;
  QPushButton *open_file;
  QPushButton *scaleToDefault;
  QVBoxLayout *Edges;
  QVBoxLayout *layout_edgesWidth;
  QLabel *label_settingsEdge;
  QHBoxLayout *horizontalLayout_14;
  QLabel *labelEdge_width;
  QSpinBox *edgeWidth_spinbox;
  QSlider *edgeWidth_slider;
  QHBoxLayout *type;
  QLabel *labelEdge_type;
  QSplitter *splitter_2;
  QRadioButton *radioButton_dotted;
  QRadioButton *radioButton_constant;
  QVBoxLayout *MoveModel;
  QLabel *label_transformModel_2;
  QHBoxLayout *MoveSX;
  QLabel *axisX_rotate_label_2;
  QDoubleSpinBox *moveXInput;
  QSlider *MoveSliderX;
  QHBoxLayout *MoveSY;
  QLabel *axisY_rotate_label_3;
  QDoubleSpinBox *moveYInput;
  QSlider *MoveSliderY;
  QHBoxLayout *MoveSlZ;
  QLabel *axisZ_rotate_label_4;
  QDoubleSpinBox *moveZInput;
  QSlider *MoveSliderZ;
  QVBoxLayout *layout_rotateModel;
  QLabel *label_transformModel;
  QHBoxLayout *horizontalLayout_5;
  QLabel *axisX_rotate_label;
  QDoubleSpinBox *rotateXInput;
  QSlider *rotationX_slider;
  QHBoxLayout *horizontalLayout_6;
  QLabel *axisY_rotate_label;
  QDoubleSpinBox *rotateYInput;
  QSlider *rotationY_slider;
  QHBoxLayout *horizontalLayout_7;
  QLabel *axisZ_rotate_label;
  QDoubleSpinBox *rotateZInput;
  QSlider *rotationZ_slider;
  QVBoxLayout *layout_scalingModel;
  QLabel *label_scaleModel;
  QHBoxLayout *horizontalLayout_9;
  QLabel *labelScaleInput;
  QDoubleSpinBox *scaleSpinBox;
  QLabel *label;
  QSlider *scaleSlider;
  QHBoxLayout *layout_edgesColor;
  QLabel *labelEdge_color;
  QLabel *label_colorEdges;
  QPushButton *pushButton_colorEdge;
  QSpacerItem *horizontalSpacer;
  QVBoxLayout *Vertices;
  QLabel *label_settingsVerticle;
  QHBoxLayout *horizontalLayout_4;
  QLabel *labelVerticle_type;
  QSplitter *splitter_3;
  QRadioButton *radioButton_noneVertice;
  QRadioButton *radioButton_circleVertice;
  QRadioButton *radioButton_squareVertice;
  QSpacerItem *horizontalSpacer_5;
  QHBoxLayout *horizontalLayout_18;
  QLabel *labelVertice_size;
  QSpinBox *verticeSize_spinbox;
  QSlider *verticeSize_slider;
  QHBoxLayout *horizontalLayout_19;
  QLabel *labelVertice_color;
  QLabel *label_colorVertice;
  QPushButton *pushButton_colorVertice;
  QSpacerItem *horizontalSpacer_2;
  QVBoxLayout *layout_recordingGif;
  QLabel *label_recordGif;
  QHBoxLayout *horizontalLayout;
  QPushButton *pushButton_Gif_mode_1;
  QPushButton *pushButton_Gif_mode_2;
  QVBoxLayout *layout_BackgroundColor;
  QLabel *label_backColor;
  QHBoxLayout *layout_BackgroundColor2;
  QLabel *labelBackg_color;
  QLabel *label_colorBackg;
  QPushButton *pushButton_colorBackg;
  QSpacerItem *horizontalSpacer_3;
  GLWidget *openGLWidget;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->setEnabled(true);
    MainWindow->resize(1583, 919);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
    MainWindow->setSizePolicy(sizePolicy);
    MainWindow->setWindowOpacity(1.000000000000000);
    MainWindow->setToolTipDuration(0);
    MainWindow->setStyleSheet(QString::fromUtf8(""));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    sizePolicy.setHeightForWidth(
        centralwidget->sizePolicy().hasHeightForWidth());
    centralwidget->setSizePolicy(sizePolicy);
    centralwidget->setToolTipDuration(0);
    gridLayout_2 = new QGridLayout(centralwidget);
    gridLayout_2->setSpacing(0);
    gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
    gridLayout_2->setContentsMargins(-1, 0, 0, 0);
    scrollArea = new QScrollArea(centralwidget);
    scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
    scrollArea->setMinimumSize(QSize(431, 0));
    scrollArea->setMaximumSize(QSize(430, 16777215));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents_2 = new QWidget();
    scrollAreaWidgetContents_2->setObjectName(
        QString::fromUtf8("scrollAreaWidgetContents_2"));
    scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 415, 938));
    gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    DowloadImages = new QVBoxLayout();
    DowloadImages->setObjectName(QString::fromUtf8("DowloadImages"));
    label_downloadImage = new QLabel(scrollAreaWidgetContents_2);
    label_downloadImage->setObjectName(
        QString::fromUtf8("label_downloadImage"));
    QFont font;
    font.setBold(true);
    label_downloadImage->setFont(font);

    DowloadImages->addWidget(label_downloadImage);

    format = new QHBoxLayout();
    format->setObjectName(QString::fromUtf8("format"));
    labelImage = new QLabel(scrollAreaWidgetContents_2);
    labelImage->setObjectName(QString::fromUtf8("labelImage"));
    labelImage->setMinimumSize(QSize(50, 0));
    labelImage->setMaximumSize(QSize(50, 16777215));
    QFont font1;
    font1.setItalic(true);
    labelImage->setFont(font1);

    format->addWidget(labelImage);

    splitter_4 = new QSplitter(scrollAreaWidgetContents_2);
    splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
    splitter_4->setOrientation(Qt::Horizontal);
    radioButton_jpgFormat = new QRadioButton(splitter_4);
    radioButton_jpgFormat->setObjectName(
        QString::fromUtf8("radioButton_jpgFormat"));
    radioButton_jpgFormat->setMaximumSize(QSize(75, 16777215));
    radioButton_jpgFormat->setChecked(true);
    splitter_4->addWidget(radioButton_jpgFormat);
    radioButton_bmpFormat = new QRadioButton(splitter_4);
    radioButton_bmpFormat->setObjectName(
        QString::fromUtf8("radioButton_bmpFormat"));
    radioButton_bmpFormat->setMaximumSize(QSize(75, 16777215));
    splitter_4->addWidget(radioButton_bmpFormat);

    format->addWidget(splitter_4);

    pushButton_downloadImage = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_downloadImage->setObjectName(
        QString::fromUtf8("pushButton_downloadImage"));
    pushButton_downloadImage->setMaximumSize(QSize(75, 16777215));

    format->addWidget(pushButton_downloadImage);

    horizontalSpacer_4 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    format->addItem(horizontalSpacer_4);

    DowloadImages->addLayout(format);

    gridLayout->addLayout(DowloadImages, 9, 0, 1, 1);

    ProectionType = new QVBoxLayout();
    ProectionType->setObjectName(QString::fromUtf8("ProectionType"));
    label_projectionType = new QLabel(scrollAreaWidgetContents_2);
    label_projectionType->setObjectName(
        QString::fromUtf8("label_projectionType"));
    label_projectionType->setFont(font);
    label_projectionType->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #4A708B;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #16A085, stop:1 #1ABC9C);\n"
                          "    border: 1px solid #148F77;\n"
                          "    width: 10px;\n"
                          "    margin: -2px 0;\n"
                          "    border-radius: 3px;\n"
                          "}"));

    ProectionType->addWidget(label_projectionType);

    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    splitter = new QSplitter(scrollAreaWidgetContents_2);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setOrientation(Qt::Horizontal);
    radioButton_orthogonal = new QRadioButton(splitter);
    radioButton_orthogonal->setObjectName(
        QString::fromUtf8("radioButton_orthogonal"));
    radioButton_orthogonal->setCheckable(true);
    radioButton_orthogonal->setChecked(false);
    splitter->addWidget(radioButton_orthogonal);
    radioButton_perspective = new QRadioButton(splitter);
    radioButton_perspective->setObjectName(
        QString::fromUtf8("radioButton_perspective"));
    radioButton_perspective->setChecked(true);
    splitter->addWidget(radioButton_perspective);

    horizontalLayout_2->addWidget(splitter);

    horizontalSpacer_7 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_2->addItem(horizontalSpacer_7);

    ProectionType->addLayout(horizontalLayout_2);

    gridLayout->addLayout(ProectionType, 4, 0, 1, 1);

    FileInformation = new QVBoxLayout();
    FileInformation->setObjectName(QString::fromUtf8("FileInformation"));
    FileInformation_2 = new QVBoxLayout();
    FileInformation_2->setObjectName(QString::fromUtf8("FileInformation_2"));
    label_fileInfo = new QLabel(scrollAreaWidgetContents_2);
    label_fileInfo->setObjectName(QString::fromUtf8("label_fileInfo"));
    label_fileInfo->setMaximumSize(QSize(16777215, 20));
    label_fileInfo->setFont(font);

    FileInformation_2->addWidget(label_fileInfo);

    filePath_layout = new QHBoxLayout();
    filePath_layout->setSpacing(0);
    filePath_layout->setObjectName(QString::fromUtf8("filePath_layout"));
    label_filepath = new QLabel(scrollAreaWidgetContents_2);
    label_filepath->setObjectName(QString::fromUtf8("label_filepath"));
    label_filepath->setMinimumSize(QSize(0, 15));
    label_filepath->setMaximumSize(QSize(70, 16777215));
    label_filepath->setFont(font1);

    filePath_layout->addWidget(label_filepath);

    label_filepathInfo = new QLabel(scrollAreaWidgetContents_2);
    label_filepathInfo->setObjectName(QString::fromUtf8("label_filepathInfo"));

    filePath_layout->addWidget(label_filepathInfo);

    FileInformation_2->addLayout(filePath_layout);

    verticesNumber_layout = new QHBoxLayout();
    verticesNumber_layout->setSpacing(0);
    verticesNumber_layout->setObjectName(
        QString::fromUtf8("verticesNumber_layout"));
    label_vertices_num = new QLabel(scrollAreaWidgetContents_2);
    label_vertices_num->setObjectName(QString::fromUtf8("label_vertices_num"));
    label_vertices_num->setMinimumSize(QSize(15, 15));
    label_vertices_num->setMaximumSize(QSize(110, 16777215));
    label_vertices_num->setFont(font1);

    verticesNumber_layout->addWidget(label_vertices_num);

    label_verticesInfo = new QLabel(scrollAreaWidgetContents_2);
    label_verticesInfo->setObjectName(QString::fromUtf8("label_verticesInfo"));

    verticesNumber_layout->addWidget(label_verticesInfo);

    FileInformation_2->addLayout(verticesNumber_layout);

    edgesNumber_layout = new QHBoxLayout();
    edgesNumber_layout->setSpacing(0);
    edgesNumber_layout->setObjectName(QString::fromUtf8("edgesNumber_layout"));
    label_edges = new QLabel(scrollAreaWidgetContents_2);
    label_edges->setObjectName(QString::fromUtf8("label_edges"));
    label_edges->setMinimumSize(QSize(0, 15));
    label_edges->setMaximumSize(QSize(95, 16777215));
    label_edges->setFont(font1);

    edgesNumber_layout->addWidget(label_edges);

    label_edgesNumber = new QLabel(scrollAreaWidgetContents_2);
    label_edgesNumber->setObjectName(QString::fromUtf8("label_edgesNumber"));

    edgesNumber_layout->addWidget(label_edgesNumber);

    FileInformation_2->addLayout(edgesNumber_layout);

    FileInformation->addLayout(FileInformation_2);

    upload_reset = new QHBoxLayout();
    upload_reset->setObjectName(QString::fromUtf8("upload_reset"));
    open_file = new QPushButton(scrollAreaWidgetContents_2);
    open_file->setObjectName(QString::fromUtf8("open_file"));
    open_file->setEnabled(true);
    open_file->setMaximumSize(QSize(210, 16777215));

    upload_reset->addWidget(open_file);

    scaleToDefault = new QPushButton(scrollAreaWidgetContents_2);
    scaleToDefault->setObjectName(QString::fromUtf8("scaleToDefault"));
    scaleToDefault->setMaximumSize(QSize(210, 16777215));

    upload_reset->addWidget(scaleToDefault);

    FileInformation->addLayout(upload_reset);

    gridLayout->addLayout(FileInformation, 0, 0, 1, 1);

    Edges = new QVBoxLayout();
    Edges->setObjectName(QString::fromUtf8("Edges"));
    layout_edgesWidth = new QVBoxLayout();
    layout_edgesWidth->setObjectName(QString::fromUtf8("layout_edgesWidth"));
    label_settingsEdge = new QLabel(scrollAreaWidgetContents_2);
    label_settingsEdge->setObjectName(QString::fromUtf8("label_settingsEdge"));
    label_settingsEdge->setFont(font);

    layout_edgesWidth->addWidget(label_settingsEdge);

    horizontalLayout_14 = new QHBoxLayout();
    horizontalLayout_14->setObjectName(
        QString::fromUtf8("horizontalLayout_14"));
    labelEdge_width = new QLabel(scrollAreaWidgetContents_2);
    labelEdge_width->setObjectName(QString::fromUtf8("labelEdge_width"));
    labelEdge_width->setMinimumSize(QSize(50, 0));
    labelEdge_width->setMaximumSize(QSize(50, 16777215));

    horizontalLayout_14->addWidget(labelEdge_width);

    edgeWidth_spinbox = new QSpinBox(scrollAreaWidgetContents_2);
    edgeWidth_spinbox->setObjectName(QString::fromUtf8("edgeWidth_spinbox"));
    edgeWidth_spinbox->setMinimumSize(QSize(60, 0));
    edgeWidth_spinbox->setMaximumSize(QSize(60, 16777215));
    edgeWidth_spinbox->setMinimum(1);
    edgeWidth_spinbox->setMaximum(20);

    horizontalLayout_14->addWidget(edgeWidth_spinbox);

    edgeWidth_slider = new QSlider(scrollAreaWidgetContents_2);
    edgeWidth_slider->setObjectName(QString::fromUtf8("edgeWidth_slider"));
    edgeWidth_slider->setMinimumSize(QSize(200, 0));
    edgeWidth_slider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    edgeWidth_slider->setMinimum(1);
    edgeWidth_slider->setMaximum(20);
    edgeWidth_slider->setPageStep(1);
    edgeWidth_slider->setValue(1);
    edgeWidth_slider->setSliderPosition(1);
    edgeWidth_slider->setOrientation(Qt::Horizontal);

    horizontalLayout_14->addWidget(edgeWidth_slider);

    layout_edgesWidth->addLayout(horizontalLayout_14);

    Edges->addLayout(layout_edgesWidth);

    type = new QHBoxLayout();
    type->setObjectName(QString::fromUtf8("type"));
    labelEdge_type = new QLabel(scrollAreaWidgetContents_2);
    labelEdge_type->setObjectName(QString::fromUtf8("labelEdge_type"));
    labelEdge_type->setMinimumSize(QSize(50, 0));
    labelEdge_type->setMaximumSize(QSize(50, 16777215));
    labelEdge_type->setFont(font1);

    type->addWidget(labelEdge_type);

    splitter_2 = new QSplitter(scrollAreaWidgetContents_2);
    splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
    splitter_2->setOrientation(Qt::Horizontal);
    radioButton_dotted = new QRadioButton(splitter_2);
    radioButton_dotted->setObjectName(QString::fromUtf8("radioButton_dotted"));
    radioButton_dotted->setMaximumSize(QSize(70, 16777215));
    radioButton_dotted->setChecked(false);
    splitter_2->addWidget(radioButton_dotted);
    radioButton_constant = new QRadioButton(splitter_2);
    radioButton_constant->setObjectName(
        QString::fromUtf8("radioButton_constant"));
    radioButton_constant->setChecked(true);
    splitter_2->addWidget(radioButton_constant);

    type->addWidget(splitter_2);

    Edges->addLayout(type);

    gridLayout->addLayout(Edges, 5, 0, 1, 1);

    MoveModel = new QVBoxLayout();
    MoveModel->setObjectName(QString::fromUtf8("MoveModel"));
    label_transformModel_2 = new QLabel(scrollAreaWidgetContents_2);
    label_transformModel_2->setObjectName(
        QString::fromUtf8("label_transformModel_2"));
    label_transformModel_2->setFont(font);

    MoveModel->addWidget(label_transformModel_2);

    MoveSX = new QHBoxLayout();
    MoveSX->setObjectName(QString::fromUtf8("MoveSX"));
    axisX_rotate_label_2 = new QLabel(scrollAreaWidgetContents_2);
    axisX_rotate_label_2->setObjectName(
        QString::fromUtf8("axisX_rotate_label_2"));
    axisX_rotate_label_2->setMaximumSize(QSize(50, 16777215));
    axisX_rotate_label_2->setFont(font1);
    axisX_rotate_label_2->setIndent(0);

    MoveSX->addWidget(axisX_rotate_label_2);

    moveXInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    moveXInput->setObjectName(QString::fromUtf8("moveXInput"));
    moveXInput->setMaximumSize(QSize(60, 16777215));
    moveXInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    moveXInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    moveXInput->setMinimum(-9999.989999999999782);
    moveXInput->setMaximum(9999.989999999999782);

    MoveSX->addWidget(moveXInput);

    MoveSliderX = new QSlider(scrollAreaWidgetContents_2);
    MoveSliderX->setObjectName(QString::fromUtf8("MoveSliderX"));
    MoveSliderX->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    MoveSliderX->setMinimum(-100);
    MoveSliderX->setMaximum(100);
    MoveSliderX->setOrientation(Qt::Horizontal);

    MoveSX->addWidget(MoveSliderX);

    MoveModel->addLayout(MoveSX);

    MoveSY = new QHBoxLayout();
    MoveSY->setObjectName(QString::fromUtf8("MoveSY"));
    axisY_rotate_label_3 = new QLabel(scrollAreaWidgetContents_2);
    axisY_rotate_label_3->setObjectName(
        QString::fromUtf8("axisY_rotate_label_3"));
    axisY_rotate_label_3->setMaximumSize(QSize(50, 16777215));
    axisY_rotate_label_3->setFont(font1);
    axisY_rotate_label_3->setIndent(0);

    MoveSY->addWidget(axisY_rotate_label_3);

    moveYInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    moveYInput->setObjectName(QString::fromUtf8("moveYInput"));
    moveYInput->setMaximumSize(QSize(60, 16777215));
    moveYInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    moveYInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    moveYInput->setMinimum(-9999.989999999999782);
    moveYInput->setMaximum(9999.989999999999782);

    MoveSY->addWidget(moveYInput);

    MoveSliderY = new QSlider(scrollAreaWidgetContents_2);
    MoveSliderY->setObjectName(QString::fromUtf8("MoveSliderY"));
    MoveSliderY->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    MoveSliderY->setMinimum(-100);
    MoveSliderY->setMaximum(100);
    MoveSliderY->setOrientation(Qt::Horizontal);

    MoveSY->addWidget(MoveSliderY);

    MoveModel->addLayout(MoveSY);

    MoveSlZ = new QHBoxLayout();
    MoveSlZ->setObjectName(QString::fromUtf8("MoveSlZ"));
    axisZ_rotate_label_4 = new QLabel(scrollAreaWidgetContents_2);
    axisZ_rotate_label_4->setObjectName(
        QString::fromUtf8("axisZ_rotate_label_4"));
    axisZ_rotate_label_4->setMaximumSize(QSize(50, 16777215));
    axisZ_rotate_label_4->setFont(font1);
    axisZ_rotate_label_4->setIndent(0);

    MoveSlZ->addWidget(axisZ_rotate_label_4);

    moveZInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    moveZInput->setObjectName(QString::fromUtf8("moveZInput"));
    moveZInput->setMaximumSize(QSize(60, 16777215));
    moveZInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    moveZInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    moveZInput->setMinimum(-9999.989999999999782);
    moveZInput->setMaximum(9999.989999999999782);

    MoveSlZ->addWidget(moveZInput);

    MoveSliderZ = new QSlider(scrollAreaWidgetContents_2);
    MoveSliderZ->setObjectName(QString::fromUtf8("MoveSliderZ"));
    MoveSliderZ->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    MoveSliderZ->setMinimum(-100);
    MoveSliderZ->setMaximum(100);
    MoveSliderZ->setOrientation(Qt::Horizontal);

    MoveSlZ->addWidget(MoveSliderZ);

    MoveModel->addLayout(MoveSlZ);

    gridLayout->addLayout(MoveModel, 2, 0, 1, 1);

    layout_rotateModel = new QVBoxLayout();
    layout_rotateModel->setObjectName(QString::fromUtf8("layout_rotateModel"));
    label_transformModel = new QLabel(scrollAreaWidgetContents_2);
    label_transformModel->setObjectName(
        QString::fromUtf8("label_transformModel"));
    label_transformModel->setFont(font);

    layout_rotateModel->addWidget(label_transformModel);

    horizontalLayout_5 = new QHBoxLayout();
    horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
    axisX_rotate_label = new QLabel(scrollAreaWidgetContents_2);
    axisX_rotate_label->setObjectName(QString::fromUtf8("axisX_rotate_label"));
    axisX_rotate_label->setMaximumSize(QSize(50, 16777215));
    axisX_rotate_label->setFont(font1);
    axisX_rotate_label->setIndent(0);

    horizontalLayout_5->addWidget(axisX_rotate_label);

    rotateXInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    rotateXInput->setObjectName(QString::fromUtf8("rotateXInput"));
    rotateXInput->setMinimumSize(QSize(20, 0));
    rotateXInput->setMaximumSize(QSize(60, 16777215));
    rotateXInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    rotateXInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    rotateXInput->setMinimum(-360.000000000000000);
    rotateXInput->setMaximum(360.000000000000000);
    rotateXInput->setSingleStep(1.000000000000000);

    horizontalLayout_5->addWidget(rotateXInput);

    rotationX_slider = new QSlider(scrollAreaWidgetContents_2);
    rotationX_slider->setObjectName(QString::fromUtf8("rotationX_slider"));
    rotationX_slider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    rotationX_slider->setMinimum(-360);
    rotationX_slider->setMaximum(360);
    rotationX_slider->setOrientation(Qt::Horizontal);

    horizontalLayout_5->addWidget(rotationX_slider);

    layout_rotateModel->addLayout(horizontalLayout_5);

    horizontalLayout_6 = new QHBoxLayout();
    horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
    axisY_rotate_label = new QLabel(scrollAreaWidgetContents_2);
    axisY_rotate_label->setObjectName(QString::fromUtf8("axisY_rotate_label"));
    axisY_rotate_label->setMaximumSize(QSize(50, 16777215));
    axisY_rotate_label->setFont(font1);
    axisY_rotate_label->setIndent(0);

    horizontalLayout_6->addWidget(axisY_rotate_label);

    rotateYInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    rotateYInput->setObjectName(QString::fromUtf8("rotateYInput"));
    rotateYInput->setMinimumSize(QSize(20, 0));
    rotateYInput->setMaximumSize(QSize(60, 16777215));
    rotateYInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    rotateYInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    rotateYInput->setMinimum(-360.000000000000000);
    rotateYInput->setMaximum(360.000000000000000);
    rotateYInput->setSingleStep(1.000000000000000);

    horizontalLayout_6->addWidget(rotateYInput);

    rotationY_slider = new QSlider(scrollAreaWidgetContents_2);
    rotationY_slider->setObjectName(QString::fromUtf8("rotationY_slider"));
    rotationY_slider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    rotationY_slider->setMinimum(-360);
    rotationY_slider->setMaximum(360);
    rotationY_slider->setOrientation(Qt::Horizontal);

    horizontalLayout_6->addWidget(rotationY_slider);

    layout_rotateModel->addLayout(horizontalLayout_6);

    horizontalLayout_7 = new QHBoxLayout();
    horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
    axisZ_rotate_label = new QLabel(scrollAreaWidgetContents_2);
    axisZ_rotate_label->setObjectName(QString::fromUtf8("axisZ_rotate_label"));
    axisZ_rotate_label->setMaximumSize(QSize(50, 16777215));
    axisZ_rotate_label->setFont(font1);
    axisZ_rotate_label->setIndent(0);

    horizontalLayout_7->addWidget(axisZ_rotate_label);

    rotateZInput = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    rotateZInput->setObjectName(QString::fromUtf8("rotateZInput"));
    rotateZInput->setMinimumSize(QSize(20, 0));
    rotateZInput->setMaximumSize(QSize(60, 16777215));
    rotateZInput->setLocale(QLocale(QLocale::C, QLocale::AnyTerritory));
    rotateZInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
    rotateZInput->setMinimum(-360.000000000000000);
    rotateZInput->setMaximum(360.000000000000000);
    rotateZInput->setSingleStep(1.000000000000000);

    horizontalLayout_7->addWidget(rotateZInput);

    rotationZ_slider = new QSlider(scrollAreaWidgetContents_2);
    rotationZ_slider->setObjectName(QString::fromUtf8("rotationZ_slider"));
    rotationZ_slider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    rotationZ_slider->setMinimum(-360);
    rotationZ_slider->setMaximum(360);
    rotationZ_slider->setOrientation(Qt::Horizontal);

    horizontalLayout_7->addWidget(rotationZ_slider);

    layout_rotateModel->addLayout(horizontalLayout_7);

    gridLayout->addLayout(layout_rotateModel, 1, 0, 1, 1);

    layout_scalingModel = new QVBoxLayout();
    layout_scalingModel->setObjectName(
        QString::fromUtf8("layout_scalingModel"));
    label_scaleModel = new QLabel(scrollAreaWidgetContents_2);
    label_scaleModel->setObjectName(QString::fromUtf8("label_scaleModel"));
    label_scaleModel->setFont(font);

    layout_scalingModel->addWidget(label_scaleModel);

    horizontalLayout_9 = new QHBoxLayout();
    horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
    labelScaleInput = new QLabel(scrollAreaWidgetContents_2);
    labelScaleInput->setObjectName(QString::fromUtf8("labelScaleInput"));
    labelScaleInput->setMinimumSize(QSize(50, 0));
    labelScaleInput->setMaximumSize(QSize(50, 16777215));
    labelScaleInput->setFont(font1);

    horizontalLayout_9->addWidget(labelScaleInput);

    scaleSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents_2);
    scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
    scaleSpinBox->setEnabled(true);
    scaleSpinBox->setWrapping(false);
    scaleSpinBox->setFrame(true);
    scaleSpinBox->setReadOnly(false);
    scaleSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
    scaleSpinBox->setAccelerated(false);
    scaleSpinBox->setKeyboardTracking(true);
    scaleSpinBox->setProperty("showGroupSeparator", QVariant(false));
    scaleSpinBox->setMinimum(1.000000000000000);
    scaleSpinBox->setMaximum(1000.000000000000000);
    scaleSpinBox->setValue(100.000000000000000);

    horizontalLayout_9->addWidget(scaleSpinBox);

    label = new QLabel(scrollAreaWidgetContents_2);
    label->setObjectName(QString::fromUtf8("label"));

    horizontalLayout_9->addWidget(label);

    scaleSlider = new QSlider(scrollAreaWidgetContents_2);
    scaleSlider->setObjectName(QString::fromUtf8("scaleSlider"));
    scaleSlider->setMinimumSize(QSize(20, 0));
    scaleSlider->setTabletTracking(false);
    scaleSlider->setFocusPolicy(Qt::StrongFocus);
    scaleSlider->setAcceptDrops(false);
    scaleSlider->setLayoutDirection(Qt::LeftToRight);
    scaleSlider->setAutoFillBackground(false);
    scaleSlider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    scaleSlider->setMinimum(1);
    scaleSlider->setMaximum(1000);
    scaleSlider->setSingleStep(1);
    scaleSlider->setPageStep(10);
    scaleSlider->setSliderPosition(100);
    scaleSlider->setTracking(true);
    scaleSlider->setOrientation(Qt::Horizontal);
    scaleSlider->setInvertedAppearance(false);
    scaleSlider->setInvertedControls(false);
    scaleSlider->setTickPosition(QSlider::NoTicks);
    scaleSlider->setTickInterval(0);

    horizontalLayout_9->addWidget(scaleSlider);

    layout_scalingModel->addLayout(horizontalLayout_9);

    gridLayout->addLayout(layout_scalingModel, 3, 0, 1, 1);

    layout_edgesColor = new QHBoxLayout();
    layout_edgesColor->setObjectName(QString::fromUtf8("layout_edgesColor"));
    labelEdge_color = new QLabel(scrollAreaWidgetContents_2);
    labelEdge_color->setObjectName(QString::fromUtf8("labelEdge_color"));
    labelEdge_color->setFont(font1);

    layout_edgesColor->addWidget(labelEdge_color);

    label_colorEdges = new QLabel(scrollAreaWidgetContents_2);
    label_colorEdges->setObjectName(QString::fromUtf8("label_colorEdges"));

    layout_edgesColor->addWidget(label_colorEdges);

    pushButton_colorEdge = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_colorEdge->setObjectName(
        QString::fromUtf8("pushButton_colorEdge"));

    layout_edgesColor->addWidget(pushButton_colorEdge);

    horizontalSpacer =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    layout_edgesColor->addItem(horizontalSpacer);

    gridLayout->addLayout(layout_edgesColor, 6, 0, 1, 1);

    Vertices = new QVBoxLayout();
    Vertices->setObjectName(QString::fromUtf8("Vertices"));
    label_settingsVerticle = new QLabel(scrollAreaWidgetContents_2);
    label_settingsVerticle->setObjectName(
        QString::fromUtf8("label_settingsVerticle"));
    label_settingsVerticle->setFont(font);

    Vertices->addWidget(label_settingsVerticle);

    horizontalLayout_4 = new QHBoxLayout();
    horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
    labelVerticle_type = new QLabel(scrollAreaWidgetContents_2);
    labelVerticle_type->setObjectName(QString::fromUtf8("labelVerticle_type"));
    labelVerticle_type->setMinimumSize(QSize(50, 0));
    labelVerticle_type->setMaximumSize(QSize(50, 16777215));
    labelVerticle_type->setFont(font1);

    horizontalLayout_4->addWidget(labelVerticle_type);

    splitter_3 = new QSplitter(scrollAreaWidgetContents_2);
    splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
    splitter_3->setOrientation(Qt::Horizontal);
    radioButton_noneVertice = new QRadioButton(splitter_3);
    radioButton_noneVertice->setObjectName(
        QString::fromUtf8("radioButton_noneVertice"));
    radioButton_noneVertice->setChecked(true);
    splitter_3->addWidget(radioButton_noneVertice);
    radioButton_circleVertice = new QRadioButton(splitter_3);
    radioButton_circleVertice->setObjectName(
        QString::fromUtf8("radioButton_circleVertice"));
    splitter_3->addWidget(radioButton_circleVertice);
    radioButton_squareVertice = new QRadioButton(splitter_3);
    radioButton_squareVertice->setObjectName(
        QString::fromUtf8("radioButton_squareVertice"));
    splitter_3->addWidget(radioButton_squareVertice);

    horizontalLayout_4->addWidget(splitter_3);

    horizontalSpacer_5 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_4->addItem(horizontalSpacer_5);

    Vertices->addLayout(horizontalLayout_4);

    horizontalLayout_18 = new QHBoxLayout();
    horizontalLayout_18->setObjectName(
        QString::fromUtf8("horizontalLayout_18"));
    labelVertice_size = new QLabel(scrollAreaWidgetContents_2);
    labelVertice_size->setObjectName(QString::fromUtf8("labelVertice_size"));
    labelVertice_size->setMinimumSize(QSize(50, 0));
    labelVertice_size->setMaximumSize(QSize(50, 16777215));
    labelVertice_size->setFont(font1);
    labelVertice_size->setIndent(0);

    horizontalLayout_18->addWidget(labelVertice_size);

    verticeSize_spinbox = new QSpinBox(scrollAreaWidgetContents_2);
    verticeSize_spinbox->setObjectName(
        QString::fromUtf8("verticeSize_spinbox"));

    horizontalLayout_18->addWidget(verticeSize_spinbox);

    verticeSize_slider = new QSlider(scrollAreaWidgetContents_2);
    verticeSize_slider->setObjectName(QString::fromUtf8("verticeSize_slider"));
    verticeSize_slider->setStyleSheet(
        QString::fromUtf8("QSlider::groove:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #c4c4c4);\n"
                          "    border: 1px solid #D2E4EF;\n"
                          "    height: 5px;\n"
                          "    margin: 0px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #f4cccc, stop:1 #ea9999);\n"
                          "    border: 1px solid #000000;\n"
                          "    width: 13px;\n"
                          "    margin: -4px 0;\n"
                          "	border-radius: 5px\n"
                          "}\n"
                          "\n"
                          "QSlider::sub-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #000000, stop:1 #ffffff);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::add-page:horizontal {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:0, stop:0 #D2E4EF, stop:1 #2980B9);\n"
                          "    border: 1px solid #ffffff;\n"
                          "    height: 10px;\n"
                          "}\n"
                          "\n"
                          "QSlider::handle:horizontal:hover {\n"
                          "    background: qlineargradient(x1:0, y1:0, x2:1, "
                          "y2:1, stop:0 #fff2cc, stop:1 #f1c232);\n"
                          "    border: 1px solid #000000;\n"
                          "}"));
    verticeSize_slider->setMinimum(1);
    verticeSize_slider->setMaximum(20);
    verticeSize_slider->setPageStep(1);
    verticeSize_slider->setValue(1);
    verticeSize_slider->setOrientation(Qt::Horizontal);

    horizontalLayout_18->addWidget(verticeSize_slider);

    Vertices->addLayout(horizontalLayout_18);

    horizontalLayout_19 = new QHBoxLayout();
    horizontalLayout_19->setObjectName(
        QString::fromUtf8("horizontalLayout_19"));
    labelVertice_color = new QLabel(scrollAreaWidgetContents_2);
    labelVertice_color->setObjectName(QString::fromUtf8("labelVertice_color"));
    labelVertice_color->setFont(font1);

    horizontalLayout_19->addWidget(labelVertice_color);

    label_colorVertice = new QLabel(scrollAreaWidgetContents_2);
    label_colorVertice->setObjectName(QString::fromUtf8("label_colorVertice"));

    horizontalLayout_19->addWidget(label_colorVertice);

    pushButton_colorVertice = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_colorVertice->setObjectName(
        QString::fromUtf8("pushButton_colorVertice"));

    horizontalLayout_19->addWidget(pushButton_colorVertice);

    horizontalSpacer_2 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout_19->addItem(horizontalSpacer_2);

    Vertices->addLayout(horizontalLayout_19);

    gridLayout->addLayout(Vertices, 7, 0, 1, 1);

    layout_recordingGif = new QVBoxLayout();
    layout_recordingGif->setObjectName(
        QString::fromUtf8("layout_recordingGif"));
    label_recordGif = new QLabel(scrollAreaWidgetContents_2);
    label_recordGif->setObjectName(QString::fromUtf8("label_recordGif"));
    label_recordGif->setFont(font);
    label_recordGif->setToolTipDuration(0);

    layout_recordingGif->addWidget(label_recordGif);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    pushButton_Gif_mode_1 = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_Gif_mode_1->setObjectName(
        QString::fromUtf8("pushButton_Gif_mode_1"));

    horizontalLayout->addWidget(pushButton_Gif_mode_1);

    pushButton_Gif_mode_2 = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_Gif_mode_2->setObjectName(
        QString::fromUtf8("pushButton_Gif_mode_2"));

    horizontalLayout->addWidget(pushButton_Gif_mode_2);

    layout_recordingGif->addLayout(horizontalLayout);

    gridLayout->addLayout(layout_recordingGif, 10, 0, 1, 1);

    layout_BackgroundColor = new QVBoxLayout();
    layout_BackgroundColor->setObjectName(
        QString::fromUtf8("layout_BackgroundColor"));
    label_backColor = new QLabel(scrollAreaWidgetContents_2);
    label_backColor->setObjectName(QString::fromUtf8("label_backColor"));
    label_backColor->setFont(font);

    layout_BackgroundColor->addWidget(label_backColor);

    layout_BackgroundColor2 = new QHBoxLayout();
    layout_BackgroundColor2->setObjectName(
        QString::fromUtf8("layout_BackgroundColor2"));
    labelBackg_color = new QLabel(scrollAreaWidgetContents_2);
    labelBackg_color->setObjectName(QString::fromUtf8("labelBackg_color"));
    labelBackg_color->setFont(font1);

    layout_BackgroundColor2->addWidget(labelBackg_color);

    label_colorBackg = new QLabel(scrollAreaWidgetContents_2);
    label_colorBackg->setObjectName(QString::fromUtf8("label_colorBackg"));

    layout_BackgroundColor2->addWidget(label_colorBackg);

    pushButton_colorBackg = new QPushButton(scrollAreaWidgetContents_2);
    pushButton_colorBackg->setObjectName(
        QString::fromUtf8("pushButton_colorBackg"));

    layout_BackgroundColor2->addWidget(pushButton_colorBackg);

    horizontalSpacer_3 =
        new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    layout_BackgroundColor2->addItem(horizontalSpacer_3);

    layout_BackgroundColor->addLayout(layout_BackgroundColor2);

    gridLayout->addLayout(layout_BackgroundColor, 8, 0, 1, 1);

    scrollArea->setWidget(scrollAreaWidgetContents_2);

    gridLayout_2->addWidget(scrollArea, 0, 1, 1, 1);

    openGLWidget = new GLWidget(centralwidget);
    openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

    gridLayout_2->addWidget(openGLWidget, 0, 0, 1, 1);

    MainWindow->setCentralWidget(centralwidget);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "3DViewer_v2.0", nullptr));
    label_downloadImage->setText(
        QCoreApplication::translate("MainWindow", "Dowload image", nullptr));
    labelImage->setText(
        QCoreApplication::translate("MainWindow", "format", nullptr));
    radioButton_jpgFormat->setText(
        QCoreApplication::translate("MainWindow", ".jpg", nullptr));
    radioButton_bmpFormat->setText(
        QCoreApplication::translate("MainWindow", ".bmp", nullptr));
    pushButton_downloadImage->setText(
        QCoreApplication::translate("MainWindow", "download", nullptr));
    label_projectionType->setText(
        QCoreApplication::translate("MainWindow", "Proection type", nullptr));
    radioButton_orthogonal->setText(
        QCoreApplication::translate("MainWindow", "Orthogonal", nullptr));
#if QT_CONFIG(shortcut)
    radioButton_orthogonal->setShortcut(QString());
#endif  // QT_CONFIG(shortcut)
    radioButton_perspective->setText(
        QCoreApplication::translate("MainWindow", "Perspective", nullptr));
    label_fileInfo->setText(
        QCoreApplication::translate("MainWindow", "File information", nullptr));
    label_filepath->setText(
        QCoreApplication::translate("MainWindow", "file name:", nullptr));
    label_filepathInfo->setText(QString());
    label_vertices_num->setText(
        QCoreApplication::translate("MainWindow", "vertices number:", nullptr));
    label_verticesInfo->setText(QString());
    label_edges->setText(
        QCoreApplication::translate("MainWindow", "edges number:", nullptr));
    label_edgesNumber->setText(QString());
    open_file->setText(
        QCoreApplication::translate("MainWindow", "upload model", nullptr));
    scaleToDefault->setText(
        QCoreApplication::translate("MainWindow", "Reset", nullptr));
    label_settingsEdge->setText(
        QCoreApplication::translate("MainWindow", "Edges:", nullptr));
    labelEdge_width->setText(
        QCoreApplication::translate("MainWindow", "width", nullptr));
    labelEdge_type->setText(
        QCoreApplication::translate("MainWindow", "type", nullptr));
    radioButton_dotted->setText(
        QCoreApplication::translate("MainWindow", "Dotted", nullptr));
    radioButton_constant->setText(
        QCoreApplication::translate("MainWindow", "Constant", nullptr));
    label_transformModel_2->setText(
        QCoreApplication::translate("MainWindow", "Move model", nullptr));
    axisX_rotate_label_2->setText(
        QCoreApplication::translate("MainWindow", "axis: X", nullptr));
    axisY_rotate_label_3->setText(
        QCoreApplication::translate("MainWindow", "axis: Y", nullptr));
    axisZ_rotate_label_4->setText(
        QCoreApplication::translate("MainWindow", "axis: Z", nullptr));
    label_transformModel->setText(
        QCoreApplication::translate("MainWindow", "Rotate model", nullptr));
    axisX_rotate_label->setText(
        QCoreApplication::translate("MainWindow", "axis: X", nullptr));
    axisY_rotate_label->setText(
        QCoreApplication::translate("MainWindow", "axis: Y", nullptr));
    axisZ_rotate_label->setText(
        QCoreApplication::translate("MainWindow", "axis: Z", nullptr));
    label_scaleModel->setText(
        QCoreApplication::translate("MainWindow", "Scale model", nullptr));
    labelScaleInput->setText(
        QCoreApplication::translate("MainWindow", "scale", nullptr));
    scaleSpinBox->setSuffix(QString());
    label->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
    labelEdge_color->setText(
        QCoreApplication::translate("MainWindow", "Color:", nullptr));
    label_colorEdges->setText(QString());
    pushButton_colorEdge->setText(
        QCoreApplication::translate("MainWindow", "Choose", nullptr));
    label_settingsVerticle->setText(
        QCoreApplication::translate("MainWindow", "Vertices:", nullptr));
    labelVerticle_type->setText(
        QCoreApplication::translate("MainWindow", "type", nullptr));
    radioButton_noneVertice->setText(
        QCoreApplication::translate("MainWindow", "none", nullptr));
    radioButton_circleVertice->setText(
        QCoreApplication::translate("MainWindow", "circle", nullptr));
    radioButton_squareVertice->setText(
        QCoreApplication::translate("MainWindow", "square", nullptr));
    labelVertice_size->setText(
        QCoreApplication::translate("MainWindow", "size", nullptr));
    labelVertice_color->setText(
        QCoreApplication::translate("MainWindow", "Color:", nullptr));
    label_colorVertice->setText(QString());
    pushButton_colorVertice->setText(
        QCoreApplication::translate("MainWindow", "Choose", nullptr));
    label_recordGif->setText(
        QCoreApplication::translate("MainWindow", "Record gif", nullptr));
    pushButton_Gif_mode_1->setText(
        QCoreApplication::translate("MainWindow", "Task", nullptr));
    pushButton_Gif_mode_2->setText(
        QCoreApplication::translate("MainWindow", "Cooler", nullptr));
    label_backColor->setText(
        QCoreApplication::translate("MainWindow", "Background:", nullptr));
    labelBackg_color->setText(
        QCoreApplication::translate("MainWindow", "Color:", nullptr));
    label_colorBackg->setText(QString());
    pushButton_colorBackg->setText(
        QCoreApplication::translate("MainWindow", "Choose", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
