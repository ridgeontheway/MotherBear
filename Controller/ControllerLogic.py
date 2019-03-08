import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from View.StartWindow import StartWindow

class ControllerLogic(QMainWindow):
    def __init__(self):
        self.app = QApplication([])
        super(ControllerLogic, self).__init__()
        self.StartWindow = StartWindow()
        self.StartWindow.setupUi(self)
        sys.exit(self.app.exec())







