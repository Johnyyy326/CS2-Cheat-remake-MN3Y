#pragma once

namespace CrashCapture {
	// VEH: our-module / fail-fast first chance.
	// VCH: any unhandled (client.dll leave AVs too).
	// Documents\mn3y remake\crash.log
	void Install();
	void Uninstall();
}
