
// MFC_ProjectDlg.h : 헤더 파일
//

#pragma once


// CMFC_ProjectDlg 대화 상자
class CMFC_ProjectDlg : public CDialogEx
{
// 생성입니다.
public:
	CMFC_ProjectDlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnRadio1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
//<<<<<<< HEAD
	afx_msg void OnBnClickedButton2236();
//=======
	afx_msg void OnBnClickedButton46();
//>>>>>>> ec6a3147f7366628f8133af4ce9821886594a85d
};
