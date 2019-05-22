# Controller for the project editor screen
from PyQt5.QtWidgets import QMainWindow
from View.ProjectEditor import Ui_MainWindow

class ProjectEditorController(QMainWindow):

    def __init__(self):
        super(ProjectEditorController, self).__init__()

    def init_ui(self):
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self, "test", "Sensor Overview: [Name | Number]","Microcontroller Output:",  self.sensor_overview)

    def bare_conductive_edit_controller_init(self):
        self.sensor_overview = {
            0: "E0",
            1: "E1",
            2: "E2",
            3: "E3",
            4: "E4",
            5: "E5",
            6: "E6",
            7: "E7",
            8: "E8",
            9: "E9",
            10: "E10",
            11: "E11"
        }
        self.init_ui()

