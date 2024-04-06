#include <wx/wx.h>

const int WINDOW_W = 1000;
const int WINDOW_H = 600;

class MainWindow : public wxFrame {
public:
  MainWindow(const wxString& title, const wxSize& size);

private:
  void onExit(wxCommandEvent& e);
  void onAbout(wxCommandEvent& e);

  wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)
  EVT_MENU(wxID_EXIT, MainWindow::onExit)
  EVT_MENU(wxID_ABOUT, MainWindow::onAbout)
wxEND_EVENT_TABLE()

MainWindow::MainWindow(const wxString& title, const wxSize& size)
  : wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, size) {

  SetAutoLayout(true);

  wxMenu* mnuFile = new wxMenu;
  mnuFile->Append(wxID_EXIT);

  wxMenu* mnuHelp = new wxMenu;
  mnuHelp->Append(wxID_ABOUT);

  wxMenuBar* menuBar = new wxMenuBar;
  menuBar->Append(mnuFile, wxGetTranslation("&File"));
  menuBar->Append(mnuHelp, wxGetTranslation("&Help"));

  SetMenuBar(menuBar);
}

void MainWindow::onAbout(wxCommandEvent&) {
  std::string description = "WxWidgets example application";

  wxMessageBox(wxGetTranslation(description), "GUI Example App",
    wxOK | wxICON_INFORMATION);
}

void MainWindow::onExit(wxCommandEvent&) {
  Close();
}

class Application : public wxApp {
public:
  virtual bool OnInit() override;
};

bool Application::OnInit() {
  MainWindow* frame = new MainWindow("GUI app", wxSize(WINDOW_W, WINDOW_H));
  frame->Show();

  return true;
}

wxIMPLEMENT_APP(Application);
