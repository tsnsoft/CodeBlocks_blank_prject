/***************************************************************
 * Name:      testMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2020-11-13
 * Copyright:  ()
 * License:
 **************************************************************/

#include "testMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(testFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(testFrame)
//*)

BEGIN_EVENT_TABLE(testFrame,wxFrame)
    //(*EventTable(testFrame)
    //*)
END_EVENT_TABLE()

testFrame::testFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(testFrame)
    Create(parent, id, _("Пустая программка для CodeBlocks (windows)"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(500,300));
    {
    	wxIcon FrameIcon;
    	FrameIcon.CopyFromBitmap(wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_GO_HOME")),wxART_FRAME_ICON));
    	SetIcon(FrameIcon);
    }
    Center();
    //*)
}

testFrame::~testFrame()
{
    //(*Destroy(testFrame)
    //*)
}
