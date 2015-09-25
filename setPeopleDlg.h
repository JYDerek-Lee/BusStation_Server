#if !defined(AFX_SETPEOPLEDLG_H__F9016363_485E_4DC4_B0F6_8E9C61F6C514__INCLUDED_)
#define AFX_SETPEOPLEDLG_H__F9016363_485E_4DC4_B0F6_8E9C61F6C514__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// setPeopleDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CsetPeopleDlg dialog

class CsetPeopleDlg : public CDialog
{
// Construction
public:
	CsetPeopleDlg(CWnd* pParent = NULL);   // standard constructor
	CString m_Title;
// Dialog Data
	//{{AFX_DATA(CsetPeopleDlg)
	enum { IDD = IDD_DIALOG2 };
	int		m_pin;
	int		m_pout;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CsetPeopleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CsetPeopleDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETPEOPLEDLG_H__F9016363_485E_4DC4_B0F6_8E9C61F6C514__INCLUDED_)
