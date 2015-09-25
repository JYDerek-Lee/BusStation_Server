// BusStation_ServerDoc.h : interface of the CBusStation_ServerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_BUSSTATION_SERVERDOC_H__A4B2A89D_8AEE_4F4A_AD0A_E4E376D3EFA9__INCLUDED_)
#define AFX_BUSSTATION_SERVERDOC_H__A4B2A89D_8AEE_4F4A_AD0A_E4E376D3EFA9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CBusStation_ServerDoc : public CDocument
{
protected: // create from serialization only
	CBusStation_ServerDoc();
	DECLARE_DYNCREATE(CBusStation_ServerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBusStation_ServerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBusStation_ServerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CBusStation_ServerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BUSSTATION_SERVERDOC_H__A4B2A89D_8AEE_4F4A_AD0A_E4E376D3EFA9__INCLUDED_)
