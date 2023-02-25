#define CMDLENGTH 50
#define DELIMITER "  "
#define SCRIPTS_DIR "/opt/dwmblocks-async/statusbar/"

const Block blocks[] = {
	BLOCK("sb-wifi",    30,    0),
	BLOCK("sb-df",      420,   0),
  BLOCK("sb-volume",   0,    5),
	BLOCK("sb-battery", 60,    0),
	BLOCK("sb-date",    60,    0),
};
