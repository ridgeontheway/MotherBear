from PyQt5.QtWidgets import QMainWindow
from View.StartWindow import Ui_MainWindow


class StartWindowController(QMainWindow):

    def __init__(self):
        super(StartWindowController, self).__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
