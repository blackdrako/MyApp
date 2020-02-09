#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "renderarea.h"
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

private:
    RenderArea *renderArea;
    QPushButton *LoadButton;
    QPushButton *SaveButton;
    QPushButton *ExitButton;
};
#endif // MAINWINDOW_H
