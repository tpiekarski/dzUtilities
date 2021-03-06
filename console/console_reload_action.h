/*
* Project:   dzUtilities::Console
* Github:    https://github.com/tpiekarski/dzUtilities
* Copyright: (c) 2017-2018 Thomas Piekarski <t.piekarski@deloquencia.de>
* License:   Mozilla Public License, v. 2.0
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
*
*/

#ifndef H_CONSOLE_RELOAD_ACTION
#define H_CONSOLE_RELOAD_ACTION

// Console Headers
#include "console_constants.h"

// DAZ Studio SDK Headers
#include <dzaction.h>

class ConsoleReloadAction : public DzAction {

  Q_OBJECT

public:
  ConsoleReloadAction();

protected:
  QString getActionGroup() const override { return CONSOLE_ACTION_GROUP; };
  void executeAction() override;

};

#endif

