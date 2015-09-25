#if !defined(AFX_SETWEATHERDLG1_H__1F7720A3_AA08_486E_B198_DB78FA732935__INCLUDED_)
#define AFX_SETWEATHERDLG1_H__1F7720A3_AA08_486E_B198_DB78FA732935__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SetWeatherDlg1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSetWeatherDlg dialog

class CSetWeatherDlg : public CDialog
{
// Construction
public:
	CSetWeatherDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSetWeatherDlg)
	enum { IDD = IDD_DIALOG3 };
	int		m_temperature;
	int		m_temperature2;
	int		m_temperature3;
	int		m_Type;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSetWeatherDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSetWeatherDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SETWEATHERDLG1_H__1F7720A3_AA08_486E_B198_DB78FA732935__INCLUDED_)
