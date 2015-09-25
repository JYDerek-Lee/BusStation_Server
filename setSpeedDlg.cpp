// setSpeedDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BusStation_Server.h"
#include "setSpeedDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CsetSpeedDlg dialog


CsetSpeedDlg::CsetSpeedDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CsetSpeedDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CsetSpeedDlg)
	m_speed = 0;
	//}}AFX_DATA_INIT
}


void CsetSpeedDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CsetSpeedDlg)
	DDX_Text(pDX, IDC_SPEED, m_speed);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CsetSpeedDlg, CDialog)
	//{{AFX_MSG_MAP(CsetSpeedDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CsetSpeedDlg message handlers
