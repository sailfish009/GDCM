// -*- C++ -*- generated by wxGlade 0.4.1 on Mon Aug 28 22:44:43 2006

#include "wxGDCMFrameBase.h"
#include "wxVTKRenderWindowInteractor.h"


wxGDCMFrameBase::wxGDCMFrameBase(wxWindow* parent, int id, const wxString& title, const wxPoint& pos, const wxSize& size, long style):
    wxFrame(parent, id, title, pos, size, wxDEFAULT_FRAME_STYLE)
{
    // begin wxGlade: wxGDCMFrameBase::wxGDCMFrameBase
    Notebook = new wxNotebook(this, -1, wxDefaultPosition, wxDefaultSize, 0);
    TopFrameMenubar = new wxMenuBar();
    SetMenuBar(TopFrameMenubar);
    wxMenu* wxglade_tmp_menu_1 = new wxMenu();
    wxglade_tmp_menu_1->Append(wxNewId(), wxT("&Open...\tCtrl+o"), wxT("Open DICOM file"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->Append(wxNewId(), wxT("&Rewrite...\tCtrl+r"), wxT("Rewrite DICOM file"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->Append(wxNewId(), wxT("&Save...\tCtrl+s"), wxT("Save DICOM File"), wxITEM_NORMAL);
    wxglade_tmp_menu_1->AppendSeparator();
    wxglade_tmp_menu_1->Append(wxNewId(), wxT("E&xit...\tCtrl+x"), wxT("Exit app"), wxITEM_NORMAL);
    TopFrameMenubar->Append(wxglade_tmp_menu_1, wxT("File"));
    wxMenu* wxglade_tmp_menu_2 = new wxMenu();
    TopFrameMenubar->Append(wxglade_tmp_menu_2, wxT("Tools"));
    wxMenu* wxglade_tmp_menu_3 = new wxMenu();
    wxglade_tmp_menu_3->Append(wxNewId(), wxT("&About...\tCtrl+a"), wxT("About Dialog"), wxITEM_NORMAL);
    TopFrameMenubar->Append(wxglade_tmp_menu_3, wxT("Help"));
    TopFrameStatusbar = CreateStatusBar(1, 0);
    TopFrameToolbar = new wxToolBar(this, -1, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL|wxTB_TEXT);
    SetToolBar(TopFrameToolbar);
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->AddSeparator();
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->AddSeparator();
    TopFrameToolbar->AddTool(wxNewId(), wxT("tool"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxT(""), wxT(""));
    TopFrameToolbar->Realize();
    TreeCtrl = new wxTreeCtrl(this, -1, wxDefaultPosition, wxDefaultSize, wxTR_HAS_BUTTONS|wxTR_NO_LINES|wxTR_DEFAULT_STYLE|wxSUNKEN_BORDER);
    ListCtrl = new wxListCtrl(this, -1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxSUNKEN_BORDER);
    VTKWindow = new wxVTKRenderWindowInteractor(Notebook, -1);
    Grid = new wxGrid(Notebook, -1);

    set_properties();
    do_layout();
    // end wxGlade
}


void wxGDCMFrameBase::set_properties()
{
    // begin wxGlade: wxGDCMFrameBase::set_properties
    SetTitle(wxT("wxGDCM"));
    SetSize(wxSize(725, 565));
    int TopFrameStatusbar_widths[] = { -1 };
    TopFrameStatusbar->SetStatusWidths(1, TopFrameStatusbar_widths);
    const wxString TopFrameStatusbar_fields[] = {
        wxT("frame_1_statusbar")
    };
    for(int i = 0; i < TopFrameStatusbar->GetFieldsCount(); ++i) {
        TopFrameStatusbar->SetStatusText(TopFrameStatusbar_fields[i], i);
    }
    Grid->CreateGrid(10, 3);
    // end wxGlade
}


void wxGDCMFrameBase::do_layout()
{
    // begin wxGlade: wxGDCMFrameBase::do_layout
    wxBoxSizer* Sizer = new wxBoxSizer(wxHORIZONTAL);
    wxBoxSizer* sizer_1 = new wxBoxSizer(wxVERTICAL);
    sizer_1->Add(TreeCtrl, 1, wxEXPAND, 0);
    sizer_1->Add(ListCtrl, 1, wxEXPAND, 0);
    Sizer->Add(sizer_1, 1, wxEXPAND, 0);
    Notebook->AddPage(VTKWindow, wxT("View"));
    Notebook->AddPage(Grid, wxT("DICOM Tags"));
    Sizer->Add(Notebook, 1, wxEXPAND, 0);
    SetAutoLayout(true);
    SetSizer(Sizer);
    Layout();
    // end wxGlade
}

