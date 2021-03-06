﻿/*
** Mei LiJuan, 2019
*/

////////////////////////////////////////////////////////////////////////////////
#ifndef __REPLACE_DIALOG_H__
#define __REPLACE_DIALOG_H__
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

class ReplaceDialog : public Fl_Window
{
public:
	ReplaceDialog(int w, int h, const char* t);
	~ReplaceDialog() noexcept;

public:
//properties
	void attach_BackColor(const RefPtr<Fl_Color>& refColor) noexcept;
	RefPtr<Fl_Color> detach_BackColor() noexcept;

//commands
	void attach_CloseCommand(std::function<void()>&& cf) noexcept;
	std::function<void()> detach_CloseCommand() noexcept;

//notifications
	PropertyNotification get_Notification();

//methods
	void Update();

private:
	static void close_cb(Fl_Window* pW, void* pD);
	static void close_idle_hd(void* pD);

private:
	Fl_Input m_replaceFind;
    Fl_Input m_replaceWith;
    Fl_Button m_replaceAll;
    Fl_Return_Button m_replaceNext;
    Fl_Button m_replaceCancel;

//properties
	RefPtr<Fl_Color>  m_refBackColor;

//commands
	std::function<void()> m_cmdClose;
};

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////
#endif
////////////////////////////////////////////////////////////////////////////////
