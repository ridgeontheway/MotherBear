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
        self.ProjectEditorControllerObj = ProjectEditorController()
        self.ProjectEditorControllerObj.bare_conductive_edit_controller_init()

    def start_application(self):
        # connecting the edit project screen to the new and open project buttons
        self.StartWindowControllerObj.ui.OpenProject.clicked.connect(self.load_project_edit_screen)
        self.StartWindowControllerObj.ui.NewProject.clicked.connect(self.load_project_edit_screen)
        # todo need to put this in the start window controller?

        self.currentWindow = self.StartWindowControllerObj
        self.currentWindow.show()
        sys.exit(self.application.exec())

    def load_project_edit_screen(self):
        self.currentWindow.close()
        self.currentWindow = self.ProjectEditorControllerObj
        self.currentWindow.show()
