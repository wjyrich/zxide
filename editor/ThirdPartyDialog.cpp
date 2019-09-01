#include "ThirdPartyDialog.h"
#include "ui_ThirdPartyDialog.h"

ThirdPartyDialog::ThirdPartyDialog(QWidget* parent)
    : QDialog(parent)
    , mUi(new Ui_ThirdPartyDialog)
{
    mUi->setupUi(this);

    mUi->textView->setHtml(QStringLiteral(
        "<html><body>"

        "<p>This program embeds FUSE (The Free Unix Spectrum Emulator):<br>"
        "<a href=\"http://fuse-emulator.sourceforge.net/\">http://fuse-emulator.sourceforge.net/</a><br>"
        "Copyright &copy; 1999-2018 Philip Kendall and others.<br>"
        "Licensed under the GNU General Public License.</p>"

        "<hr>"

        "<p>This program uses the Audio File library:<br>"
        "<a href=\"https://audiofile.68k.org/\">https://audiofile.68k.org/</a><br>"
        "Copyright &copy; 1998-2013, Michael Pruett.<br>"
        "Licensed under the GNU Lesser General Public License.</p>"

        "<hr>"

        "<p>This program uses bzip2:<br>"
        "<a href=\"https://sourceforge.net/projects/bzip2/\">https://sourceforge.net/projects/bzip2/</a><br>"
        "Copyright &copy; 1996-2019 Julian R Seward. All rights reserved.<br>"
        "Licensed under a BSD-like license.</p>"

        "<hr>"

        "<p>This program uses zlib:<br>"
        "<a href=\"https://www.zlib.net/\">https://www.zlib.net/</a><br>"
        "Copyright &copy; 1995-2017 Jean-loup Gailly and Mark Adler.</p>"

        "<hr>"

        "<p>This program uses &quot;Farm-Fresh Web Icons&quot; by FatCow:<br>"
        "<a href=\"http://www.fatcow.com/free-icons\">http://www.fatcow.com/free-icons</a></p>"

        "<hr>"

        "<p>This program uses Fugue Icons:<br>"
        "Copyright &copy; 2013 Yusuke Kamiyamane. All rights reserved.<br>"
        "Licensed under the Creative Commons Attribution 3.0 License.<br>"
        "<a href=\"https://p.yusukekamiyamane.com/\">https://p.yusukekamiyamane.com/</a></p>"

        "<hr>"

        "<p>This program uses Scintilla:<br>"
        "<a href=\"https://www.scintilla.org/\">https://www.scintilla.org/</a><br>"
        "Copyright &copy; 1998-2003 by Neil Hodgson. All Rights Reserved.<br>"
        "<br>"
        "Permission to use, copy, modify, and distribute this software and its<br>"
        "documentation for any purpose and without fee is hereby granted,<br>"
        "provided that the above copyright notice appear in all copies and that<br>"
        "both that copyright notice and this permission notice appear in<br>"
        "supporting documentation.<br>"
        "<br>"
        "NEIL HODGSON DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS<br>"
        "SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY<br>"
        "AND FITNESS, IN NO EVENT SHALL NEIL HODGSON BE LIABLE FOR ANY<br>"
        "SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES<br>"
        "WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS,<br>"
        "WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER<br>"
        "TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE<br>"
        "OR PERFORMANCE OF THIS SOFTWARE.</p>"

        "<hr>"

        "<p>This program uses Lua:<br>"
        "<a href=\"https://www.lua.org/\">https://www.lua.org/</a><br>"
        "Copyright &copy; 1994-2018 Lua.org, PUC-Rio.<br>"
        "<br>"
        "Permission is hereby granted, free of charge, to any person obtaining<br>"
        "a copy of this software and associated documentation files (the<br>"
        "\"Software\"), to deal in the Software without restriction, including<br>"
        "without limitation the rights to use, copy, modify, merge, publish,<br>"
        "distribute, sublicense, and/or sell copies of the Software, and to<br>"
        "permit persons to whom the Software is furnished to do so, subject to<br>"
        "the following conditions:<br>"
        "<br>"
        "The above copyright notice and this permission notice shall be<br>"
        "included in all copies or substantial portions of the Software.<br>"
        "<br>"
        "THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND,<br>"
        "EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF<br>"
        "MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.<br>"
        "IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY<br>"
        "CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,<br>"
        "TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE<br>"
        "SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.</p>"

        "</body></html>"
        ));
}

ThirdPartyDialog::~ThirdPartyDialog()
{
}
