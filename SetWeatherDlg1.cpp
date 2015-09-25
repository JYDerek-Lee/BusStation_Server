// SetWeatherDlg1.cpp : implementation file
//

#include "stdafx.h"
#include "BusStation_Server.h"
#include "SetWeatherDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetWeatherDlg dialog


CSetWeatherDlg::CSetWeatherDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetWeatherDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetWeatherDlg)
	m_temperature = 0;
	m_temperature2 = 0;
	m_temperature3 = 0;
	m_Type = -1;
	//}}AFX_DATA_INIT
}


void CSetWeatherDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetWeatherDlg)
	DDX_Text(pDX, IDC_temper, m_temperature);
	DDX_Text(pDX, IDC_temper2, m_temperature2);
	DDX_Text(pDX, IDC_temper3, m_temperature3);
	DDX_CBIndex(pDX, IDC_TYPE, m_Type);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetWeatherDlg, CDialog)
	//{{AFX_MSG_MAP(CSetWeatherDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetWeatherDlg message handlers
