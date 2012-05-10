#ifndef INC_OPENHOLDEM_STATUSBAR_H
#define INC_OPENHOLDEM_STATUSBAR_H

extern class COpenHoldemStatusbar
{
public:
	COpenHoldemStatusbar(CWnd *main_window);
	~COpenHoldemStatusbar();
public:
	//void Update();
	void OnUpdateStatusbar();
	void GetWindowRect(RECT *statusbar_position);
private:
	void InitBasicStatusbar(CWnd *main_window);
	int InitStatusbar(CWnd *main_window);
private:
	CStatusBar	_status_bar;
	CString		_status_plcards,	_status_comcards,	_status_pokerhand;
	CString		_status_prwin,		_status_nopp,		_status_nit; 
	CString		_status_action,		_status_handrank;
} *p_openholdem_statusbar;

#endif // INC_STATUSBAR_H