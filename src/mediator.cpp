#include "mediator.h"

Mediator::Mediator()
{
    _mainWindow.reset(new QMainWindow());
    _userInterface.setupUi(_mainWindow.get());

    QGLFormat glFormat;
    //glFormat.setVersion(2, 1);
    glFormat.setVersion(3, 3);
    glFormat.setProfile(QGLFormat::CoreProfile);
    QGLFormat::setDefaultFormat(glFormat);

    _sceneViewer.reset(new SceneViewer(&_userInterface, glFormat));
    _sceneViewer->stopAnimation();

    initViewer();
    initSignalSlot();
    initUserInterface();

    _mainWindow->show();
}

Mediator::~Mediator()
{

}

void Mediator::initViewer()
{
    _viewerLayout.reset(new QGridLayout());
    _viewerLayout->setMargin(0);
    _viewerLayout->addWidget(_sceneViewer.get());
    _userInterface.widgetScenePlayer->setLayout(_viewerLayout.get());
}

void Mediator::initSignalSlot()
{
    //File
    connect(_userInterface.actionQuit, SIGNAL(triggered()), _mainWindow.get(), SLOT(close()));
}

void Mediator::initUserInterface()
{
}
