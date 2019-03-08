import sys
from PyQt5.QtWidgets import QApplication, QMainWindow
from View.StartWindow import StartWindow


class temp_class(QMainWindow):
    def __init__(self):
        super(temp_class, self).__init__()
        self.ui = StartWindow()
        self.ui.setupUi(self)


if __name__ == '__main__':
    app = QApplication([])
    application = temp_class()
    application.show()
    sys.exit(app.exec())

