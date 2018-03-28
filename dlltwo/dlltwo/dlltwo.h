#pragma once

#include <QtWidgets/QWidget>

#include "ui_dlltwo.h"
#include "stdafx.h"
class dlltwo : public QWidget
{
	Q_OBJECT

public:
	dlltwo(QWidget *parent = Q_NULLPTR);
	void keyPressEvent(QKeyEvent *event);
public slots:
	void startHook();
	void endHook();
private:
	CdllOne dll_obj;
	Ui::dlltwoClass ui;
};
