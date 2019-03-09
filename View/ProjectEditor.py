import sys
import random
from PyQt5 import QtCore, QtGui, QtWidgets
from View.CustomWidgets.CollapsibleBox import CollapsibleBox

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.setEnabled(True)
        MainWindow.resize(500, 297)
        MainWindow.setAnimated(True)
        MainWindow.setCentralWidget(QtWidgets.QWidget())
        dock = QtWidgets.QDockWidget("Collapsible Demo")
        MainWindow.addDockWidget(QtCore.Qt.LeftDockWidgetArea, dock)
        scroll = QtWidgets.QScrollArea()
        dock.setWidget(scroll)
        content = QtWidgets.QWidget()
        scroll.setWidget(content)
        scroll.setWidgetResizable(True)
        vlay = QtWidgets.QVBoxLayout(content)
        for i in range(10):
            box = CollapsibleBox("Collapsible Box Header-{}".format(i))
            vlay.addWidget(box)
            lay = QtWidgets.QVBoxLayout()
            for j in range(8):
                label = QtWidgets.QLabel("{}".format(j))
                color = QtGui.QColor(*[random.randint(0, 255) for _ in range(3)])
                label.setStyleSheet("background-color: {}; color : white;".format(color.name()))
                label.setAlignment(QtCore.Qt.AlignCenter)
                lay.addWidget(label)

            box.setContentLayout(lay)
        vlay.addStretch()
        MainWindow.resize(640, 480)
