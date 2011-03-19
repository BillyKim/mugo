/*
    mugo, sgf editor.
    Copyright (C) 2009-2011 nsase.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <QObject>
#include <QUndoStack>

class Document : public QObject
{
    Q_OBJECT
public:
    explicit Document(QObject *parent = 0);

    QUndoStack* undoStack(){ return &undoStack_; }

    const QString& name() const{ return name_; }
    void setName(const QString& name){ name_ = name; }

signals:

public slots:

private:
    QUndoStack undoStack_;
    QString name_;
};

#endif // DOCUMENT_H
