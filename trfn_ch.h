/* ligatures with unicode aliases */
static char *ligs_utf8[][2] = {
	{"ﬀ", "ff"},
	{"ﬁ", "fi"},
	{"ﬂ", "fl"},
	{"ﬃ", "ffi"},
	{"ﬄ", "ffl"},
	{"ﬆ", "st"},
};

/* AGL exceptions */
static char *agl_exceptions[][2] = {
	{"`", "ga"},	/* grave; using quoteleft for ` */
	{"'", "aq"},	/* quotesingle; using quoteright for ' */
	{"~", "ti"},	/* asciitilde; using tilde for ~ */
	{"^", "ha"},	/* asciicircum; using circumflex for ^ */
};

/* troff aliases */
static char *alts[][8] = {
	{"’", "'", "cq"},
	{"+", "pl"},
	{"-", "hy"},
	{"/", "sl"},
	{"=", "eq"},
	{"\"", "dq"},
	{"\\", "bs", "rs"},
	{"_", "ru", "ul"},
	{"‘", "`", "oq"},
	{"|", "or"},
	{"¡", "!!", "r!"},
	{"¢", "c|", "ct"},
	{"£", "L-", "ps"},
	{"¤", "xo", "cr"},
	{"¥", "Y-", "yn"},
	{"¦", "||"},
	{"§", "so", "sc"},
	{"©", "co"},
	{"ª", "a_"},
	{"«", "<<", "Fo"},
	{"¬", "-,", "no"},
	{"®", "ro", "rg"},
	{"°", "0^", "de"},
	{"±", "+-"},
	{"²", "2^"},
	{"³", "3^"},
	{"¶", "P!", "pg"},
	{"·", ".^"},
	{"¹", "1^"},
	{"º", "o_"},
	{"»", ">>", "Fc"},
	{"¼", "14"},
	{"½", "12"},
	{"¾", "34"},
	{"¿", "??", "r?"},
	{"À", "A`"},
	{"Á", "A'"},
	{"Â", "A^"},
	{"Ã", "A~"},
	{"Ä", "A:", "A\""},
	{"Å", "A*"},
	{"Æ", "AE"},
	{"Ç", "C,"},
	{"È", "E`"},
	{"É", "E'"},
	{"Ê", "E^"},
	{"Ë", "E:"},
	{"Ì", "I`"},
	{"Í", "I'"},
	{"Î", "I^"},
	{"Ï", "I:"},
	{"Ð", "D-"},
	{"Ñ", "N~"},
	{"Ò", "O`"},
	{"Ó", "O'"},
	{"Ô", "O^"},
	{"Õ", "O~"},
	{"Ö", "O:"},
	{"×", "xx", "mu"},
	{"Ø", "O/"},
	{"Ù", "U`"},
	{"Ú", "U'"},
	{"Û", "U^"},
	{"Ü", "U:"},
	{"Ý", "Y'"},
	{"Þ", "TH"},
	{"ß", "ss"},
	{"à", "a`"},
	{"á", "a'"},
	{"â", "a^"},
	{"ã", "a~"},
	{"ä", "a:"},
	{"å", "a*"},
	{"æ", "ae"},
	{"ç", "c,"},
	{"è", "e`"},
	{"é", "e'"},
	{"ê", "e^"},
	{"ë", "e:"},
	{"ì", "i`"},
	{"í", "i'"},
	{"î", "i^"},
	{"ï", "i:"},
	{"ð", "d-"},
	{"ñ", "n~"},
	{"ò", "o`"},
	{"ó", "o'"},
	{"ô", "o^"},
	{"õ", "o~"},
	{"ö", "o:"},
	{"÷", "di", "-:"},
	{"ø", "o/"},
	{"ù", "u`"},
	{"ú", "u'"},
	{"û", "u^"},
	{"ü", "u:"},
	{"ý", "y'"},
	{"þ", "th"},
	{"ÿ", "y:"},
	{"Č", "C<"},
	{"č", "c<"},
	{"Ď", "D<"},
	{"ď", "d<"},
	{"ě", "e<"},
	{"ň", "n<"},
	{"Ő", "O\""},
	{"ő", "o\""},
	{"Ř", "R<"},
	{"ř", "r<"},
	{"Š", "S<"},
	{"š", "s<"},
	{"Ť", "T<"},
	{"ť", "t<"},
	{"Ů", "U*"},
	{"ů", "u*"},
	{"Ű", "U\""},
	{"ű", "u\""},
	{"Ÿ", "Y:"},
	{"Ž", "Z<"},
	{"ž", "z<"},
	{"ƒ", "fn",},
	{"¸", ",,", ",a"},
	{"´", "aa", "\\'"},
	{"¯", "-a"},
	{"¨", "\"\"", ":a"},
	{"ga", "\\`"},
	{"ˆ", "^", "^a"},
	{"ˇ", "va"},
	{"˘", "Ua"},
	{"˙", ".a"},
	{"˚", "oa"},
	{"˛", "Ca"},
	{"˝", "\"a"},
	{"˜", "~"},
	{"Α", "*A"},
	{"Β", "*B"},
	{"Γ", "*G"},
	{"Ε", "*E"},
	{"Ζ", "*Z"},
	{"Η", "*Y"},
	{"Θ", "*H"},
	{"Ι", "*I"},
	{"Κ", "*K"},
	{"Λ", "*L"},
	{"Μ", "*M"},
	{"Ν", "*N"},
	{"Ξ", "*C"},
	{"Ο", "*O"},
	{"Π", "*P"},
	{"Ρ", "*R"},
	{"Σ", "*S"},
	{"Τ", "*T"},
	{"Υ", "*U"},
	{"Φ", "*F"},
	{"Χ", "*X"},
	{"Ψ", "*Q"},
	{"Ω", "*W", "Ω"}, {"Ω", "Ω", "*W"},
	{"α", "*a"},
	{"β", "*b"},
	{"γ", "*g"},
	{"δ", "*d"},
	{"ε", "*e"},
	{"ζ", "*z"},
	{"η", "*y"},
	{"θ", "*h"},
	{"ι", "*i"},
	{"κ", "*k"},
	{"λ", "*l"},
	{"μ", "*m", "µ", "/u"}, {"µ", "/u", "*m", "μ"},
	{"ν", "*n"},
	{"ξ", "*c"},
	{"ο", "*o"},
	{"π", "*p"},
	{"ρ", "*r"},
	{"ς", "ts"},
	{"σ", "*s"},
	{"τ", "*t"},
	{"υ", "*u"},
	{"φ", "*f"},
	{"χ", "*x"},
	{"ψ", "*q"},
	{"ω", "*w"},
	{"–", "en", "\\-"},
	{"—", "em", "--"},
	{"‚", "bq"},
	{"“", "``", "lq"},
	{"”", "''", "rq"},
	{"†", "dg"},
	{"‡", "dd"},
	{"•", "bu"},
	{"…", "el"},
	{"‰", "%0"},
	{"′", "fm"},
	{"‹", "fo"},
	{"›", "fc"},
	{"⁄", "fr"},
	{"ℑ", "If"},
	{"ℛ", "ws"},
	{"ℜ", "Rf"},
	{"ℵ", "af"},
	{"←", "<-"},
	{"↑", "ua"},
	{"→", "->"},
	{"↓", "da"},
	{"↔", "ab", "<>"},
	{"↵", "CR"},
	{"∀", "fa"},
	{"∂", "pd"},
	{"∃", "te"},
	{"∅", "es"},
	{"∆", "*D", "Δ"}, {"Δ", "∆", "*D"},
	{"∇", "gr"},
	{"∈", "mo"},
	{"∉", "!m"},
	{"∋", "st"},
	{"∏", "pr"},
	{"∑", "su"},
	{"−", "mi"},
	{"∓", "-+"},
	{"∗", "**"},
	{"√", "sr"},
	{"∝", "pt"},
	{"∞", "if"},
	{"∠", "an"},
	{"∧", "l&"},
	{"∨", "l|"},
	{"∩", "ca"},
	{"∪", "cu"},
	{"∫", "is"},
	{"∴", "tf"},
	{"∼", "ap"},
	{"≅", "cg", "=~"},
	{"≈", "~~"},
	{"≠", "!="},
	{"≡", "=="},
	{"≤", "<="},
	{"≥", ">="},
	{"⊂", "sb"},
	{"⊃", "sp"},
	{"⊄", "!b"},
	{"⊆", "ib"},
	{"⊇", "ip"},
	{"⊕", "O+"},
	{"⊗", "Ox"},
	{"⊥", "pp"},
	{"⋅", "c."},
	{"〈", "b<"},
	{"〉", "b>"},
	{"◊", "lz"},
	{"○", "ci"},
	{"⟨", "la"},
	{"⟩", "ra"},
	{"", "co"},
	{"", "rg"},
	{"", "tm"},
	{"", "rn"},
	{"", "av"},
	{"", "ah"},
	{"", "RG"},
	{"", "CO"},
	{"", "TM"},
	{"", "LT"},
	{"", "br", "LX"},
	{"", "LB"},
	{"⎛", "LT"},
	{"⎜", "LX"},
	{"⎝", "LB"},
	{"", "lc"},
	{"", "lx"},
	{"", "lf"},
	{"⎡", "lc"},
	{"⎢", "lx"},
	{"⎣", "lf"},
	{"", "lt"},
	{"", "lk"},
	{"", "lb"},
	{"", "bv", "|"},
	{"⎧", "lt"},
	{"⎨", "lk"},
	{"⎩", "lb"},
	{"⎪", "bv"},
	{"", "RT"},
	{"", "RX"},
	{"", "RB"},
	{"⎞", "RT"},
	{"⎟", "RX"},
	{"⎠", "RB"},
	{"", "rc"},
	{"", "rx"},
	{"", "rf"},
	{"⎤", "rc"},
	{"⎥", "rx"},
	{"⎦", "rf"},
	{"", "rt"},
	{"", "rk"},
	{"", "rb"},
	{"⎫", "rt"},
	{"⎬", "rk"},
	{"⎭", "rb"},
	{"ﬀ", "ff"},
	{"ﬁ", "fi"},
	{"ﬂ", "fl"},
	{"ﬃ", "ffi", "Fi"},
	{"ﬄ", "ffl", "Fl"},
	{"ﬆ", "st"},
};

/* different shapes of arabic and farsi characters */
static struct achar {
	char *name;
	unsigned c;
	unsigned s;
	unsigned i;
	unsigned m;
	unsigned f;
} achars[] = {
	{"hamza", 0x0621, 0xfe80},
	{"alefwithmaddaabove", 0x0622, 0xfe81, 0, 0, 0xfe82},
	{"alefwithhamzaabove", 0x0623, 0xfe83, 0, 0, 0xfe84},
	{"wawwithhamzaabove", 0x0624, 0xfe85, 0, 0, 0xfe86},
	{"alefwithhamzabelow", 0x0625, 0xfe87, 0, 0, 0xfe88},
	{"yehwithhamzaabove", 0x0626, 0xfe89, 0xfe8b, 0xfe8c, 0xfe8a},
	{"alef", 0x0627, 0xfe8d, 0, 0, 0xfe8e},
	{"arabicalef", 0x0627},
	{"beh", 0x0628, 0xfe8f, 0xfe91, 0xfe92, 0xfe90},
	{"tehmarbuta", 0x0629, 0xfe93, 0, 0, 0xfe94},
	{"teh", 0x062a, 0xfe95, 0xfe97, 0xfe98, 0xfe96},
	{"theh", 0x062b, 0xfe99, 0xfe9b, 0xfe9c, 0xfe9a},
	{"jeem", 0x062c, 0xfe9d, 0xfe9f, 0xfea0, 0xfe9e},
	{"hah", 0x062d, 0xfea1, 0xfea3, 0xfea4, 0xfea2},
	{"khah", 0x062e, 0xfea5, 0xfea7, 0xfea8, 0xfea6},
	{"dal", 0x062f, 0xfea9, 0, 0, 0xfeaa},
	{"thal", 0x0630, 0xfeab, 0, 0, 0xfeac},
	{"reh", 0x0631, 0xfead, 0, 0, 0xfeae},
	{"zain", 0x0632, 0xfeaf, 0, 0, 0xfeb0},
	{"seen", 0x0633, 0xfeb1, 0xfeb3, 0xfeb4, 0xfeb2},
	{"sheen", 0x0634, 0xfeb5, 0xfeb7, 0xfeb8, 0xfeb6},
	{"sad", 0x0635, 0xfeb9, 0xfebb, 0xfebc, 0xfeba},
	{"dad", 0x0636, 0xfebd, 0xfebf, 0xfec0, 0xfebe},
	{"tah", 0x0637, 0xfec1, 0xfec3, 0xfec4, 0xfec2},
	{"zah", 0x0638, 0xfec5, 0xfec7, 0xfec8, 0xfec6},
	{"ain", 0x0639, 0xfec9, 0xfecb, 0xfecc, 0xfeca},
	{"ghain", 0x063a, 0xfecd, 0xfecf, 0xfed0, 0xfece},
	{"tatweel", 0x0640},
	{"feh", 0x0641, 0xfed1, 0xfed3, 0xfed4, 0xfed2},
	{"qaf", 0x0642, 0xfed5, 0xfed7, 0xfed8, 0xfed6},
	{"kaf", 0x0643, 0xfed9, 0xfedb, 0xfedc, 0xfeda},
	{"lam", 0x0644, 0xfedd, 0xfedf, 0xfee0, 0xfede},
	{"meem", 0x0645, 0xfee1, 0xfee3, 0xfee4, 0xfee2},
	{"noon", 0x0646, 0xfee5, 0xfee7, 0xfee8, 0xfee6},
	{"heh", 0x0647, 0xfee9, 0xfeeb, 0xfeec, 0xfeea},
	{"waw", 0x0648, 0xfeed, 0, 0, 0xfeee},
	{"alefmaksura", 0x0649, 0xfeef, 0, 0, 0xfef0},
	{"yeh", 0x064a, 0xfef1, 0xfef3, 0xfef4, 0xfef2},
	{"fathatan", 0x064b, 0xfe70},
	{"dammatan", 0x064c, 0xfe72},
	{"kasratan", 0x064d, 0xfe74},
	{"fatha", 0x064e, 0xfe76, 0, 0xfe77, 0},
	{"damma", 0x064f, 0xfe78, 0, 0xfe79, 0},
	{"kasra", 0x0650, 0xfe7a, 0, 0xfe7b, 0},
	{"shadda", 0x0651, 0xfe7c, 0, 0xfe7c, 0},
	{"sukun", 0x0652, 0xfe7e, 0, 0xfe7f, 0},
	{"peh", 0x067e, 0xfb56, 0xfb58, 0xfb59, 0xfb57},
	{"tcheh", 0x0686, 0xfb7a, 0xfb7c, 0xfb7d, 0xfb7b},
	{"jeh", 0x0698, 0xfb8a, 0, 0, 0xfb8b},
	{"keheh", 0x06a9, 0xfb8e, 0xfb90, 0xfb91, 0xfb8f},
	{"gaf", 0x06af, 0xfb92, 0xfb94, 0xfb95, 0xfb93},
	{"farsiyeh", 0x06cc, 0xfbfc, 0xfbfe, 0xfbff, 0xfbfd},
	{"lamwithalef", 0xfefb, 0xfefb, 0, 0, 0xfefc},
	{"arabiccomma", 0x060c},
	{"arabicsemicolon", 0x061b},
	{"arabicquestionmark", 0x061f},
	{"arabicindicdigitzero", 0x0660},
	{"arabicindicdigitone", 0x0661},
	{"arabicindicdigittwo", 0x0662},
	{"arabicindicdigitthree", 0x0663},
	{"arabicindicdigitfour", 0x0664},
	{"arabicindicdigitfive", 0x0665},
	{"arabicindicdigitsix", 0x0666},
	{"arabicindicdigitseven", 0x0667},
	{"arabicindicdigiteight", 0x0668},
	{"arabicindicdigitnine", 0x0669},
	{"arabicpercentsign", 0x066a},
	{"extendedarabicindicdigitzero", 0x06f0},
	{"extendedarabicindicdigitone", 0x06f1},
	{"extendedarabicindicdigittwo", 0x06f2},
	{"extendedarabicindicdigitthree", 0x06f3},
	{"extendedarabicindicdigitfour", 0x06f4},
	{"extendedarabicindicdigitfive", 0x06f5},
	{"extendedarabicindicdigitsix", 0x06f6},
	{"extendedarabicindicdigitseven", 0x06f7},
	{"extendedarabicindicdigiteight", 0x06f8},
	{"extendedarabicindicdigitnine", 0x06f9},
	{"zeronojoin", 0x200c},
	{"zerojoin", 0x200d},
};

static int ctype_ascii[128] = {
	['!'] = 2, ['"'] = 2, ['#'] = 2, ['$'] = 2, ['%'] = 2,
	['&'] = 2, ['\''] = 2, ['('] = 3, [')'] = 3, ['*'] = 2,
	['+'] = 0, [','] = 1, ['-'] = 0, ['.'] = 0, ['/'] = 2,
	['0'] = 2, ['1'] = 2, ['2'] = 2, ['3'] = 2, ['4'] = 2,
	['5'] = 2, ['6'] = 2, ['7'] = 2, ['8'] = 2, ['9'] = 2,
	[':'] = 0, [';'] = 1, ['<'] = 0, ['='] = 0, ['>'] = 0,
	['?'] = 2, ['@'] = 3, ['A'] = 2, ['B'] = 2, ['C'] = 2,
	['D'] = 2, ['E'] = 2, ['F'] = 2, ['G'] = 2, ['H'] = 2,
	['I'] = 2, ['J'] = 3, ['K'] = 2, ['L'] = 2, ['M'] = 2,
	['N'] = 2, ['O'] = 2, ['P'] = 2, ['Q'] = 3, ['R'] = 2,
	['S'] = 2, ['T'] = 2, ['U'] = 2, ['V'] = 2, ['W'] = 2,
	['X'] = 2, ['Y'] = 2, ['Z'] = 2, ['['] = 3, ['\\'] = 2,
	[']'] = 3, ['^'] = 2, ['_'] = 1, ['a'] = 0, ['b'] = 2,
	['c'] = 0, ['d'] = 2, ['e'] = 0, ['f'] = 2, ['g'] = 1,
	['h'] = 2, ['i'] = 2, ['j'] = 3, ['k'] = 2, ['l'] = 2,
	['m'] = 0, ['n'] = 0, ['o'] = 0, ['p'] = 1, ['q'] = 1,
	['r'] = 0, ['s'] = 0, ['t'] = 2, ['u'] = 0, ['v'] = 0,
	['w'] = 0, ['x'] = 0, ['y'] = 1, ['z'] = 0, ['{'] = 3,
	['|'] = 3, ['}'] = 3, ['~'] = 0,
};
