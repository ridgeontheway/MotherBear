#include "viewsignalmodel.h"

const char* ViewSignalModel::getNewProjectScreenMessage(){
    return messagesObj->settingsScreen;
}

const char* ViewSignalModel::getEditExistingProjectScreenMessage(){
    return messagesObj->editProjectScreen;
}

const char* ViewSignalModel::getSettingsScreenMessage(){
    return messagesObj->settingsScreen;
}
