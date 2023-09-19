{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"README.md","path":"README.md","contentType":"file"},{"name":"_print_binary.c","path":"_print_binary.c","contentType":"file"},{"name":"_print_caps_hexa_l_h.c","path":"_print_caps_hexa_l_h.c","contentType":"file"},{"name":"_print_caps_hexadecimal.c","path":"_print_caps_hexadecimal.c","contentType":"file"},{"name":"_print_hexadecimal.c","path":"_print_hexadecimal.c","contentType":"file"},{"name":"_print_hexadecimal_long.c","path":"_print_hexadecimal_long.c","contentType":"file"},{"name":"_print_hexadecimal_short.c","path":"_print_hexadecimal_short.c","contentType":"file"},{"name":"_print_long.c","path":"_print_long.c","contentType":"file"},{"name":"_print_number.c","path":"_print_number.c","contentType":"file"},{"name":"_print_octal.c","path":"_print_octal.c","contentType":"file"},{"name":"_print_octal_long.c","path":"_print_octal_long.c","contentType":"file"},{"name":"_print_octal_short.c","path":"_print_octal_short.c","contentType":"file"},{"name":"_print_pointer.c","path":"_print_pointer.c","contentType":"file"},{"name":"_print_reversed_string.c","path":"_print_reversed_string.c","contentType":"file"},{"name":"_print_rot13.c","path":"_print_rot13.c","contentType":"file"},{"name":"_print_short.c","path":"_print_short.c","contentType":"file"},{"name":"_print_string.c","path":"_print_string.c","contentType":"file"},{"name":"_print_unsigned_integer.c","path":"_print_unsigned_integer.c","contentType":"file"},{"name":"_print_unsigned_long.c","path":"_print_unsigned_long.c","contentType":"file"},{"name":"_print_unsigned_short.c","path":"_print_unsigned_short.c","contentType":"file"},{"name":"_printf.c","path":"_printf.c","contentType":"file"},{"name":"_putchar.c","path":"_putchar.c","contentType":"file"},{"name":"a.out","path":"a.out","contentType":"file"},{"name":"main.c","path":"main.c","contentType":"file"},{"name":"main.h","path":"main.h","contentType":"file"}],"totalCount":25}},"fileTreeProcessingTime":2.408871,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":691916219,"defaultBranch":"main","name":"test_printf","ownerLogin":"paschalugwu","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2023-09-15T06:56:39.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/106428248?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1694761000.888486","canEdit":false,"refType":"branch","currentOid":"b9ad01a79fe38b948efebfb4dbb43ad3740fd506"},"path":"_print_octal_short.c","currentUser":null,"blob":{"rawLines":["#include \"main.h\"","#include <stdio.h>","","/**"," * _print_octal_short - Prints an unsigned short integer in octal format"," * @n: The unsigned short integer to be printed"," *"," * Return: The number of characters printed"," */","int _print_octal_short(unsigned short n)","{","\tchar buffer[11];","\tint count = 0;","\tint i = 0;","","\tif (n == 0)","\t{","\t\tcount += _putchar('0');","\t\treturn (count);","\t}","","\twhile (n != 0)","\t{","\t\tbuffer[i] = (n % 8) + '0';","\t\tn /= 8;","\t\ti++;","\t}","","\twhile (i > 0)","\t{","\t\tcount += _putchar(buffer[i - 1]);","\t\ti--;","\t}","","\treturn (count);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":72,"cssClass":"pl-c"}],[{"start":0,"end":47,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":43,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":22,"cssClass":"pl-en"},{"start":23,"end":37,"cssClass":"pl-smi"},{"start":38,"end":39,"cssClass":"pl-s1"}],[],[{"start":1,"end":5,"cssClass":"pl-smi"},{"start":6,"end":12,"cssClass":"pl-s1"},{"start":13,"end":15,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":10,"cssClass":"pl-s1"},{"start":11,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"}],[{"start":1,"end":4,"cssClass":"pl-smi"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"},{"start":9,"end":10,"cssClass":"pl-c1"}],[],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-c1"}],[],[{"start":2,"end":7,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":11,"end":19,"cssClass":"pl-en"},{"start":20,"end":23,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"},{"start":10,"end":15,"cssClass":"pl-s1"}],[],[],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":10,"end":12,"cssClass":"pl-c1"},{"start":13,"end":14,"cssClass":"pl-c1"}],[],[{"start":2,"end":8,"cssClass":"pl-s1"},{"start":9,"end":10,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":15,"end":16,"cssClass":"pl-s1"},{"start":19,"end":20,"cssClass":"pl-c1"},{"start":22,"end":23,"cssClass":"pl-c1"},{"start":24,"end":27,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":7,"end":8,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":3,"end":5,"cssClass":"pl-c1"}],[],[],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"},{"start":12,"end":13,"cssClass":"pl-c1"}],[],[{"start":2,"end":7,"cssClass":"pl-s1"},{"start":8,"end":10,"cssClass":"pl-c1"},{"start":11,"end":19,"cssClass":"pl-en"},{"start":20,"end":26,"cssClass":"pl-s1"},{"start":27,"end":28,"cssClass":"pl-s1"},{"start":29,"end":30,"cssClass":"pl-c1"},{"start":31,"end":32,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":3,"end":5,"cssClass":"pl-c1"}],[],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":14,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/paschalugwu/test_printf/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/paschalugwu/test_printf/security/dependabot","repoSecurityAndAnalysisPath":"/paschalugwu/test_printf/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"_print_octal_short.c","displayUrl":"https://github.com/paschalugwu/test_printf/blob/main/_print_octal_short.c?raw=true","headerInfo":{"blobSize":"521 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"329dbee","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fpaschalugwu%2Ftest_printf%2Fblob%2Fmain%2F_print_octal_short.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"36","truncatedSloc":"31"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/paschalugwu/test_printf/discussions/new","newIssuePath":"/paschalugwu/test_printf/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/paschalugwu/test_printf/blob/main/_print_octal_short.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/paschalugwu/test_printf/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"paschalugwu","repoName":"test_printf","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"_print_octal_short","kind":"function","identStart":218,"identEnd":236,"extentStart":218,"extentEnd":254,"fullyQualifiedName":"_print_octal_short","identUtf16":{"start":{"lineNumber":9,"utf16Col":4},"end":{"lineNumber":9,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":9,"utf16Col":4},"end":{"lineNumber":9,"utf16Col":40}}}]}},"copilotInfo":null,"csrf_tokens":{"/paschalugwu/test_printf/branches":{"post":"3ZTCseRdmWnvgfYjusuKWWSoD5kLCgqwIOdeH5yUxNwdlfcXv769tre2nuSsM2XM1xmsmh4BvSqFdXpFXCrPzg"},"/repos/preferences":{"post":"QDWyhhqfvGyss2bOsGYyp6uC9MCdcLaKFvD_1NTWRb5QRhttu45Ho57rkU2vFiYfyYgNdMVKVpEY3nzqMjXZqw"}}},"title":"test_printf/_print_octal_short.c at main · paschalugwu/test_printf"}