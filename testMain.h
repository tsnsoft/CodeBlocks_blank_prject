/***************************************************************
 * Name:      testMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2020-11-13
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TESTMAIN_H
#define TESTMAIN_H

//(*Headers(testFrame)
#include <wx/frame.h>
//*)

class testFrame: public wxFrame
{
    public:

        testFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~testFrame();

    private:

        //(*Handlers(testFrame)
        //*)

        //(*Identifiers(testFrame)
        //*)

        //(*Declarations(testFrame)
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TESTMAIN_H
