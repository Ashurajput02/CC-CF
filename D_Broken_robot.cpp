
#include <bits/stdc++.h>

const int MAXN = 1000008;
const int MAXNUM = 1005;
const int INF = 0x7fffffff;
const int MOD = 1000000007;
#define SIZE_C int
using namespace std;
#define RMJ_TEST
const inline int sqrt_c(const int x)
{
    int l = 0;
    int r = MAXN;
    int mid;
    while (1)
    {
        if (r - l == 1)
        {
            return l;
        }
        mid = (l + r) >> 1;
        if (mid * mid <= x)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
}

template <typename cactus>
void swap_c(cactus &c1, cactus &c2)
{
    cactus t = c1;
    c1 = c2;
    c2 = t;
}

const int lowbit(int x)
{ // lowbit for tree array
    return x & (-x);
}

const bool inrange(int l, int r, int lx, int rx)
{
    // if [l,r] is contained in [lx,rx]
    return l >= lx && r <= rx;
}

const bool outofrange(int l, int r, int lx, int rx)
{
    // if [l,r] is not contained in [lx,rx]
    return r < lx || l > rx;
}

template <typename cactus>
const cactus add_c(const cactus a, const cactus b)
{
    return a + b;
}

template <typename cactus>
const cactus minus_c(const cactus a, const cactus b)
{
    return a - b;
}

template <typename cactus>
const cactus multiply_c(const cactus a, const cactus b)
{
    return a * b;
}

template <typename cactus>
const cactus divide_c(const cactus a, const cactus b)
{
    return a / b;
}

template <typename cactus>
const cactus max_c(const cactus a, const cactus b)
{
    return a > b ? a : b;
}

template <typename cactus>
const cactus min_c(const cactus a, const cactus b)
{
    return a < b ? a : b;
}

/*******************************************************************************/
// quick write
const bool isnum(const char ch)
{
    return ch >= '0' && ch <= '9';
}

const bool isnum(const int ch)
{
    return ch >= '0' && ch <= '9';
}

const bool notnum(const char ch)
{
    return ch < '0' || ch > '9';
}

const bool notnum(const int ch)
{
    return ch < '0' || ch > '9';
}

inline void print(int pr)
{
    if (pr < 0)
    {
        putchar('-');
        pr = -pr;
    }
    if (pr >= 0 && pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(short pr)
{
    if (pr < 0)
    {
        putchar('-');
        pr = -pr;
    }
    if (pr >= 0 && pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(long pr)
{
    if (pr < 0)
    {
        putchar('-');
    }
    if (pr >= 0 && pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(long long pr)
{
    if (pr < 0)
    {
        putchar('-');
        pr = -pr;
    }
    if (pr >= 0 && pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

#ifndef RMJ_TEST
inline void print(__int128 pr)
{
    if (pr < 0)
    {
        putchar('-');
        pr = -pr;
    }
    if (pr >= 0 && pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}
#endif

inline void print(unsigned int pr)
{
    if (pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(unsigned short pr)
{
    if (pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(unsigned long pr)
{
    if (pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

inline void print(unsigned long long pr)
{
    if (pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}

#ifndef RMJ_TEST
inline void print(unsigned __int128 pr)
{
    if (pr < 10)
    {
        putchar(pr + '0');
        return;
    }
    print(pr / 10);
    putchar(pr % 10 + '0');
}
#endif

inline void print(const bool pr)
{
    putchar(pr + '0');
}

inline void print(const char ch)
{
    putchar(ch);
}

inline void print(const char *c)
{
    const int len = strlen(c);
    for (int i = 0; i < len; ++i)
        putchar(*(c + i));
}

inline void print(const string str)
{
    int lng = str.length();
    for (int i = 0; i < lng; i++)
    {
        putchar(str[i]);
    }
}

inline void print(const double db)
{
    printf("%f", db);
}

inline void print(const float db)
{
    printf("%f", db);
}

/*******************************************************************************/
// quick read
inline void qread(int &rd)
{
    int sgn = 1;
    int ret = 0;
    char r = getchar();
    while (notnum(r) && r != '-')
    {
        r = getchar();
    }
    if (r == '-')
    {
        sgn = -1;
    }
    else
    {
        ret = r - '0';
    }
    r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = sgn * ret;
}

inline void qread(long long &rd)
{
    long long sgn = 1;
    long long ret = 0;
    char r = getchar();
    while (notnum(r) && r != '-')
    {
        r = getchar();
    }
    if (r == '-')
    {
        sgn = -1;
    }
    else
    {
        ret = r - '0';
    }
    r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = sgn * ret;
}

inline void qread(short &rd)
{
    int sgn = 1;
    int ret = 0;
    char r = getchar();
    while (notnum(r) && r != '-')
    {
        r = getchar();
    }
    if (r == '-')
    {
        sgn = -1;
    }
    else
    {
        ret = r - '0';
    }
    r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = sgn * ret;
}

inline void qread(long &rd)
{
    long sgn = 1;
    long ret = 0;
    char r = getchar();
    while (notnum(r) && r != '-')
    {
        r = getchar();
    }
    if (r == '-')
    {
        sgn = -1;
    }
    else
    {
        ret = r - '0';
    }
    r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = sgn * ret;
}

#ifndef RMJ_TEST
inline void qread(__int128 &rd)
{
    __int128 sgn = 1;
    __int128 ret = 0;
    char r = getchar();
    while (notnum(r) && r != '-')
    {
        r = getchar();
    }
    if (r == '-')
    {
        sgn = -1;
    }
    else
    {
        ret = r - '0';
    }
    r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = sgn * ret;
}
#endif

inline void qread(unsigned int &rd)
{
    unsigned int ret = 0;
    char r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = ret;
}

inline void qread(unsigned long long &rd)
{
    unsigned long long ret = 0;
    char r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = ret;
}

inline void qread(unsigned short &rd)
{
    unsigned short ret = 0;
    char r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = ret;
}

inline void qread(unsigned long &rd)
{
    unsigned long ret = 0;
    char r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = ret;
}

#ifndef RMJ_TEST
inline void qread(unsigned __int128 &rd)
{
    unsigned __int128 ret = 0;
    char r = getchar();
    while (isnum(r))
    {
        ret *= 10;
        ret += r - '0';
        r = getchar();
    }
    rd = ret;
}
#endif

inline void qread(bool &rd)
{
    char r = getchar();
    while (r != '0' && r != '1')
    {
        r = getchar();
    }
    rd = (r == '1');
}

inline const bool char_in_end(const char c)
{
    return c == '\n' || c == ' ';
}

inline void qread(char &rd)
{
    rd = getchar();
    while (char_in_end(rd))
    {
        rd = getchar();
    }
}

inline void qread(string &rd)
{
    char gt = getchar();
    rd = "";
    while (char_in_end(gt))
    {
        gt = getchar();
    }
    while (!char_in_end(gt))
    {
        rd += gt;
        gt = getchar();
    }
}

inline void qread(char *rd)
{
    char gt = getchar();
    while (char_in_end(gt))
    {
        gt = getchar();
    }
    while (!char_in_end(gt))
    {
        *rd += gt;
        rd++;
        gt = getchar();
    }
    *rd = '\0';
}

inline void qread(double &rd)
{
    scanf("%lf", &rd);
}

inline void qread(float &rd)
{
    scanf("%f", &rd);
}

char iofx[MAXNUM] = {' ', '\n', '\t'};

class io_assist
{
private:
    unsigned int num;

public:
    io_assist(const unsigned int n);
    io_assist(void);
    const char fx(void);
    void operator=(const unsigned int n);
    void redirect(char rdr);
    void redirect(unsigned int re, char rdr);
} space(0), enter(1), tab(2);

io_assist::io_assist(const unsigned int n)
{
    num = n;
}

io_assist::io_assist(void)
{
    num = 0;
}

const char io_assist::fx(void)
{
    return iofx[num];
}

void io_assist::operator=(const unsigned int n)
{
    num = n;
}

void io_assist::redirect(char rdr)
{
    iofx[num] = rdr;
}

void io_assist::redirect(unsigned int re, char rdr)
{
    iofx[re] = rdr;
}

class io
{
public:
    io operator>>(int &it);
    io operator>>(long &it);
    io operator>>(short &it);
    io operator>>(long long &it);
#ifndef RMJ_TEST
    io operator>>(__int128 &it);
#endif
    io operator>>(unsigned int &it);
    io operator>>(unsigned long &it);
    io operator>>(unsigned short &it);
    io operator>>(unsigned long long &it);
#ifndef RMJ_TEST
    io operator>>(unsigned __int128 &it);
#endif
    io operator>>(bool &it);
    io operator>>(char &it);
    io operator>>(string &it);
    io operator>>(char *it);
    io operator>>(float &it);
    io operator>>(double &it);
    io operator<<(const int ot);
    io operator<<(const short ot);
    io operator<<(const long ot);
    io operator<<(const long long ot);
#ifndef RMJ_TEST
    io operator<<(const __int128 ot);
#endif
    io operator<<(const unsigned int ot);
    io operator<<(const unsigned short ot);
    io operator<<(const unsigned long ot);
    io operator<<(const unsigned long long ot);
#ifndef RMJ_TEST
    io operator<<(const unsigned __int128 ot);
#endif
    io operator<<(const bool ot);
    io operator<<(const char ot);
    io operator<<(const string ot);
    io operator<<(io_assist ot);
    io operator<<(const char *ot);
    io operator<<(const double ot);
    io operator<<(const float ot);
} cactusin, cactusout, cactusio, cio;

io io::operator>>(int &it)
{
    qread(it);
    return *this;
}

io io::operator>>(long &it)
{
    qread(it);
    return *this;
}

io io::operator>>(short &it)
{
    qread(it);
    return *this;
}

io io::operator>>(long long &it)
{
    qread(it);
    return *this;
}

#ifndef RMJ_TEST
io io::operator>>(__int128 &it)
{
    qread(it);
    return *this;
}
#endif

io io::operator>>(unsigned int &it)
{
    qread(it);
    return *this;
}

io io::operator>>(unsigned long &it)
{
    qread(it);
    return *this;
}

io io::operator>>(unsigned short &it)
{
    qread(it);
    return *this;
}

io io::operator>>(unsigned long long &it)
{
    qread(it);
    return *this;
}

#ifndef RMJ_TEST
io io::operator>>(unsigned __int128 &it)
{
    qread(it);
    return *this;
}
#endif

io io::operator>>(bool &it)
{
    qread(it);
    return *this;
}

io io::operator>>(char &it)
{
    qread(it);
    return *this;
}

io io::operator>>(string &it)
{
    qread(it);
    return *this;
}

io io::operator>>(char *it)
{
    qread(it);
    return *this;
}

io io::operator>>(float &it)
{
    qread(it);
    return *this;
}

io io::operator>>(double &it)
{
    qread(it);
    return *this;
}

io io::operator<<(const int ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const short ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const long ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const long long ot)
{
    print(ot);
    return *this;
}

#ifndef RMJ_TEST
io io::operator<<(const __int128 ot)
{
    print(ot);
    return *this;
}
#endif

io io::operator<<(const unsigned int ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const unsigned short ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const unsigned long ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const unsigned long long ot)
{
    print(ot);
    return *this;
}

#ifndef RMJ_TEST
io io::operator<<(const unsigned __int128 ot)
{
    print(ot);
    return *this;
}
#endif

io io::operator<<(const bool ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const char ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const string ot)
{
    print(ot);
    return *this;
}

io io::operator<<(io_assist ot)
{
    print(ot.fx());
    return *this;
}

io io::operator<<(const char *ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const double ot)
{
    print(ot);
    return *this;
}

io io::operator<<(const float ot)
{
    print(ot);
    return *this;
}

template <typename cactus>
class io_pointer_i
{
    friend class io;

private:
    cactus *st_l;
    io iox;

public:
    explicit io_pointer_i(cactus *al, io io_x);
    io operator>>(cactus *ar);
    io operator>>(const int len);
};

template <typename cactus>
io_pointer_i<cactus>::io_pointer_i(cactus *al, io io_x)
{
    st_l = al;
    iox = io_x;
}

template <typename cactus>
io io_pointer_i<cactus>::operator>>(cactus *ar)
{
    for (; st_l < ar; st_l++)
    {
        qread(*st_l);
    }
    return iox;
}

template <typename cactus>
io io_pointer_i<cactus>::operator>>(const int len)
{
    for (int i = 1; i <= len; i++)
    {
        qread(*st_l);
        st_l++;
    }
    return iox;
}

template <typename cactus>
class io_pointer_o
{
    friend class io;

private:
    cactus *st_l;
    io iox;
    io_assist sep;

public:
    explicit io_pointer_o(cactus *al, io io_x);
    io operator<<(cactus *ar);
    io operator<<(const int len);
    io_pointer_o<cactus> operator<<(io_assist ioassist);
};

template <typename cactus>
io_pointer_o<cactus>::io_pointer_o(cactus *al, io io_x)
{
    st_l = al;
    iox = io_x;
}

template <typename cactus>
io io_pointer_o<cactus>::operator<<(cactus *ar)
{
    for (; st_l < ar; st_l++)
    {
        print(*st_l);
        print(sep.fx());
    }
    return iox;
}

template <typename cactus>
io io_pointer_o<cactus>::operator<<(const int len)
{
    for (int i = 1; i <= len; i++)
    {
        print(*st_l);
        print(sep.fx());
        st_l++;
    }
    return iox;
}

template <typename cactus>
io_pointer_i<cactus> operator>>(io io_tag, cactus *a1)
{
    io_pointer_i<cactus> io_it(a1, io_tag);
    return io_it;
}

template <typename cactus>
io_pointer_o<cactus> operator<<(io io_tag, cactus *a1)
{
    io_pointer_o<cactus> io_ot(a1, io_tag);
    return io_ot;
}

template <typename cactus>
io_pointer_o<cactus> io_pointer_o<cactus>::operator<<(io_assist ioassist)
{
    sep = ioassist;
    return *this;
}

#define db double
signed main()
{
    int n, m, x, y;
    db dp[1003][1003];
    cio >> n >> m >> x >> y;
    for (int i = n - 1; i >= x; i--)
    {
        for (int T = 1; T <= 50; T++)
        {
            if (m == 1)
            {
                dp[i][1] = (dp[i][1] + dp[i + 1][1]) / 2.0 + 1.0;
            }
            else
            {
                dp[i][1] = (dp[i][1] + dp[i + 1][1] + dp[i][2]) / 3.0 + 1.0;
                dp[i][m] = (dp[i][m] + dp[i + 1][m] + dp[i][m - 1]) / 3.0 + 1.0;
                for (int j = 2; j <= m - 1; j++)
                {
                    dp[i][j] = (dp[i][j] + dp[i + 1][j] + dp[i][j - 1] + dp[i][j + 1]) / 4.0 + 1.0;
                }
            }
        }
    }
    cio << dp[x][y];
    return 0;
}
// ccf
