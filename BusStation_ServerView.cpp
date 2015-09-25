// BusStation_ServerView.cpp : implementation of the CBusStation_ServerView class
//

#include "stdafx.h"
#include "BusStation_Server.h"

#include "BusStation_ServerDoc.h"
#include "BusStation_ServerView.h"

#include "setSpeedDlg.h"
#include "setPeopleDlg.h"
#include "SetWeatherDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


UINT ThreadMain(void *arg);
UINT ClientConn(void *arg);

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView

IMPLEMENT_DYNCREATE(CBusStation_ServerView, CView)

BEGIN_MESSAGE_MAP(CBusStation_ServerView, CView)
	//{{AFX_MSG_MAP(CBusStation_ServerView)
	ON_WM_LBUTTONDOWN()
	ON_WM_TIMER()
	ON_COMMAND(ID_SETSPEED, OnSetspeed)
	ON_WM_RBUTTONDOWN()
	ON_COMMAND(ID_PINOUT, OnPinout)
	ON_COMMAND(ID_SETWEATHER, OnSetweather)
	ON_WM_ERASEBKGND()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView construction/destruction

CBusStation_ServerView::CBusStation_ServerView()
{
	// TODO: add construction code here
	int i=0;

	m_Station[0].ptPos.x = 100;
	m_Station[0].ptPos.y = 200;
	m_Station[1].ptPos.x = 100;
	m_Station[1].ptPos.y = 150;
	m_Station[2].ptPos.x = 150;
	m_Station[2].ptPos.y = 150;
	m_Station[3].ptPos.x = 150;
	m_Station[3].ptPos.y = 100;
	m_Station[4].ptPos.x = 200;
	m_Station[4].ptPos.y = 100;
	m_Station[5].ptPos.x = 250;
	m_Station[5].ptPos.y = 100;
	m_Station[6].ptPos.x = 300;
	m_Station[6].ptPos.y = 100;
	m_Station[7].ptPos.x = 350;
	m_Station[7].ptPos.y = 100;
	m_Station[8].ptPos.x = 350;
	m_Station[8].ptPos.y = 150;
	m_Station[9].ptPos.x = 400;
	m_Station[9].ptPos.y = 150;
	m_Station[10].ptPos.x = 450;
	m_Station[10].ptPos.y = 150;
	
	m_Station[11].ptPos.x = 450;
	m_Station[11].ptPos.y = 100;
	m_Station[12].ptPos.x = 450;
	m_Station[12].ptPos.y = 50;
	m_Station[13].ptPos.x = 500;
	m_Station[13].ptPos.y = 50;
	m_Station[14].ptPos.x = 550;
	m_Station[14].ptPos.y = 50;
	m_Station[15].ptPos.x = 550;
	m_Station[15].ptPos.y = 100;
	m_Station[16].ptPos.x = 550;
	m_Station[16].ptPos.y = 150;
	m_Station[17].ptPos.x = 550;
	m_Station[17].ptPos.y = 200;

	m_Station[18].ptPos.x = 550;
	m_Station[18].ptPos.y = 250;
	m_Station[19].ptPos.x = 550;
	m_Station[19].ptPos.y = 300;
	m_Station[20].ptPos.x = 550;
	m_Station[20].ptPos.y = 350;
	m_Station[21].ptPos.x = 550;
	m_Station[21].ptPos.y = 400;
	m_Station[22].ptPos.x = 550;
	m_Station[22].ptPos.y = 450;

	m_Station[23].ptPos.x = 500;
	m_Station[23].ptPos.y = 450;
	m_Station[24].ptPos.x = 450;
	m_Station[24].ptPos.y = 450;
	m_Station[25].ptPos.x = 450;
	m_Station[25].ptPos.y = 400;
	m_Station[26].ptPos.x = 450;
	m_Station[26].ptPos.y = 350;
	m_Station[27].ptPos.x = 450;
	m_Station[27].ptPos.y = 300;
	m_Station[28].ptPos.x = 450;
	m_Station[28].ptPos.y = 250;
	m_Station[29].ptPos.x = 400;
	m_Station[29].ptPos.y = 250;

	m_Station[30].ptPos.x = 400;
	m_Station[30].ptPos.y = 300;
	m_Station[31].ptPos.x = 350;
	m_Station[31].ptPos.y = 300;
	m_Station[32].ptPos.x = 300;
	m_Station[32].ptPos.y = 300;
	m_Station[33].ptPos.x = 250;
	m_Station[33].ptPos.y = 300;

	m_Station[34].ptPos.x = 250;
	m_Station[34].ptPos.y = 250;
	m_Station[35].ptPos.x = 200;
	m_Station[35].ptPos.y = 250;
	m_Station[36].ptPos.x = 150;
	m_Station[36].ptPos.y = 250;
	m_Station[37].ptPos.x = 150;
	m_Station[37].ptPos.y = 200;

	for(i=0;i<MAX_STATION;i++){
		m_Station[i].getIn=7;
		m_Station[i].getOut=4;
	}

	for(i=0;i<MAX_STATION;i++){
		m_Road[i].rightStation = (i+1)%MAX_STATION;
		m_Road[i].leftStation = i%MAX_STATION;
	}
	
	//일반
	m_Bus[0].whichIn = 1;
	m_Bus[0].intPos = 4;
	m_Bus[0].intPeople = 0;
	m_Bus[0].type = 1;
	m_Bus[1].whichIn = 2;
	m_Bus[1].intPos = 15;
	m_Bus[1].intPeople = 0;
	m_Bus[1].type = 1;
	m_Bus[2].whichIn = 1;
	m_Bus[2].intPos = 22;
	m_Bus[2].intPeople = 0;
	m_Bus[2].type = 1;
	m_Bus[3].whichIn = 1;
	m_Bus[3].intPos = 30;
	m_Bus[3].intPeople = 0;
	m_Bus[3].type = 1;
	m_Bus[4].whichIn = 1;
	m_Bus[4].intPos = 37;
	m_Bus[4].intPeople = 0;
	m_Bus[4].type = 1;
	
	//장애인
	m_Bus[5].whichIn = 1;
	m_Bus[5].intPos = 7;
	m_Bus[5].intPeople = 0;
	m_Bus[5].type = 2;
	m_Bus[6].whichIn = 1;
	m_Bus[6].intPos = 24;
	m_Bus[6].intPeople = 0;
	m_Bus[6].type = 2;
	m_Bus[7].whichIn = 1;
	m_Bus[7].intPos = 34;
	m_Bus[7].intPeople = 0;
	m_Bus[7].type = 2;

	//테마
	m_Bus[8].whichIn = 1;
	m_Bus[8].intPos = 9;
	m_Bus[8].intPeople = 0;
	m_Bus[8].type = 3;
	m_Bus[9].whichIn = 1;
	m_Bus[9].intPos = 27;
	m_Bus[9].intPeople = 0;
	m_Bus[9].type = 3;


	clntNum = 0;

	m_speedNum = 1500;

	pThread1 = AfxBeginThread(ThreadMain, this, THREAD_PRIORITY_NORMAL, 0 , CREATE_SUSPENDED);
	pThread1->ResumeThread();

}

CBusStation_ServerView::~CBusStation_ServerView()
{
}

BOOL CBusStation_ServerView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView drawing

void CBusStation_ServerView::OnDraw(CDC* pDC)
{
	CBusStation_ServerDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	int i;
	int temp, tempPos;
	CString BusInfo;

	CPen newPen, *pOldPen;
	newPen.CreatePen(PS_SOLID, 1, RGB(200,155,0));
	pOldPen = pDC->SelectObject(&newPen);

	CBrush newBrush, *pOldBrush;
	newBrush.CreateSolidBrush(RGB(0,0,0));
	pOldBrush = pDC->SelectObject(&newBrush);

	// LOGFONT로부터 글꼴을 생성
	CFont newFont, *pOldFont;
	newFont.CreateFontIndirect(&m_logFont);
	// 생성된 글꼴을 DC에 선택
	pOldFont = (CFont *)pDC->SelectObject(&newFont);
	// 텍스트의 전경색과 배경색 설정
	pDC->SetTextColor(m_colorText);
	// 배경 모드를 설정
	if(m_bTransparent) 
		pDC->SetBkMode(TRANSPARENT);
	else 
		pDC->SetBkMode(OPAQUE);

	for(i=0;i<MAX_STATION;i++){
		pDC->Ellipse(m_Station[i].ptPos.x-7,m_Station[i].ptPos.y-7,m_Station[i].ptPos.x+7,m_Station[i].ptPos.y+7);
	}
	for(i=0;i<MAX_STATION;i++){
		pDC->MoveTo(m_Station[m_Road[i].leftStation].ptPos.x,m_Station[m_Road[i].leftStation].ptPos.y);
		pDC->LineTo(m_Station[m_Road[i].rightStation].ptPos.x,m_Station[m_Road[i].rightStation].ptPos.y);
	}
	for(i=0;i<MAX_STATION;i++){
		pDC->Ellipse(m_Station[i].ptPos.x-5,m_Station[i].ptPos.y-5,m_Station[i].ptPos.x+5,m_Station[i].ptPos.y+5);
	}
	for(i=0;i<MAX_BUS;i++){
		CPen newPen2, *pOldPen2;
//		CBrush newBrush2, *pOldBrush2;
		if(m_Bus[i].type==1){
			newPen2.CreatePen(PS_SOLID, 1, RGB(0,0,255));
			pOldPen2 = pDC->SelectObject(&newPen2);
// 			newBrush2.CreateSolidBrush(RGB(0,0,255));
// 			pOldBrush2 = pDC->SelectObject(&newBrush2);
		}
		else if(m_Bus[i].type==2){
			newPen2.CreatePen(PS_SOLID, 1, RGB(0,255,0));
			pOldPen2 = pDC->SelectObject(&newPen2);	
// 			newBrush2.CreateSolidBrush(RGB(0,255,0));
// 			pOldBrush2 = pDC->SelectObject(&newBrush2);
		}
		else if(m_Bus[i].type==3){
			newPen2.CreatePen(PS_SOLID, 1, RGB(255,0,0));
			pOldPen2 = pDC->SelectObject(&newPen2);
// 			newBrush2.CreateSolidBrush(RGB(255,0,0));
// 			pOldBrush2 = pDC->SelectObject(&newBrush2);
		}

		if(m_Bus[i].whichIn==1){
			BusInfo.Format("Bus_%d[S%d,%d]",m_Bus[i].type,m_Bus[i].intPos,m_Bus[i].intPeople);
			pDC->Rectangle(m_Station[m_Bus[i].intPos].ptPos.x-5,m_Station[m_Bus[i].intPos].ptPos.y-5,m_Station[m_Bus[i].intPos].ptPos.x+5,m_Station[m_Bus[i].intPos].ptPos.y+5);
			pDC->MoveTo(m_Station[m_Bus[i].intPos].ptPos.x+5,m_Station[m_Bus[i].intPos].ptPos.y-5);
			pDC->LineTo(m_Station[m_Bus[i].intPos].ptPos.x+15,m_Station[m_Bus[i].intPos].ptPos.y-15);
			pDC->TextOut(m_Station[m_Bus[i].intPos].ptPos.x+15,m_Station[m_Bus[i].intPos].ptPos.y-27,BusInfo);
		}else{
			BusInfo.Format("Bus_%d[R%d,%d]",m_Bus[i].type,m_Bus[i].intPos,m_Bus[i].intPeople);
			temp = m_Bus[i].intPos;
			if(m_Station[temp].ptPos.x == m_Station[(temp+1)%MAX_STATION].ptPos.x){
				tempPos = (m_Station[temp].ptPos.y + m_Station[(temp+1)%MAX_STATION].ptPos.y)/2;
				if(tempPos<0){
					tempPos = tempPos * -1;
				}
				pDC->Rectangle(m_Station[temp].ptPos.x-5,tempPos-5,m_Station[temp].ptPos.x+5,tempPos+5);
				pDC->MoveTo(m_Station[temp].ptPos.x+5,tempPos-5);
				pDC->LineTo(m_Station[temp].ptPos.x+15,tempPos-15);
				pDC->TextOut(m_Station[temp].ptPos.x+15,tempPos-27,BusInfo);
			}
			else{
				tempPos = (m_Station[temp].ptPos.x + m_Station[(temp+1)%MAX_STATION].ptPos.x)/2;
				if(tempPos<0){
					tempPos = tempPos * -1;
				}
				pDC->Rectangle(tempPos-5,m_Station[temp].ptPos.y-5,tempPos+5,m_Station[temp].ptPos.y+5);
				pDC->MoveTo(tempPos+5,m_Station[temp].ptPos.y-5);
				pDC->LineTo(tempPos+15,m_Station[temp].ptPos.y-15);
				pDC->TextOut(tempPos+15,m_Station[temp].ptPos.y-27,BusInfo);
			}
			
		}
//		pDC->SelectObject(pOldBrush2);
		pDC->SelectObject(pOldPen2);
	}
}

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView printing

BOOL CBusStation_ServerView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CBusStation_ServerView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CBusStation_ServerView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView diagnostics

#ifdef _DEBUG
void CBusStation_ServerView::AssertValid() const
{
	CView::AssertValid();
}

void CBusStation_ServerView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CBusStation_ServerDoc* CBusStation_ServerView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBusStation_ServerDoc)));
	return (CBusStation_ServerDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerView message handlers


/////////////////////////////////////////////////////////////////////////////
// Thread for Socket Global Function

UINT ThreadMain(void *arg){
	WSADATA wsaData ;
	WSAStartup( MAKEWORD( 2, 2 ), &wsaData );
	
	CBusStation_ServerView* pArg = (CBusStation_ServerView*)arg;

	char *servPort = "9000";

	pArg->hMutex = CreateMutex( NULL, FALSE, NULL);                                                      // Mutex 생성
	if( pArg->hMutex == NULL);    // MessageBox("CreateMutex error","SOCK Error");              // AddStringToList 함수는 대화상자에 출력해주는 함수
	
	pArg->g_ServSocket = socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );
	if( pArg->g_ServSocket == INVALID_SOCKET );    //MessageBox("socket error","SOCK Error");
    
	memset(&(pArg->servAddr),0,sizeof(pArg->servAddr));
	pArg->servAddr.sin_family = AF_INET;
	pArg->servAddr.sin_addr.s_addr = htonl( INADDR_ANY );
	pArg->servAddr.sin_port = htons(atoi( servPort ));
	
	if(bind( pArg->g_ServSocket, (SOCKADDR*)&(pArg->servAddr), sizeof(pArg->servAddr)) == SOCKET_ERROR){
		// 바인딩 오류 처리 부분
	}

	if( listen( pArg->g_ServSocket, 5) == SOCKET_ERROR ){
		// 리슨 오류 처리 부분

	}
	while(1){
		pArg->clientAddrSize = sizeof(pArg->clientAddr);
		pArg->g_ClientSocket = accept(pArg->g_ServSocket, (SOCKADDR*)&(pArg->clientAddr), &(pArg->clientAddrSize));
		
		WaitForSingleObject(pArg->hMutex, INFINITE);
		pArg->g_ClntSock[pArg->clntNum++] = pArg->g_ClientSocket;
		ReleaseMutex(pArg->hMutex);
		

		// 쓰레드 . ClinetConn
		pArg->pThread2 = AfxBeginThread(ClientConn, pArg, THREAD_PRIORITY_NORMAL, 0 , CREATE_SUSPENDED);
		pArg->pThread2->ResumeThread();
		
		
	}
	
	closesocket(pArg->g_ServSocket);
	WSACleanup();
	return 0 ;

}

UINT ClientConn(void *arg)
{

	CBusStation_ServerView* pArg = (CBusStation_ServerView*)arg;

	SOCKET temp = pArg->g_ClientSocket;
	int strLen = 0;
	char message[1024];
	stINSSET instruction;
	int i=0;

	while(1){
		for(i=0;i<MAX_BUS;i++){
			instruction.myBus[i] = pArg->m_Bus[i];
		}
		instruction.myWeather = pArg->m_Weather;
		send(temp, (char *)&instruction, sizeof(stINSSET), 0);
		Sleep(300);
	}

	WaitForSingleObject( pArg->hMutex, INFINITE);
	for(i = 0 ; i < pArg->clntNum; i++)
	{
		if( temp == pArg->g_ClntSock[i])
		{
			for( ; i < pArg->clntNum -1 ; i++)
				pArg->g_ClntSock[i] = pArg->g_ClntSock[i+1];
			break;
		}
	}
	pArg->clntNum--;
	ReleaseMutex(pArg->hMutex);
	closesocket(temp);
	return 0 ;
}

void CBusStation_ServerView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CView::OnLButtonDown(nFlags, point);
}

void CBusStation_ServerView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	int i=0;
	int j=0;
	int sameST = 0;
	for(i=0;i<MAX_BUS;i++){
		if(m_Bus[i].whichIn==1){
			if(rand()%10>=3){
				sameST = FALSE;
				for(j=0;j<MAX_STATION;j++){
					if((m_Bus[j].whichIn==2)&&(m_Bus[i].intPos==m_Bus[j].intPos)){
						sameST = TRUE;
					}
				}
				if(sameST==FALSE){
					m_Bus[i].whichIn = 2;
				}
			}
		}
		else{
			if(rand()%10>=3){
				sameST = FALSE;
				for(j=0;j<MAX_STATION;j++){
					if((m_Bus[j].whichIn==1)&&((m_Bus[i].intPos + 1)%MAX_STATION==m_Bus[j].intPos)){
						sameST = TRUE;
					}
				}
				if(sameST==FALSE){
					m_Bus[i].whichIn = 1;
					m_Bus[i].intPos = (m_Bus[i].intPos + 1)%MAX_STATION;
					m_Bus[i].intPeople += (m_Station[m_Bus[i].intPos].getIn - m_Station[m_Bus[i].intPos].getOut);
					m_Bus[i].intPeople += (rand()%40 - 22);
					if(m_Bus[i].intPeople < 0){
						m_Bus[i].intPeople = 0;
					}
					else if(m_Bus[i].intPeople > 50){
						m_Bus[i].intPeople = 50;
					}
				}
			}
		}
	}
	Invalidate();
	
	CView::OnTimer(nIDEvent);
}

void CBusStation_ServerView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	m_Weather.temperature = 20;
	m_Weather.temperature2 = 25;
	m_Weather.temperature3 = 17;
	m_Weather.type = 1;
	SetTimer(1,m_speedNum,NULL);
	srand(time(NULL));

	m_colorText = RGB(255, 255, 255);
	m_logFont.lfHeight  = 16;
	m_logFont.lfWidth  = 0;
	m_logFont.lfEscapement = 0;
	m_logFont.lfOrientation = 0;
	m_logFont.lfWeight  = FW_NORMAL;
	m_logFont.lfItalic  = FALSE;
	m_logFont.lfUnderline = FALSE;
	m_logFont.lfStrikeOut = FALSE;
	m_logFont.lfCharSet  = DEFAULT_CHARSET;
	m_logFont.lfOutPrecision = OUT_CHARACTER_PRECIS;
	m_logFont.lfClipPrecision = CLIP_CHARACTER_PRECIS;
	m_logFont.lfQuality  = DEFAULT_QUALITY;
	m_logFont.lfPitchAndFamily = DEFAULT_PITCH|FF_DONTCARE;
//	strcpy(m_logFont.lfFaceName, _T("맑은 고딕"));
	m_bkText = RGB(224, 192, 0);
}

void CBusStation_ServerView::OnSetspeed() 
{
	// TODO: Add your command handler code here
	CsetSpeedDlg myDlg;
	myDlg.m_speed = m_speedNum;
	if(myDlg.DoModal() == IDOK){
		m_speedNum = myDlg.m_speed;
		KillTimer(1);
		SetTimer(1,m_speedNum,NULL);
	}
	
}

void CBusStation_ServerView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMenu menu;
	CMenu* subMenu;
	CPoint pt;
	CRect rect;
	int i = 0;
	for(i=0;i<MAX_STATION;i++){
		if(((m_Station[i].ptPos.x-10)<=(point.x)) && (m_Station[i].ptPos.x+10>=(point.x)) &&
			((m_Station[i].ptPos.y-10)<=(point.y)) && (m_Station[i].ptPos.y+10>=(point.y))){
				m_clkSTNum = i;
				if(menu.LoadMenu(IDR_POPUP)){
					GetWindowRect(&rect);
					pt.x = rect.left+point.x;
					pt.y = rect.top+point.y;
					subMenu = menu.GetSubMenu(0);
					subMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_LEFTBUTTON, pt.x + 1, pt.y + 1, this);
			}
		}
	}

	

	CView::OnRButtonDown(nFlags, point);
}

void CBusStation_ServerView::OnPinout() 
{
	// TODO: Add your command handler code here
	CsetPeopleDlg myDlg;
	CString title;
	
	title.Format("%d 번 정류장", m_clkSTNum);
	myDlg.m_pin = m_Station[m_clkSTNum].getIn;
	myDlg.m_pout = m_Station[m_clkSTNum].getOut;
	myDlg.m_Title = title;

	if(myDlg.DoModal() == IDOK){
		m_Station[m_clkSTNum].getIn = myDlg.m_pin;
		m_Station[m_clkSTNum].getOut = myDlg.m_pout;
	}
	
}

void CBusStation_ServerView::OnSetweather() 
{
	// TODO: Add your command handler code here
	CSetWeatherDlg myDlg;
	
	myDlg.m_Type = m_Weather.type - 1;
	myDlg.m_temperature = m_Weather.temperature;
	myDlg.m_temperature2 = m_Weather.temperature2;
	myDlg.m_temperature3 = m_Weather.temperature3;

	
	if(myDlg.DoModal() == IDOK){
		m_Weather.type = myDlg.m_Type + 1;
		m_Weather.temperature = myDlg.m_temperature;
		m_Weather.temperature2 = myDlg.m_temperature2;
		m_Weather.temperature3 = myDlg.m_temperature3;
	}
}

BOOL CBusStation_ServerView::OnEraseBkgnd(CDC* pDC) 
{
	// TODO: Add your message handler code here and/or call default
	RECT rect; 
	GetClientRect(&rect); 
	pDC->FillSolidRect(&rect, RGB(0, 0, 0)); 

	return TRUE;
}
