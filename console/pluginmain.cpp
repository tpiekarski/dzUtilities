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

#include "console_pane.h"
#include "console_pane_action.h"
#include "console_clear_action.h"
#include "console_reload_action.h"
#include "console_properties_action.h"
#include "guid.h"
#include "version.h"
#include <dzplugin.h>

/*
 * Plugin Meta Information
 */
DZ_PLUGIN_DEFINITION("Console");
DZ_PLUGIN_AUTHOR("Thomas Piekarski");
DZ_PLUGIN_VERSION(PLUGIN_MAJOR, PLUGIN_MINOR, PLUGIN_REV, PLUGIN_BUILD);
DZ_PLUGIN_DESCRIPTION(
  "<strong>Console Plugin</strong>"
  "<p>"
  "This plug-in provides a console to the log file of DAZ Studio. The console is "
  "integrated as a pane and the purpose is for development, debugging and testing "
  "of new utility plug-ins."
  "</p>"
  "<p><strong>The plugin is provided \"as is\", without warranty of any kind.</strong></p>"
  "<p>"
  "For more information, current development and updates please refer to the "
  "<a href=\"https://github.com/tpiekarski/dzUtilities\">project website</a> at Github."
  "</p>"
);

/*
 * Plugin Class GUID
 */
DZ_PLUGIN_CLASS_GUID(ConsolePane, CONSOLE_PANE_CLASS_GUID);
DZ_PLUGIN_CLASS_GUID(ConsolePaneAction, CONSOLE_PANE_ACTION_CLASS_GUID);
DZ_PLUGIN_CLASS_GUID(ConsoleClearAction, CONSOLE_CLEAR_ACTION_CLASS_GUID);
DZ_PLUGIN_CLASS_GUID(ConsoleReloadAction, CONSOLE_RELOAD_ACTION_CLASS_GUID);
DZ_PLUGIN_CLASS_GUID(ConsolePropertiesAction, CONSOLE_PROPERTIES_ACTION_CLASS_GUID);
