import sys
import random
from PyQt5 import QtCore, QtGui, QtWidgets
from View.CustomWidgets.CollapsibleBox import CollapsibleBox

class Ui_MainWindow(object):
    def setupUi(self, MainWindow, MainWindowObjectName, left_widget_name, right_widget_name, collapsibleBoxesDictionary):
        MainWindow.setObjectName(MainWindowObjectName)
        MainWindow.setEnabled(True)
        MainWindow.resize(640, 480)
        MainWindow.setAnimated(True)
        MainWindow.setCentralWidget(QtWidgets.QWidget())


        # Setting the features of the dock, right now we are only allowing it to be moved
        dock = QtWidgets.QDockWidget(left_widget_name)
        dock.setFeatures(QtWidgets.QDockWidget.DockWidgetMovable | QtWidgets.QDockWidget.DockWidgetFloatable)
        dock_size = QtCore.QSize(MainWindow.height(), 800)

        rightDock = QtWidgets.QDockWidget(right_widget_name)
        rightDock.setFeatures(QtWidgets.QDockWidget.DockWidgetMovable)

        MainWindow.addDockWidget(QtCore.Qt.LeftDockWidgetArea, dock)
        MainWindow.addDockWidget(QtCore.Qt.RightDockWidgetArea, rightDock)

        scroll = QtWidgets.QScrollArea()
        right_scroll = QtWidgets.QScrollArea()

        dock.setWidget(scroll)
        rightDock.setWidget(right_scroll)

        content = QtWidgets.QWidget()
        scroll.setWidget(content)
        scroll.setWidgetResizable(True)
        vlay = QtWidgets.QVBoxLayout(content)
        scroll.resize(dock_size)
        content.resize(dock_size)

        rightContent = QtWidgets.QWidget()
        right_scroll.setWidget(rightContent)
        right_scroll.setWidgetResizable(True)
        rightVlay = QtWidgets.QVBoxLayout(rightContent)


        # Setting the features of the
        textOutput = QtWidgets.QPlainTextEdit()
        textOutput.setReadOnly(True)
        rightVlay.addWidget(textOutput)

        # setting the number of collapsible boxes based on the number of sensors
        for sensorNumber,sensorName in collapsibleBoxesDictionary.items():
            box = CollapsibleBox("{} | {}".format(sensorName, sensorNumber))
            vlay.addWidget(box)
            lay = QtWidgets.QVBoxLayout()
            for j in range(8):
                # todo when we get round to testing this again, change this to be not random labels
                label = QtWidgets.QLabel("{}".format(j))
                color = QtGui.QColor(*[random.randint(0, 255) for _ in range(3)])
                label.setStyleSheet("background-color: {}; color : white;".format(color.name()))
                label.setAlignment(QtCore.Qt.AlignCenter)
                lay.addWidget(label)

            box.setContentLayout(lay)
        vlay.addStretch()

