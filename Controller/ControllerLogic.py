import sys
from PyQt5.QtWidgets import QApplication
from Controller.StartWindowController import StartWindowController
from Controller.ProjectEditorController import ProjectEditorController


class ControllerLogic:
    # Need to start the QApplication before we initialize anything else
    application = QApplication([])

    # All of the controller objs for the different screens
    StartWindowControllerObj = ""
    ProjectEditorControllerObj = ""

    # Defining the current window, will switch between the different controller objs
    currentWindow = ""

    def __init__(self):
        self.StartWindowControllerObj = StartWindowController()
        self.bare_conductive_edit_controller_init()

    def start_application(self):
        # connecting the edit project screen to the new and open project buttons
        self.StartWindowControllerObj.ui.OpenProject.clicked.connect(self.load_project_edit_screen)
        self.StartWindowControllerObj.ui.NewProject.clicked.connect(self.load_project_edit_screen)
        self.currentWindow = self.StartWindowControllerObj
        self.currentWindow.show()
        sys.exit(self.application.exec())

    def load_project_edit_screen(self):
        self.currentWindow.close()
        self.currentWindow = self.ProjectEditorControllerObj
        self.currentWindow.show()

    #todo think about this a little more, may need to more this in another class or someathing
    def bare_conductive_edit_controller_init(self):
        sensor_overview = {
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
        self.ProjectEditorControllerObj = ProjectEditorController(sensor_overview)
