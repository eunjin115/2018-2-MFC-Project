
// MFC_ProjectDlg.h : ��� ����
//

#pragma once


// CMFC_ProjectDlg ��ȭ ����
class CMFC_ProjectDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CMFC_ProjectDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_PROJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
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
<<<<<<< HEAD
	afx_msg void OnEnChangeEdit100();
	afx_msg void OnBnClickedButton55();
=======
	afx_msg void OnBnClickedButton46();
>>>>>>> ec6a3147f7366628f8133af4ce9821886594a85d
};
