// BusStation_ServerDoc.cpp : implementation of the CBusStation_ServerDoc class
//

#include "stdafx.h"
#include "BusStation_Server.h"

#include "BusStation_ServerDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerDoc

IMPLEMENT_DYNCREATE(CBusStation_ServerDoc, CDocument)

BEGIN_MESSAGE_MAP(CBusStation_ServerDoc, CDocument)
	//{{AFX_MSG_MAP(CBusStation_ServerDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerDoc construction/destruction

CBusStation_ServerDoc::CBusStation_ServerDoc()
{
	// TODO: add one-time construction code here

}

CBusStation_ServerDoc::~CBusStation_ServerDoc()
{
}

BOOL CBusStation_ServerDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerDoc serialization

void CBusStation_ServerDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerDoc diagnostics

#ifdef _DEBUG
void CBusStation_ServerDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBusStation_ServerDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CBusStation_ServerDoc commands
