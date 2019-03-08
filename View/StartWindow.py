# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'StartWindow.ui'
#
# Created by: PyQt5 UI code generator 5.12
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets


class StartWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(800, 453)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.verticalLayoutWidget = QtWidgets.QWidget(self.centralwidget)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(310, 190, 148, 85))
        self.verticalLayoutWidget.setObjectName("verticalLayoutWidget")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout.setSizeConstraint(QtWidgets.QLayout.SetDefaultConstraint)
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout.setSpacing(4)
        self.verticalLayout.setObjectName("verticalLayout")
        self.NewProject = QtWidgets.QPushButton(self.verticalLayoutWidget)
        self.NewProject.setObjectName("NewProject")
        self.verticalLayout.addWidget(self.NewProject)
        self.OpenProject = QtWidgets.QPushButton(self.verticalLayoutWidget)
        self.OpenProject.setObjectName("OpenProject")
        self.verticalLayout.addWidget(self.OpenProject)
        self.Setting = QtWidgets.QPushButton(self.verticalLayoutWidget)
        self.Setting.setObjectName("Setting")
        self.verticalLayout.addWidget(self.Setting)
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(310, 80, 151, 51))
        self.label.setObjectName("label")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 800, 22))
        self.menubar.setObjectName("menubar")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.NewProject.setText(_translate("MainWindow", " New Project"))
        self.OpenProject.setText(_translate("MainWindow", "Open Project"))
        self.Setting.setText(_translate("MainWindow", " Settings"))
        self.label.setText(_translate("MainWindow", "MotherBear"))


