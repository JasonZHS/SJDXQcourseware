﻿/*
** XIN YUAN, 2020, BSD (2)
*/

////////////////////////////////////////////////////////////////////////////////

#include "precomp.h"

#include "../TextApp.h"

////////////////////////////////////////////////////////////////////////////////
namespace CSL {
////////////////////////////////////////////////////////////////////////////////

// TextApp

std::function<void()> TextApp::get_CloseReplaceCommand()
{
	return [this]()
			{
				this->m_upReplacePart.reset();
			};
}

////////////////////////////////////////////////////////////////////////////////
}
////////////////////////////////////////////////////////////////////////////////