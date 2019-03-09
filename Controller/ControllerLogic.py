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

    def start_application(self):
        self.StartWindowControllerObj.ui.OpenProject.clicked.connect(self.load_project_edit_screen)
        self.currentWindow = self.StartWindowControllerObj
        self.currentWindow.show()
        sys.exit(self.application.exec())

    def load_project_edit_screen(self):
        print("am I getting here??")
        self.currentWindow.close()
        self.currentWindow = self.ProjectEditorControllerObj
        self.currentWindow.show()

        #todo figure out what I am suppposed to be doing here fam