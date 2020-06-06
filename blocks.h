//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{"🎵", "mpc | sed q", 20, 0},
	
	{"💾", "df -h | awk '/sda4/ { print \"/home: \"$3\"/\"$2\" \"$5 }'", 60, 0 },

	{"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{"🕑", "date '+%F (%a) %R'",          60, 						0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
