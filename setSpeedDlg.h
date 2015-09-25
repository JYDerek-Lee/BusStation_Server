#if !defined(AFX_SETSPEEDDLG_H__D09C79D3_B3C4_4142_9871_9C86BEB53C5D__INCLUDED_)
#define AFX_SETSPEEDDLG_H__D09C79D3_B3C4_4142_9871_9C86BEB53C5D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// setSpeedDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CsetSpeedDlg dialog

class CsetSpeedDlg : public CDialog
{
// Construction
public:
	CsetSpeedDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CsetSpeedDlg)
	enum { IDD = IDD_DIALOG1 };
	int		m_speed;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CsetSpeedDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CsetSpeedDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETSPEEDDLG_H__D09C79D3_B3C4_4142_9871_9C86BEB53C5D__INCLUDED_)
