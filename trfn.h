void trfn_init(int res, int special, int kmin, int bbox);
void trfn_done(void);
void trfn_trfont(char *name);
void trfn_psfont(char *fontname);
void trfn_print(void);
void trfn_char(char *c, int n, int u, int wid, int llx, int lly, int urx, int ury);
void trfn_kern(char *c1, char *c2, int x);
