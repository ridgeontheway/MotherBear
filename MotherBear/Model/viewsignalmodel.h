#ifndef VIEWSIGNALMODEL_H
#define VIEWSIGNALMODEL_H


class ViewSignalModel
{
public:
    inline ViewSignalModel(){messagesObj = new messages;}
    const char* getNewProjectScreenMessage();
    const char* getEditExistingProjectScreenMessage();
    const char* getSettingsScreenMessage();
private:
    struct messages
    {
    public:
        const char* newProjectScreen = "NEW_PROJECT";
        const char* editProjectScreen = "EDIT_PROJECT";
        const char* settingsScreen = "SETTINGS";
    };
    messages* messagesObj;
};
#endif // VIEWSIGNALMODEL_H
