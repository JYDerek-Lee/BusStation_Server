// BusStation_ServerView.h : interface of the CBusStation_ServerView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUSSTATION_SERVERVIEW_H__ABE19784_42C4_4849_AC5E_69CE314BE715__INCLUDED_)
#define AFX_BUSSTATION_SERVERVIEW_H__ABE19784_42C4_4849_AC5E_69CE314BE715__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define MAX_STATION 38
#define MAX_BUS 10

typedef struct Station{
	CPoint ptPos;
	int getIn;
	int getOut;
}stStation;

typedef struct Road{
	int leftStation;
	int rightStation;
	int state;
}stRoad;

typedef struct Bus{
	int type;
	int whichIn;
	int intPos;
	int intPeople;
}stBus;

typedef struct Weather{
	int type;
	int temperature;
	int temperature2;
	int temperature3;
}stWeather;

typedef struct InsSet{
	stBus myBus[MAX_BUS];
	stWeather myWeather;
}stINSSET;


class CBusStation_ServerView : public CView
{
protected: // create from serialization only
	CBusStation_ServerView();
	DECLARE_DYNCREATE(CBusStation_ServerView)

// Attributes
public:
	CBusStation_ServerDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBusStation_ServerView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	int m_clkSTNum;
	int m_speedNum;
	CString m_strTest;
	SOCKET g_ServSocket;
	SOCKET g_ClientSocket;
	SOCKET g_ClntSock[10];
	SOCKADDR_IN servAddr;
	SOCKADDR_IN clientAddr;
	CWinThread *pThread1, *pThread2;
	HANDLE hMutex;
	int clientAddrSize ;
	int clntNum;
	
	BOOL m_bTransparent; // 텍스트의 배경을 투명하게 할 것인지
	COLORREF m_colorText; // 텍스트 전경색
	LOGFONT m_logFont;  // 텍스트를 출력할 논리적 글꼴
	COLORREF m_bkText; // 텍스트 전경색

	stWeather m_Weather;
	stBus m_Bus[MAX_BUS];
	stRoad m_Road[MAX_STATION];
	stStation m_Station[MAX_STATION];

	virtual ~CBusStation_ServerView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBusStation_ServerView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnSetspeed();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnPinout();
	afx_msg void OnSetweather();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in BusStation_ServerView.cpp
inline CBusStation_ServerDoc* CBusStation_ServerView::GetDocument()
   { return (CBusStation_ServerDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUSSTATION_SERVERVIEW_H__ABE19784_42C4_4849_AC5E_69CE314BE715__INCLUDED_)
