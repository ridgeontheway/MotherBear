# Controller for the project editor screen
from PyQt5.QtWidgets import QMainWindow
from View.ProjectEditor import Ui_MainWindow

class ProjectEditorController(QMainWindow):
    def __init__(self, sensor_overview_dict):
        super(ProjectEditorController, self).__init__()
        self.ui = Ui_MainWindow()
        # self.ui.OpenProject
        self.ui.setupUi(self, "test", "Sensor Overview: [Name | Number]","Microcontroller Output:",  sensor_overview_dict)


