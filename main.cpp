#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
添加运行环境，he字体
LD_LIBRARY_PATH=/lib
QML2_IMPORT_PATH=/qml
QML_IMPORT_PATH=/qml
QT_QPA_FONTDIR=/lib/fonts
QT_QPA_PLATFORM=linuxfb:tty=/dev/fb0
QT_QPA_PLATFORM_PLUGIN_PATH=/plugins
TSLIB_CALIBFILE=/etc/pointercal
TSLIB_CONFFILE=/etc/ts.conf
TSLIB_CONSOLEDEVICE=none
TSLIB_FBDEVICE=/dev/fb0
TSLIB_PLUGINDIR=/lib/ts
TSLIB_TSDEVICE=/dev/input/event1
