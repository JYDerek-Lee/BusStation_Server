; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CBusStation_ServerView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "BusStation_Server.h"
LastPage=0

ClassCount=8
Class1=CBusStation_ServerApp
Class2=CBusStation_ServerDoc
Class3=CBusStation_ServerView
Class4=CMainFrame

ResourceCount=6
Resource1=IDR_POPUP
Class5=CAboutDlg
Resource2=IDD_DIALOG2
Class6=CsetSpeedDlg
Resource3=IDD_ABOUTBOX
Class7=CsetPeopleDlg
Resource4=IDD_DIALOG1
Resource5=IDR_MAINFRAME
Class8=CSetWeatherDlg
Resource6=IDD_DIALOG3

[CLS:CBusStation_ServerApp]
Type=0
HeaderFile=BusStation_Server.h
ImplementationFile=BusStation_Server.cpp
Filter=N

[CLS:CBusStation_ServerDoc]
Type=0
HeaderFile=BusStation_ServerDoc.h
ImplementationFile=BusStation_ServerDoc.cpp
Filter=N

[CLS:CBusStation_ServerView]
Type=0
HeaderFile=BusStation_ServerView.h
ImplementationFile=BusStation_ServerView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CBusStation_ServerView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=W
LastObject=CMainFrame
BaseClass=CFrameWnd
VirtualFilter=fWC




[CLS:CAboutDlg]
Type=0
HeaderFile=BusStation_Server.cpp
ImplementationFile=BusStation_Server.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_SETSPEED
Command17=ID_SETWEATHER
Command18=ID_APP_ABOUT
CommandCount=18

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[DLG:IDD_DIALOG1]
Type=1
Class=CsetSpeedDlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_SPEED,edit,1350631552
Control4=IDC_STATIC,static,1342308352

[CLS:CsetSpeedDlg]
Type=0
HeaderFile=setSpeedDlg.h
ImplementationFile=setSpeedDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_SPEED

[DLG:IDD_DIALOG2]
Type=1
Class=CsetPeopleDlg
ControlCount=6
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDOK,button,1342242817
Control4=IDCANCEL,button,1342242816
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352

[CLS:CsetPeopleDlg]
Type=0
HeaderFile=setPeopleDlg.h
ImplementationFile=setPeopleDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CsetPeopleDlg

[MNU:IDR_POPUP]
Type=1
Class=?
Command1=ID_PINOUT
CommandCount=1

[DLG:IDD_DIALOG3]
Type=1
Class=CSetWeatherDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_temper,edit,1350631553
Control4=IDC_STATIC,static,1342308353
Control5=IDC_temper2,edit,1350631553
Control6=IDC_STATIC,static,1342308353
Control7=IDC_temper3,edit,1350631553
Control8=IDC_STATIC,static,1342308353
Control9=IDC_STATIC,button,1342177287
Control10=IDC_TYPE,combobox,1344339971

[CLS:CSetWeatherDlg]
Type=0
HeaderFile=SetWeatherDlg1.h
ImplementationFile=SetWeatherDlg1.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CSetWeatherDlg

