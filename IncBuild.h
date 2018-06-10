// IncBuild.h : main header file for the INCBUILD application
//

#if !defined(AFX_INCBUILD_H__483D2A95_9AC7_4084_B824_7F626596BA7A__INCLUDED_)
#define AFX_INCBUILD_H__483D2A95_9AC7_4084_B824_7F626596BA7A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CIncBuildApp:
// See IncBuild.cpp for the implementation of this class
//

class CIncBuildApp : public CWinApp
{
public:
	CIncBuildApp();
	CString m_sAppDir;

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIncBuildApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CIncBuildApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
protected:
	void NewProject();
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INCBUILD_H__483D2A95_9AC7_4084_B824_7F626596BA7A__INCLUDED_)
