﻿   
#define ALREADY_INJECTED L"already injected" 
#define NEED_32_BIT L"architecture mismatch: only x86 can inject this process" 
#define NEED_64_BIT L"architecture mismatch: only x64 can inject this process" 
#define INJECT_FAILED L"couldn't inject" 
#define INVALID_CODEPAGE L"couldn't convert text (invalid codepage?)" 
#define PIPE_CONNECTED u8"pipe connected" 
#define INSERTING_HOOK u8"inserting hook: %s %p" 
#define REMOVING_HOOK u8"removing hook: %s" 
#define TOO_MANY_HOOKS u8"too many hooks: can't insert" 
#define HOOK_SEARCH_STARTING u8"starting hook search" 
#define HOOK_SEARCH_INITIALIZING u8"initializing hook search (%f%%)" 
#define NOT_ENOUGH_TEXT u8"not enough text to search accurately" 
#define HOOK_SEARCH_INITIALIZED u8"initialized hook search with %zd hooks" 
#define MAKE_GAME_PROCESS_TEXT u8"please click around in the game to force it to process text during the next %d seconds" 
#define HOOK_SEARCH_FINISHED u8"hook search finished, %d results found" 
#define OUT_OF_RECORDS_RETRY u8"out of search records, please retry if results are poor (default record count increased)" 
#define FUNC_MISSING u8"function not present" 
#define MODULE_MISSING u8"module not present" 
#define GARBAGE_MEMORY u8"memory inline constantly changing, useless to read" 
#define SEND_ERROR u8"Send ERROR (likely an unstable/incorrect H-code) in %s" 
#define READ_ERROR u8"Reader ERROR (likely an incorrect R-code) in %s" 
#define SearchForHooks_ERROR u8"SearchForHooks ERROR: out of memory, retrying to allocate %d" 
#define ResultsNum u8"%d results processed" 
#define HIJACK_ERROR u8"Hijack ERROR" 
#define COULD_NOT_FIND u8"could not find text" 
#define CONSOLE L"Console" 
#define InvalidLength  u8"something went very wrong (invalid length %d in %s)" 
#define InsertHookFailed u8"failed to insert hook %s" 
#define Match_Error u8"ERROR happened when matching engine %s " 
#define Attach_Error u8"ERROR happened when attaching engine %s ERROR" 
#define MatchedEngine u8"Matched engine %s" 
#define ConfirmStop "Confirmed engine %s, stop checking" 
#define Attach_Stop "Attach engine %s success and stop" 
#define ProcessRange "hijacking process located from 0x%p to 0x%p" 
#define WarningDummy "WARNING injected process is very small, possibly a dummy!" 
#define WndSelectProcess L"SelectProcess" 
#define WndLunaHostGui L"LunaHost GUI" 
#define WndSetting L"Setting" 
#define WndPlugins L"Plugins" 
#define NotifyInvalidHookCode L"Invalid HookCode" 
#define BtnSelectProcess L"Select Process" 
#define BtnDetach L"Detach" 
#define BtnSaveHook L"Save hook" 
#define BtnShowSettingWindow L"Settings" 
#define BtnAttach L"Attach" 
#define BtnRefresh L"Refresh" 
#define BtnToClipboard L"Copy To Clipboard" 
#define BtnReadOnly L"Text box Read only" 
#define BtnInsertUserHook L"Insert UserHook" 
#define BtnSearchHook L"Search for hooks" 
#define BtnPlugin L"Plugins" 
#define LblFlushDelay L"Flush delay" 
#define LblFilterRepeat L"Filter repetition" 
#define LblCodePage L"Default codepage" 
#define LblMaxBuff L"Max buffer size"
#define LblMaxHist L"Max history size"
#define LblAutoAttach L"Auto attach"
#define LblAutoAttach_savedonly L"Auto attach (saved only)"
#define MenuCopyHookCode L"CopyHookCode" 
#define MenuRemoveHook L"RemoveHook" 
#define MenuDetachProcess L"DetachProcess" 
#define MenuRemeberSelect L"Remeber Hook Selection" 
#define MenuForgetSelect L"Forget Hook Selection" 
#define MenuAddPlugin L"Add Plugin" 
#define MenuRemovePlugin L"Remove Plugin" 
#define MenuPluginRankUp L"Up" 
#define MenuPluginRankDown L"Down" 
#define MenuPluginEnable L"Enable" 
#define MenuPluginVisSetting L"Show Setting" 
#define DefaultFont L"Arial" 
#define CantLoadQtLoader L"Can't Load QtLoader.dll"
#define InvalidPlugin L"Invalid Plugin!"
#define InvalidDll L"Invalid Dll!"
#define InvalidDump L"Dumplicated!"
#define MsgError L"Error"
#define SEARCH_CJK L"Search for Chinese/Japanese/Korean"
#define HS_SETTINGS L"Settings"
#define BtnOk L"OK"
#define HS_START_HOOK_SEARCH L"Start hook search"
#define HS_SEARCH_PATTERN L"Search pattern (hex byte array)"
#define HS_SEARCH_DURATION L"Search duration (ms)"
#define HS_SEARCH_MODULE L"Search within module"
#define HS_PATTERN_OFFSET L"Offset from pattern start"
#define HS_MAX_HOOK_SEARCH_RECORDS L"Search result cap"
#define HS_MIN_ADDRESS L"Minimum address (hex)"
#define HS_MAX_ADDRESS L"Maximum address (hex)"
#define HS_STRING_OFFSET L"String offset (hex)"
#define HS_HOOK_SEARCH_FILTER L"Results must match this regex"
#define HS_TEXT L"Text"
#define HS_CODEPAGE L"Codepage"
#define HS_SEARCH_FOR_TEXT L"Search for specific text"
#define VersionLatest L"Latest version"
#define VersionCurrent L"Current version"
#define ProjectHomePage L"Github: https://github.com/HIllya51/LunaHook\nHomepage: https://lunatranslator.org\npatreon: https://patreon.com/HIllya51\n\nThis program is a core submodule of LunaTranslator and is fully integrated in Lunatranslator. This program contains only some simple functions, if you need more functions, please use LunaTranslator.\nIf you find unsupported games, please submit an issue"
#define LIST_HOOK L"Hook"
#define LIST_TEXT L"Text"
#define PROC_CONN L"process connected %d"
#define PROC_DISCONN L"process disconnected %d"
#define COPYSELECTION L"auto send selected text in textbox to clipboard"
#define FONTSELECT L"Select Font"