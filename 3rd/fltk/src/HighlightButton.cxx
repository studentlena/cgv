//
// "$Id: HighlightButton.cxx 4886 2006-03-30 09:55:32Z fabien $"
//
// Copyright 1998-2006 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@fltk.org".
//

#include <fltk/events.h>
#include <fltk/HighlightButton.h>

using namespace fltk;

/*! \class fltk::HighlightButton
  Same as a normal button but the box() defaults to a style that draws
  as a flat rectangle until the mouse points at it, then it draws as
  a raised highlighted rectangle.
*/

static void revert(Style* s) {
  //s->color = GRAY75;
  s->box_ = HIGHLIGHT_UP_BOX;
  s->highlight_color_ = GRAY85;
}
static NamedStyle style("Highlight_Button", revert, &HighlightButton::default_style);
NamedStyle* HighlightButton::default_style = &::style;

HighlightButton::HighlightButton(int x,int y,int w,int h,const char *l)
  : Button(x,y,w,h,l)
{
  style(default_style);
}

//
// End of "$Id: HighlightButton.cxx 4886 2006-03-30 09:55:32Z fabien $".
//
