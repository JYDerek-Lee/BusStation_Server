// setPeopleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BusStation_Server.h"
#include "setPeopleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CsetPeopleDlg dialog


CsetPeopleDlg::CsetPeopleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CsetPeopleDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CsetPeopleDlg)
	m_pin = 0;
	m_pout = 0;
	//}}AFX_DATA_INIT
}


void CsetPeopleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CsetPeopleDlg)
	DDX_Text(pDX, IDC_EDIT1, m_pin);
	DDV_MinMaxInt(pDX, m_pin, 0, 20);
	DDX_Text(pDX, IDC_EDIT2, m_pout);
	DDV_MinMaxInt(pDX, m_pout, 0, 20);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CsetPeopleDlg, CDialog)
	//{{AFX_MSG_MAP(CsetPeopleDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CsetPeopleDlg message handlers

BOOL CsetPeopleDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	SetWindowText(m_Title);


	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
