/*	NewsFlash
		Copyright 2010 Daniel Go� (Flash Systems)

		This file is part of NewsFlash

    NewsFlash is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    NewsFlash is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with NewsFlash.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <QFile>
#include <QResource>

///<summary>Writes the article overview HTML page</summary>
class CHtmlWriter
{
//-- Private properties
private:
	QFile* OutFile;
	
//-- c'tor and d'tor
public:
  CHtmlWriter(QFile* outFile, QString headerResource, QString bodyAttributes, QString title);
	~CHtmlWriter();
	
//TODO: Nocopy
  
//-- Public methods
public:
  void Write(const QString out);
	void Write(char* out);
};
