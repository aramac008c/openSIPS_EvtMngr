/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 79 "cfg.y"


#include <stdlib.h>
#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <string.h>
#include <errno.h>
#include "route_struct.h"
#include "globals.h"
#include "route.h"
#include "dprint.h"
#include "sr_module.h"
#include "modparam.h"
#include "ip_addr.h"
#include "resolve.h"
#include "socket_info.h"
#include "name_alias.h"
#include "ut.h"
#include "dset.h"
#include "pvar.h"
#include "blacklists.h"
#include "xlog.h"
#include "db/db_insertq.h"
#include "bin_interface.h"
#include "net/trans.h"
#include "config.h"

#ifdef SHM_EXTRA_STATS
#include "mem/module_info.h"
#endif

#ifdef DEBUG_DMALLOC
#include <dmalloc.h>
#endif

/* hack to avoid alloca usage in the generated C file (needed for compiler
 with no built in alloca, like icc*/
#undef _ALLOCA_H


extern int yylex();
static void yyerror(char* s);
static void yyerrorf(char* fmt, ...);
static char* tmp;
static int i_tmp, rc;
static void* cmd_tmp;
static struct socket_id* lst_tmp;
static int rt;  /* Type of route block for find_export */
static str s_tmp;
static str tstr;
static struct ip_addr* ip_tmp;
static pv_spec_t *spec;
static pv_elem_t *pvmodel;
static struct bl_rule *bl_head = 0;
static struct bl_rule *bl_tail = 0;

action_elem_t elems[MAX_ACTION_ELEMS];
static action_elem_t route_elems[MAX_ACTION_ELEMS];
action_elem_t *a_tmp;

static inline void warn(char* s);
static struct socket_id* mk_listen_id(char*, enum sip_protos, int);
static struct socket_id* set_listen_id_adv(struct socket_id *, char *, int);
static struct multi_str *new_string(char *s);

extern int line;
extern int column;
extern int startcolumn;
extern char *finame;

#ifndef SHM_EXTRA_STATS
struct multi_str{
	char *s;
	struct multi_str* next;
};
#else 
static struct multi_str *tmp_mod;
#endif

#define get_cfg_file_name \
	((finame) ? finame : cfg_file ? cfg_file : "default")



#define mk_action_(_res, _type, _no, _elems) \
	do { \
		_res = mk_action(_type, _no, _elems, line, get_cfg_file_name); \
	} while(0)
#define mk_action0(_res, _type, _p1_type, _p2_type, _p1, _p2) \
	do { \
		_res = mk_action(_type, 0, 0, line, get_cfg_file_name); \
	} while(0)
#define mk_action1(_res, _type, _p1_type, _p1) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		_res = mk_action(_type, 1, elems, line, get_cfg_file_name); \
	} while(0)
#define	mk_action2(_res, _type, _p1_type, _p2_type, _p1, _p2) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		elems[1].type = _p2_type; \
		elems[1].u.data = _p2; \
		_res = mk_action(_type, 2, elems, line, get_cfg_file_name); \
	} while(0)
#define mk_action3(_res, _type, _p1_type, _p2_type, _p3_type, _p1, _p2, _p3) \
	do { \
		elems[0].type = _p1_type; \
		elems[0].u.data = _p1; \
		elems[1].type = _p2_type; \
		elems[1].u.data = _p2; \
		elems[2].type = _p3_type; \
		elems[2].u.data = _p3; \
		_res = mk_action(_type, 3, elems, line, get_cfg_file_name); \
	} while(0)


/* Line 371 of yacc.c  */
#line 192 "cfg.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "cfg.tab.h".  */
#ifndef YY_YY_CFG_TAB_H_INCLUDED
# define YY_YY_CFG_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FORWARD = 258,
     SEND = 259,
     DROP = 260,
     ASSERT = 261,
     EXIT = 262,
     RETURN = 263,
     LOG_TOK = 264,
     ERROR = 265,
     ROUTE = 266,
     ROUTE_FAILURE = 267,
     ROUTE_ONREPLY = 268,
     ROUTE_BRANCH = 269,
     ROUTE_ERROR = 270,
     ROUTE_LOCAL = 271,
     ROUTE_STARTUP = 272,
     ROUTE_TIMER = 273,
     ROUTE_EVENT = 274,
     SET_HOST = 275,
     SET_HOSTPORT = 276,
     PREFIX = 277,
     STRIP = 278,
     STRIP_TAIL = 279,
     APPEND_BRANCH = 280,
     REMOVE_BRANCH = 281,
     PV_PRINTF = 282,
     SET_USER = 283,
     SET_USERPASS = 284,
     SET_PORT = 285,
     SET_URI = 286,
     REVERT_URI = 287,
     SET_DSTURI = 288,
     RESET_DSTURI = 289,
     ISDSTURISET = 290,
     FORCE_RPORT = 291,
     FORCE_LOCAL_RPORT = 292,
     FORCE_TCP_ALIAS = 293,
     IF = 294,
     ELSE = 295,
     SWITCH = 296,
     CASE = 297,
     DEFAULT = 298,
     SBREAK = 299,
     WHILE = 300,
     FOR = 301,
     IN = 302,
     SET_ADV_ADDRESS = 303,
     SET_ADV_PORT = 304,
     FORCE_SEND_SOCKET = 305,
     SERIALIZE_BRANCHES = 306,
     NEXT_BRANCHES = 307,
     USE_BLACKLIST = 308,
     UNUSE_BLACKLIST = 309,
     MAX_LEN = 310,
     SETFLAG = 311,
     RESETFLAG = 312,
     ISFLAGSET = 313,
     SETBFLAG = 314,
     RESETBFLAG = 315,
     ISBFLAGSET = 316,
     METHOD = 317,
     URI = 318,
     FROM_URI = 319,
     TO_URI = 320,
     SRCIP = 321,
     SRCPORT = 322,
     DSTIP = 323,
     DSTPORT = 324,
     PROTO = 325,
     AF = 326,
     MYSELF = 327,
     MSGLEN = 328,
     NULLV = 329,
     CACHE_STORE = 330,
     CACHE_FETCH = 331,
     CACHE_COUNTER_FETCH = 332,
     CACHE_REMOVE = 333,
     CACHE_ADD = 334,
     CACHE_SUB = 335,
     CACHE_RAW_QUERY = 336,
     XDBG = 337,
     XLOG = 338,
     XLOG_BUF_SIZE = 339,
     XLOG_FORCE_COLOR = 340,
     XLOG_DEFAULT_LEVEL = 341,
     RAISE_EVENT = 342,
     SUBSCRIBE_EVENT = 343,
     CONSTRUCT_URI = 344,
     GET_TIMESTAMP = 345,
     SCRIPT_TRACE = 346,
     FORK = 347,
     DEBUG_MODE = 348,
     DEBUG = 349,
     ENABLE_ASSERTS = 350,
     ABORT_ON_ASSERT = 351,
     LOGLEVEL = 352,
     LOGSTDERROR = 353,
     LOGFACILITY = 354,
     LOGNAME = 355,
     AVP_ALIASES = 356,
     LISTEN = 357,
     MEMGROUP = 358,
     ALIAS = 359,
     AUTO_ALIASES = 360,
     DNS = 361,
     REV_DNS = 362,
     DNS_TRY_IPV6 = 363,
     DNS_TRY_NAPTR = 364,
     DNS_RETR_TIME = 365,
     DNS_RETR_NO = 366,
     DNS_SERVERS_NO = 367,
     DNS_USE_SEARCH = 368,
     MAX_WHILE_LOOPS = 369,
     CHILDREN = 370,
     CHECK_VIA = 371,
     SHM_HASH_SPLIT_PERCENTAGE = 372,
     SHM_SECONDARY_HASH_SIZE = 373,
     MEM_WARMING_ENABLED = 374,
     MEM_WARMING_PATTERN_FILE = 375,
     MEM_WARMING_PERCENTAGE = 376,
     MEMLOG = 377,
     MEMDUMP = 378,
     EXECMSGTHRESHOLD = 379,
     EXECDNSTHRESHOLD = 380,
     TCPTHRESHOLD = 381,
     EVENT_SHM_THRESHOLD = 382,
     EVENT_PKG_THRESHOLD = 383,
     QUERYBUFFERSIZE = 384,
     QUERYFLUSHTIME = 385,
     SIP_WARNING = 386,
     SOCK_MODE = 387,
     SOCK_USER = 388,
     SOCK_GROUP = 389,
     UNIX_SOCK = 390,
     UNIX_SOCK_CHILDREN = 391,
     UNIX_TX_TIMEOUT = 392,
     SERVER_SIGNATURE = 393,
     SERVER_HEADER = 394,
     USER_AGENT_HEADER = 395,
     LOADMODULE = 396,
     MPATH = 397,
     MODPARAM = 398,
     MAXBUFFER = 399,
     CHROOT = 400,
     WDIR = 401,
     MHOMED = 402,
     POLL_METHOD = 403,
     TCP_ACCEPT_ALIASES = 404,
     TCP_CHILDREN = 405,
     TCP_CONNECT_TIMEOUT = 406,
     TCP_CON_LIFETIME = 407,
     TCP_LISTEN_BACKLOG = 408,
     TCP_MAX_CONNECTIONS = 409,
     TCP_NO_NEW_CONN_BFLAG = 410,
     TCP_KEEPALIVE = 411,
     TCP_KEEPCOUNT = 412,
     TCP_KEEPIDLE = 413,
     TCP_KEEPINTERVAL = 414,
     TCP_MAX_MSG_TIME = 415,
     ADVERTISED_ADDRESS = 416,
     ADVERTISED_PORT = 417,
     DISABLE_CORE = 418,
     OPEN_FD_LIMIT = 419,
     MCAST_LOOPBACK = 420,
     MCAST_TTL = 421,
     TOS = 422,
     DISABLE_DNS_FAILOVER = 423,
     DISABLE_DNS_BLACKLIST = 424,
     DST_BLACKLIST = 425,
     DISABLE_STATELESS_FWD = 426,
     DB_VERSION_TABLE = 427,
     DB_DEFAULT_URL = 428,
     DB_MAX_ASYNC_CONNECTIONS = 429,
     DISABLE_503_TRANSLATION = 430,
     SYNC_TOKEN = 431,
     ASYNC_TOKEN = 432,
     EQUAL = 433,
     EQUAL_T = 434,
     GT = 435,
     LT = 436,
     GTE = 437,
     LTE = 438,
     DIFF = 439,
     MATCH = 440,
     NOTMATCH = 441,
     COLONEQ = 442,
     PLUSEQ = 443,
     MINUSEQ = 444,
     SLASHEQ = 445,
     MULTEQ = 446,
     MODULOEQ = 447,
     BANDEQ = 448,
     BOREQ = 449,
     BXOREQ = 450,
     AND = 451,
     OR = 452,
     BRSHIFT = 453,
     BLSHIFT = 454,
     BXOR = 455,
     BAND = 456,
     BOR = 457,
     MODULO = 458,
     MULT = 459,
     SLASH = 460,
     MINUS = 461,
     PLUS = 462,
     BNOT = 463,
     NOT = 464,
     NUMBER = 465,
     ZERO = 466,
     ID = 467,
     STRING = 468,
     SCRIPTVAR = 469,
     IPV6ADDR = 470,
     COMMA = 471,
     SEMICOLON = 472,
     RPAREN = 473,
     LPAREN = 474,
     LBRACE = 475,
     RBRACE = 476,
     LBRACK = 477,
     RBRACK = 478,
     AS = 479,
     USE_CHILDREN = 480,
     DOT = 481,
     CR = 482,
     COLON = 483,
     ANY = 484,
     SCRIPTVARERR = 485
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 204 "cfg.y"

	long intval;
	unsigned long uval;
	char* strval;
	struct expr* expr;
	struct action* action;
	struct net* ipnet;
	struct ip_addr* ipaddr;
	struct socket_id* sockid;
	struct _pv_spec *specval;
	struct multi_str* multistr;


/* Line 387 of yacc.c  */
#line 479 "cfg.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CFG_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 507 "cfg.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  188
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5588

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  231
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  592
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1254

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    13,    15,    17,    18,
      21,    22,    25,    26,    29,    30,    33,    34,    37,    38,
      41,    42,    45,    46,    49,    50,    53,    55,    57,    59,
      61,    63,    65,    67,    69,    72,    75,    79,    85,    91,
      94,    96,   100,   106,   112,   114,   116,   119,   121,   125,
     129,   135,   141,   149,   151,   153,   155,   158,   168,   179,
     183,   185,   188,   192,   196,   200,   204,   208,   212,   216,
     220,   224,   228,   232,   236,   240,   244,   248,   252,   256,
     260,   264,   268,   271,   275,   278,   282,   285,   289,   292,
     296,   299,   303,   306,   310,   314,   318,   322,   326,   330,
     334,   338,   342,   346,   350,   354,   358,   362,   366,   370,
     374,   378,   382,   386,   390,   394,   398,   402,   406,   410,
     414,   418,   422,   426,   430,   434,   438,   442,   446,   450,
     454,   458,   462,   466,   470,   474,   478,   482,   486,   490,
     494,   498,   502,   506,   510,   514,   518,   522,   526,   530,
     534,   538,   542,   546,   550,   554,   558,   562,   566,   570,
     574,   578,   582,   586,   590,   594,   598,   602,   606,   610,
     614,   618,   622,   626,   630,   634,   638,   642,   646,   650,
     654,   658,   664,   670,   674,   678,   682,   686,   690,   694,
     698,   702,   706,   710,   714,   718,   722,   726,   730,   734,
     738,   742,   746,   750,   754,   758,   761,   765,   768,   776,
     780,   784,   788,   792,   796,   800,   804,   808,   812,   815,
     818,   821,   830,   839,   842,   844,   846,   854,   856,   858,
     862,   865,   868,   870,   872,   874,   879,   887,   890,   898,
     901,   906,   914,   917,   925,   928,   933,   936,   941,   944,
     949,   952,   962,   965,   973,   983,   993,   996,  1000,  1004,
    1007,  1011,  1015,  1017,  1019,  1021,  1023,  1025,  1027,  1029,
    1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,  1047,  1049,
    1051,  1053,  1055,  1057,  1059,  1061,  1065,  1069,  1073,  1077,
    1081,  1085,  1089,  1093,  1096,  1100,  1104,  1108,  1112,  1116,
    1120,  1124,  1128,  1132,  1135,  1139,  1143,  1146,  1150,  1154,
    1157,  1161,  1165,  1168,  1172,  1176,  1179,  1183,  1187,  1191,
    1194,  1198,  1202,  1206,  1209,  1213,  1217,  1221,  1224,  1228,
    1232,  1236,  1240,  1243,  1247,  1251,  1253,  1257,  1259,  1261,
    1263,  1267,  1271,  1273,  1275,  1277,  1279,  1281,  1283,  1285,
    1287,  1289,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1307,
    1311,  1315,  1319,  1323,  1327,  1331,  1335,  1339,  1343,  1346,
    1350,  1354,  1358,  1362,  1364,  1366,  1368,  1372,  1375,  1377,
    1381,  1384,  1387,  1389,  1392,  1395,  1397,  1399,  1401,  1403,
    1406,  1408,  1411,  1415,  1421,  1425,  1433,  1441,  1444,  1446,
    1449,  1451,  1458,  1464,  1469,  1473,  1480,  1486,  1491,  1495,
    1499,  1502,  1504,  1508,  1510,  1513,  1516,  1518,  1521,  1525,
    1527,  1529,  1531,  1533,  1537,  1541,  1545,  1549,  1554,  1559,
    1562,  1567,  1571,  1574,  1579,  1584,  1591,  1594,  1599,  1606,
    1610,  1612,  1616,  1618,  1623,  1628,  1632,  1634,  1639,  1646,
    1649,  1654,  1659,  1664,  1667,  1672,  1677,  1680,  1685,  1690,
    1693,  1700,  1707,  1712,  1717,  1720,  1727,  1734,  1739,  1744,
    1747,  1754,  1761,  1766,  1771,  1774,  1781,  1784,  1789,  1794,
    1801,  1804,  1809,  1814,  1817,  1822,  1827,  1830,  1835,  1840,
    1843,  1848,  1853,  1856,  1861,  1868,  1873,  1877,  1879,  1884,
    1889,  1896,  1903,  1908,  1911,  1916,  1921,  1924,  1929,  1934,
    1937,  1942,  1947,  1950,  1955,  1960,  1963,  1968,  1972,  1974,
    1979,  1982,  1987,  1991,  1993,  1997,  1999,  2003,  2005,  2009,
    2011,  2016,  2020,  2022,  2027,  2032,  2037,  2040,  2045,  2050,
    2055,  2058,  2063,  2068,  2071,  2076,  2081,  2084,  2088,  2093,
    2096,  2101,  2106,  2109,  2114,  2119,  2122,  2131,  2142,  2153,
    2160,  2169,  2178,  2189,  2200,  2213,  2226,  2237,  2248,  2261,
    2274,  2283,  2290,  2294,  2299,  2304,  2307,  2312,  2317,  2322,
    2327,  2334,  2341,  2346,  2353,  2362,  2369,  2378,  2393,  2400,
    2404,  2411,  2420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     232,     0,    -1,   233,    -1,   233,   234,    -1,   234,    -1,
     233,     1,    -1,   256,    -1,   257,    -1,    -1,   235,   264,
      -1,    -1,   236,   265,    -1,    -1,   237,   266,    -1,    -1,
     238,   267,    -1,    -1,   239,   268,    -1,    -1,   240,   269,
      -1,    -1,   241,   270,    -1,    -1,   242,   271,    -1,    -1,
     243,   272,    -1,   227,    -1,   258,    -1,   213,    -1,   285,
      -1,   212,    -1,   210,    -1,   229,    -1,   210,    -1,   207,
     210,    -1,   206,   210,    -1,   245,   228,   244,    -1,   245,
     228,   244,   228,   246,    -1,   245,   228,   244,   228,     1,
      -1,   210,     1,    -1,   244,    -1,   229,   228,   244,    -1,
     229,   228,   244,   228,   246,    -1,   229,   228,   244,   228,
       1,    -1,   248,    -1,   249,    -1,   249,   250,    -1,   248,
      -1,   248,   225,   210,    -1,   248,   224,   244,    -1,   248,
     224,   244,   225,   210,    -1,   248,   224,   244,   228,   246,
      -1,   248,   224,   244,   228,   246,   225,   210,    -1,   229,
      -1,   245,    -1,   213,    -1,   213,   253,    -1,   219,   252,
     216,   283,   216,   246,   216,   213,   218,    -1,   209,   219,
     252,   216,   283,   216,   246,   216,   213,   218,    -1,   255,
     216,   254,    -1,   254,    -1,   255,     1,    -1,    94,   178,
     247,    -1,    92,   178,   210,    -1,    97,   178,   247,    -1,
      95,   178,   210,    -1,    95,   178,     1,    -1,    96,   178,
     210,    -1,    96,   178,     1,    -1,    93,   178,   210,    -1,
      93,   178,     1,    -1,    98,   178,   210,    -1,    98,   178,
       1,    -1,    99,   178,   212,    -1,    99,   178,     1,    -1,
     100,   178,   213,    -1,   100,   178,     1,    -1,   106,   178,
     210,    -1,   106,   178,     1,    -1,   107,   178,   210,    -1,
     107,   178,     1,    -1,   108,   178,   210,    -1,   108,     1,
      -1,   109,   178,   210,    -1,   109,     1,    -1,   110,   178,
     210,    -1,   110,     1,    -1,   111,   178,   210,    -1,   111,
       1,    -1,   112,   178,   210,    -1,   112,     1,    -1,   113,
     178,   210,    -1,   113,     1,    -1,   114,   178,   210,    -1,
     114,   178,     1,    -1,   144,   178,   210,    -1,   144,   178,
       1,    -1,   115,   178,   210,    -1,   115,   178,     1,    -1,
     116,   178,   210,    -1,   116,   178,     1,    -1,   117,   178,
     210,    -1,   117,   178,     1,    -1,   118,   178,   210,    -1,
     118,   178,     1,    -1,   119,   178,   210,    -1,   119,   178,
       1,    -1,   120,   178,   213,    -1,   120,   178,     1,    -1,
     121,   178,   210,    -1,   121,   178,     1,    -1,   122,   178,
     210,    -1,   122,   178,     1,    -1,   123,   178,   210,    -1,
     123,   178,     1,    -1,   124,   178,   210,    -1,   124,   178,
       1,    -1,   125,   178,   210,    -1,   125,   178,     1,    -1,
     126,   178,   210,    -1,   126,   178,     1,    -1,   127,   178,
     210,    -1,   127,   178,     1,    -1,   128,   178,   210,    -1,
     128,   178,     1,    -1,   129,   178,   210,    -1,   129,   178,
       1,    -1,   130,   178,   210,    -1,   130,   178,     1,    -1,
     131,   178,   210,    -1,   131,   178,     1,    -1,   145,   178,
     213,    -1,   145,   178,   212,    -1,   145,   178,     1,    -1,
     146,   178,   213,    -1,   146,   178,   212,    -1,   146,   178,
       1,    -1,   147,   178,   210,    -1,   147,   178,     1,    -1,
     148,   178,   212,    -1,   148,   178,   213,    -1,   148,   178,
       1,    -1,   149,   178,   210,    -1,   149,   178,     1,    -1,
     150,   178,   210,    -1,   150,   178,     1,    -1,   151,   178,
     210,    -1,   151,   178,     1,    -1,   152,   178,   210,    -1,
     152,   178,     1,    -1,   153,   178,   210,    -1,   153,   178,
       1,    -1,   154,   178,   210,    -1,   154,   178,     1,    -1,
     155,   178,   210,    -1,   155,   178,   212,    -1,   155,   178,
       1,    -1,   156,   178,   210,    -1,   156,   178,     1,    -1,
     160,   178,   210,    -1,   160,   178,     1,    -1,   157,   178,
     210,    -1,   157,   178,     1,    -1,   158,   178,   210,    -1,
     158,   178,     1,    -1,   159,   178,   210,    -1,   159,   178,
       1,    -1,   138,   178,   210,    -1,   138,   178,     1,    -1,
     139,   178,   213,    -1,   139,   178,     1,    -1,   140,   178,
     213,    -1,   140,   178,     1,    -1,    84,   178,   210,    -1,
      85,   178,   210,    -1,    86,   178,   210,    -1,    84,   178,
       1,    -1,    85,   178,     1,    -1,    86,   178,     1,    -1,
     102,   178,   251,    -1,   102,   178,     1,    -1,   103,   178,
     213,   228,   253,    -1,   103,   178,   213,   228,     1,    -1,
     104,   178,   250,    -1,   104,   178,     1,    -1,   105,   178,
     210,    -1,   105,   178,     1,    -1,   161,   178,   244,    -1,
     161,   178,     1,    -1,   162,   178,   210,    -1,   162,   178,
       1,    -1,   163,   178,   210,    -1,   163,   178,     1,    -1,
     164,   178,   210,    -1,   164,   178,     1,    -1,   165,   178,
     210,    -1,   165,   178,     1,    -1,   166,   178,   210,    -1,
     166,   178,     1,    -1,   167,   178,   210,    -1,   167,   178,
     212,    -1,   167,   178,     1,    -1,   142,   178,   213,    -1,
     142,   178,     1,    -1,   168,   178,   210,    -1,   168,     1,
      -1,   169,   178,   210,    -1,   169,     1,    -1,   170,   178,
     212,   228,   220,   255,   221,    -1,   171,   178,   210,    -1,
     172,   178,   213,    -1,   172,   178,     1,    -1,   173,   178,
     213,    -1,   173,   178,     1,    -1,   174,   178,   210,    -1,
     174,   178,     1,    -1,   175,   178,   210,    -1,   175,   178,
       1,    -1,     1,   178,    -1,   141,   213,    -1,   141,     1,
      -1,   143,   219,   213,   216,   213,   216,   213,   218,    -1,
     143,   219,   213,   216,   213,   216,   247,   218,    -1,   143,
       1,    -1,   259,    -1,   261,    -1,   210,   226,   210,   226,
     210,   226,   210,    -1,   215,    -1,   260,    -1,   222,   260,
     223,    -1,   213,   213,    -1,   262,   213,    -1,   212,    -1,
     210,    -1,   213,    -1,    11,   220,   291,   221,    -1,    11,
     222,   263,   223,   220,   291,   221,    -1,    11,     1,    -1,
      12,   222,   263,   223,   220,   291,   221,    -1,    12,     1,
      -1,    13,   220,   291,   221,    -1,    13,   222,   263,   223,
     220,   291,   221,    -1,    13,     1,    -1,    14,   222,   263,
     223,   220,   291,   221,    -1,    14,     1,    -1,    15,   220,
     291,   221,    -1,    15,     1,    -1,    16,   220,   291,   221,
      -1,    16,     1,    -1,    17,   220,   291,   221,    -1,    17,
       1,    -1,    18,   222,   263,   216,   210,   223,   220,   291,
     221,    -1,    18,     1,    -1,    19,   222,   263,   223,   220,
     291,   221,    -1,    19,   222,   263,   216,   176,   223,   220,
     291,   221,    -1,    19,   222,   263,   216,   177,   223,   220,
     291,   221,    -1,    19,     1,    -1,   273,   196,   273,    -1,
     273,   197,   273,    -1,   209,   273,    -1,   219,   273,   218,
      -1,   222,   287,   223,    -1,   281,    -1,   179,    -1,   184,
      -1,   180,    -1,   181,    -1,   182,    -1,   183,    -1,   185,
      -1,   186,    -1,   274,    -1,   275,    -1,   274,    -1,   275,
      -1,   276,    -1,    63,    -1,    64,    -1,    65,    -1,   214,
      -1,   230,    -1,   282,    -1,   289,    -1,   247,    -1,   280,
      -1,   279,   278,   285,    -1,    68,   274,   283,    -1,    68,
     278,   285,    -1,    66,   274,   283,    -1,    66,   278,   285,
      -1,    62,   278,   213,    -1,    62,   278,   212,    -1,    62,
     278,     1,    -1,    62,     1,    -1,   280,   278,   280,    -1,
     280,   278,   213,    -1,   280,   278,   212,    -1,   280,   277,
     247,    -1,   280,   274,    72,    -1,   280,   274,    74,    -1,
     279,   278,   213,    -1,   279,   274,    72,    -1,   279,   278,
       1,    -1,   279,     1,    -1,    67,   277,   210,    -1,    67,
     277,     1,    -1,    67,     1,    -1,    69,   277,   210,    -1,
      69,   277,     1,    -1,    69,     1,    -1,    70,   277,   245,
      -1,    70,   277,     1,    -1,    70,     1,    -1,    71,   277,
     210,    -1,    71,   277,     1,    -1,    71,     1,    -1,    73,
     277,   210,    -1,    73,   277,    55,    -1,    73,   277,     1,
      -1,    73,     1,    -1,    66,   278,   213,    -1,    66,   274,
      72,    -1,    66,   278,     1,    -1,    66,     1,    -1,    68,
     278,   213,    -1,    68,   274,    72,    -1,    68,   278,     1,
      -1,    68,     1,    -1,    72,   274,   279,    -1,    72,   274,
      66,    -1,    72,   274,    68,    -1,    72,   274,     1,    -1,
      72,     1,    -1,   258,   205,   258,    -1,   258,   205,   210,
      -1,   258,    -1,   258,   205,     1,    -1,   226,    -1,   206,
      -1,   212,    -1,   285,   284,   212,    -1,   285,   226,     1,
      -1,   178,    -1,   187,    -1,   188,    -1,   189,    -1,   190,
      -1,   191,    -1,   192,    -1,   193,    -1,   194,    -1,   195,
      -1,   247,    -1,   213,    -1,   212,    -1,   280,    -1,   282,
      -1,   304,    -1,   287,   207,   287,    -1,   287,   206,   287,
      -1,   287,   204,   287,    -1,   287,   205,   287,    -1,   287,
     203,   287,    -1,   287,   201,   287,    -1,   287,   202,   287,
      -1,   287,   200,   287,    -1,   287,   199,   287,    -1,   287,
     198,   287,    -1,   208,   287,    -1,   219,   287,   218,    -1,
     280,   286,   287,    -1,   280,   178,    74,    -1,   280,   187,
      74,    -1,   304,    -1,   293,    -1,   288,    -1,   220,   291,
     221,    -1,   220,   221,    -1,   292,    -1,   220,   291,   221,
      -1,   220,   221,    -1,   291,   292,    -1,   292,    -1,   291,
       1,    -1,   304,   217,    -1,   293,    -1,   294,    -1,   295,
      -1,   296,    -1,   288,   217,    -1,   217,    -1,   304,     1,
      -1,    39,   273,   290,    -1,    39,   273,   290,    40,   290,
      -1,    45,   273,   290,    -1,    46,   219,   280,    47,   280,
     218,   290,    -1,    41,   219,   280,   218,   220,   297,   221,
      -1,   298,   300,    -1,   298,    -1,   298,   299,    -1,   299,
      -1,    42,   247,   228,   291,    44,   217,    -1,    42,   247,
     228,    44,   217,    -1,    42,   247,   228,   291,    -1,    42,
     247,   228,    -1,    42,   213,   228,   291,    44,   217,    -1,
      42,   213,   228,    44,   217,    -1,    42,   213,   228,   291,
      -1,    42,   213,   228,    -1,    43,   228,   291,    -1,    43,
     228,    -1,   213,    -1,   301,   216,   213,    -1,   216,    -1,
     216,   213,    -1,   301,   216,    -1,   210,    -1,   216,   210,
      -1,   301,   216,   210,    -1,   213,    -1,   210,    -1,    74,
      -1,   280,    -1,   302,   216,   213,    -1,   302,   216,   210,
      -1,   302,   216,   280,    -1,   212,   219,   218,    -1,   212,
     219,   301,   218,    -1,   212,   219,     1,   218,    -1,   212,
       1,    -1,     3,   219,   213,   218,    -1,     3,   219,   218,
      -1,     3,     1,    -1,     3,   219,     1,   218,    -1,     4,
     219,   213,   218,    -1,     4,   219,   213,   216,   213,   218,
      -1,     4,     1,    -1,     4,   219,     1,   218,    -1,     6,
     219,   273,   216,   213,   218,    -1,     5,   219,   218,    -1,
       5,    -1,     7,   219,   218,    -1,     7,    -1,     8,   219,
     247,   218,    -1,     8,   219,   280,   218,    -1,     8,   219,
     218,    -1,     8,    -1,     9,   219,   213,   218,    -1,     9,
     219,   247,   216,   213,   218,    -1,     9,     1,    -1,     9,
     219,     1,   218,    -1,    56,   219,   210,   218,    -1,    56,
     219,   212,   218,    -1,    56,     1,    -1,    57,   219,   210,
     218,    -1,    57,   219,   212,   218,    -1,    57,     1,    -1,
      58,   219,   210,   218,    -1,    58,   219,   212,   218,    -1,
      58,     1,    -1,    59,   219,   210,   216,   210,   218,    -1,
      59,   219,   210,   216,   212,   218,    -1,    59,   219,   210,
     218,    -1,    59,   219,   212,   218,    -1,    59,     1,    -1,
      60,   219,   210,   216,   210,   218,    -1,    60,   219,   210,
     216,   212,   218,    -1,    60,   219,   210,   218,    -1,    60,
     219,   212,   218,    -1,    60,     1,    -1,    61,   219,   210,
     216,   210,   218,    -1,    61,   219,   210,   216,   212,   218,
      -1,    61,   219,   210,   218,    -1,    61,   219,   212,   218,
      -1,    61,     1,    -1,    10,   219,   213,   216,   213,   218,
      -1,    10,     1,    -1,    10,   219,     1,   218,    -1,    11,
     219,   263,   218,    -1,    11,   219,   263,   216,   302,   218,
      -1,    11,     1,    -1,    11,   219,     1,   218,    -1,    20,
     219,   213,   218,    -1,    20,     1,    -1,    20,   219,     1,
     218,    -1,    22,   219,   213,   218,    -1,    22,     1,    -1,
      22,   219,     1,   218,    -1,    24,   219,   210,   218,    -1,
      24,     1,    -1,    24,   219,     1,   218,    -1,    23,   219,
     210,   218,    -1,    23,     1,    -1,    23,   219,     1,   218,
      -1,    25,   219,   213,   216,   213,   218,    -1,    25,   219,
     213,   218,    -1,    25,   219,   218,    -1,    25,    -1,    26,
     219,   210,   218,    -1,    26,   219,   280,   218,    -1,    27,
     219,   213,   216,   213,   218,    -1,    27,   219,   280,   216,
     213,   218,    -1,    21,   219,   213,   218,    -1,    21,     1,
      -1,    21,   219,     1,   218,    -1,    30,   219,   213,   218,
      -1,    30,     1,    -1,    30,   219,     1,   218,    -1,    28,
     219,   213,   218,    -1,    28,     1,    -1,    28,   219,     1,
     218,    -1,    29,   219,   213,   218,    -1,    29,     1,    -1,
      29,   219,     1,   218,    -1,    31,   219,   213,   218,    -1,
      31,     1,    -1,    31,   219,     1,   218,    -1,    32,   219,
     218,    -1,    32,    -1,    33,   219,   213,   218,    -1,    33,
       1,    -1,    33,   219,     1,   218,    -1,    34,   219,   218,
      -1,    34,    -1,    35,   219,   218,    -1,    35,    -1,    36,
     219,   218,    -1,    36,    -1,    37,   219,   218,    -1,    37,
      -1,    38,   219,   210,   218,    -1,    38,   219,   218,    -1,
      38,    -1,    38,   219,     1,   218,    -1,    48,   219,   244,
     218,    -1,    48,   219,     1,   218,    -1,    48,     1,    -1,
      49,   219,   210,   218,    -1,    49,   219,   213,   218,    -1,
      49,   219,     1,   218,    -1,    49,     1,    -1,    50,   219,
     248,   218,    -1,    50,   219,     1,   218,    -1,    50,     1,
      -1,    51,   219,   210,   218,    -1,    51,   219,     1,   218,
      -1,    51,     1,    -1,    52,   219,   218,    -1,    52,   219,
       1,   218,    -1,    52,     1,    -1,    53,   219,   213,   218,
      -1,    53,   219,     1,   218,    -1,    53,     1,    -1,    54,
     219,   213,   218,    -1,    54,   219,     1,   218,    -1,    54,
       1,    -1,    75,   219,   213,   216,   213,   216,   213,   218,
      -1,    75,   219,   213,   216,   213,   216,   213,   216,   210,
     218,    -1,    75,   219,   213,   216,   213,   216,   213,   216,
     280,   218,    -1,    78,   219,   213,   216,   213,   218,    -1,
      76,   219,   213,   216,   213,   216,   280,   218,    -1,    77,
     219,   213,   216,   213,   216,   280,   218,    -1,    79,   219,
     213,   216,   213,   216,   210,   216,   210,   218,    -1,    79,
     219,   213,   216,   213,   216,   280,   216,   210,   218,    -1,
      79,   219,   213,   216,   213,   216,   210,   216,   210,   216,
     280,   218,    -1,    79,   219,   213,   216,   213,   216,   280,
     216,   210,   216,   280,   218,    -1,    80,   219,   213,   216,
     213,   216,   210,   216,   210,   218,    -1,    80,   219,   213,
     216,   213,   216,   280,   216,   210,   218,    -1,    80,   219,
     213,   216,   213,   216,   210,   216,   210,   216,   280,   218,
      -1,    80,   219,   213,   216,   213,   216,   280,   216,   210,
     216,   280,   218,    -1,    81,   219,   213,   216,   213,   216,
     213,   218,    -1,    81,   219,   213,   216,   213,   218,    -1,
     212,   219,   218,    -1,   212,   219,   301,   218,    -1,   212,
     219,     1,   218,    -1,   212,     1,    -1,    82,   219,   213,
     218,    -1,    82,   219,   262,   218,    -1,    83,   219,   213,
     218,    -1,    83,   219,   262,   218,    -1,    83,   219,   213,
     216,   213,   218,    -1,    83,   219,   213,   216,   262,   218,
      -1,    87,   219,   213,   218,    -1,    87,   219,   213,   216,
     280,   218,    -1,    87,   219,   213,   216,   280,   216,   280,
     218,    -1,    88,   219,   213,   216,   213,   218,    -1,    88,
     219,   213,   216,   213,   216,   210,   218,    -1,    89,   219,
     213,   216,   213,   216,   213,   216,   213,   216,   213,   216,
     280,   218,    -1,    90,   219,   280,   216,   280,   218,    -1,
      91,   219,   218,    -1,    91,   219,   210,   216,   213,   218,
      -1,    91,   219,   210,   216,   213,   216,   213,   218,    -1,
     177,   219,   303,   216,   263,   218,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   490,   490,   493,   494,   495,   498,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   504,   504,   505,   505,
     506,   506,   507,   507,   508,   508,   510,   513,   527,   535,
     549,   558,   559,   562,   563,   564,   568,   569,   570,   575,
     581,   582,   583,   584,   588,   591,   592,   596,   597,   598,
     601,   605,   608,   614,   615,   617,   618,   621,   628,   638,
     639,   640,   644,   646,   648,   652,   653,   654,   655,   656,
     659,   661,   665,   666,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   707,   708,   716,   717,   725,   726,   734,   735,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   764,   765,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
     800,   810,   811,   814,   815,   818,   819,   822,   823,   826,
     827,   830,   831,   834,   835,   844,   851,   852,   855,   856,
     859,   860,   867,   868,   875,   876,   883,   884,   885,   886,
     889,   890,   893,   894,   895,   896,   897,   898,   899,   900,
     907,   910,   949,   950,   955,   957,   958,   959,   965,   967,
     981,   983,   986,   987,   990,   991,   998,   999,  1006,  1007,
    1011,  1038,  1039,  1047,  1048,  1051,  1052,  1055,  1056,  1066,
    1069,  1070,  1071,  1072,  1073,  1074,  1077,  1078,  1081,  1084,
    1088,  1089,  1095,  1101,  1105,  1106,  1109,  1143,  1159,  1160,
    1163,  1173,  1184,  1187,  1196,  1201,  1209,  1224,  1227,  1233,
    1236,  1244,  1250,  1253,  1259,  1262,  1270,  1273,  1281,  1284,
    1292,  1295,  1307,  1311,  1331,  1352,  1373,  1377,  1378,  1379,
    1380,  1381,  1382,  1385,  1386,  1389,  1390,  1391,  1392,  1394,
    1395,  1398,  1399,  1402,  1403,  1404,  1407,  1408,  1409,  1412,
    1428,  1433,  1434,  1435,  1437,  1440,  1442,  1444,  1446,  1448,
    1452,  1454,  1456,  1457,  1460,  1463,  1466,  1469,  1472,  1475,
    1478,  1480,  1482,  1483,  1486,  1488,  1489,  1490,  1492,  1493,
    1494,  1496,  1499,  1500,  1502,  1503,  1504,  1506,  1508,  1509,
    1510,  1524,  1526,  1528,  1530,  1544,  1546,  1548,  1550,  1552,
    1554,  1556,  1558,  1563,  1564,  1575,  1576,  1583,  1584,  1587,
    1588,  1601,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,
    1613,  1614,  1618,  1619,  1620,  1621,  1622,  1623,  1624,  1627,
    1630,  1633,  1636,  1639,  1642,  1645,  1648,  1651,  1654,  1657,
    1660,  1673,  1686,  1708,  1709,  1710,  1711,  1712,  1715,  1716,
    1717,  1720,  1721,  1722,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,  1732,  1735,  1743,  1753,  1761,  1779,  1788,  1789,  1791,
    1792,  1795,  1804,  1813,  1821,  1829,  1838,  1847,  1855,  1866,
    1872,  1880,  1885,  1895,  1902,  1909,  1919,  1924,  1929,  1936,
    1941,  1946,  1951,  1956,  1966,  1976,  1988,  2000,  2012,  2016,
    2022,  2028,  2035,  2036,  2039,  2045,  2051,  2052,  2054,  2057,
    2058,  2059,  2060,  2061,  2067,  2073,  2079,  2085,  2088,  2094,
    2095,  2097,  2100,  2102,  2103,  2105,  2107,  2108,  2110,  2112,
    2113,  2117,  2121,  2124,  2127,  2128,  2132,  2136,  2140,  2144,
    2145,  2149,  2153,  2157,  2161,  2162,  2168,  2169,  2171,  2178,
    2199,  2200,  2202,  2204,  2205,  2208,  2210,  2211,  2213,  2215,
    2216,  2219,  2221,  2222,  2224,  2237,  2239,  2241,  2243,  2245,
    2247,  2270,  2285,  2287,  2288,  2290,  2292,  2293,  2295,  2297,
    2298,  2300,  2302,  2303,  2305,  2307,  2308,  2310,  2311,  2312,
    2314,  2315,  2317,  2319,  2320,  2321,  2322,  2324,  2325,  2327,
    2329,  2333,  2336,  2339,  2342,  2346,  2348,  2349,  2362,  2367,
    2369,  2370,  2374,  2377,  2378,  2382,  2385,  2386,  2389,  2392,
    2393,  2397,  2400,  2401,  2405,  2408,  2409,  2418,  2430,  2443,
    2450,  2459,  2468,  2479,  2490,  2503,  2516,  2527,  2538,  2551,
    2564,  2573,  2580,  2597,  2614,  2616,  2619,  2621,  2623,  2625,
    2627,  2629,  2631,  2633,  2635,  2638,  2640,  2643,  2657,  2663,
    2665,  2673,  2681
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FORWARD", "SEND", "DROP", "ASSERT",
  "EXIT", "RETURN", "LOG_TOK", "ERROR", "ROUTE", "ROUTE_FAILURE",
  "ROUTE_ONREPLY", "ROUTE_BRANCH", "ROUTE_ERROR", "ROUTE_LOCAL",
  "ROUTE_STARTUP", "ROUTE_TIMER", "ROUTE_EVENT", "SET_HOST",
  "SET_HOSTPORT", "PREFIX", "STRIP", "STRIP_TAIL", "APPEND_BRANCH",
  "REMOVE_BRANCH", "PV_PRINTF", "SET_USER", "SET_USERPASS", "SET_PORT",
  "SET_URI", "REVERT_URI", "SET_DSTURI", "RESET_DSTURI", "ISDSTURISET",
  "FORCE_RPORT", "FORCE_LOCAL_RPORT", "FORCE_TCP_ALIAS", "IF", "ELSE",
  "SWITCH", "CASE", "DEFAULT", "SBREAK", "WHILE", "FOR", "IN",
  "SET_ADV_ADDRESS", "SET_ADV_PORT", "FORCE_SEND_SOCKET",
  "SERIALIZE_BRANCHES", "NEXT_BRANCHES", "USE_BLACKLIST",
  "UNUSE_BLACKLIST", "MAX_LEN", "SETFLAG", "RESETFLAG", "ISFLAGSET",
  "SETBFLAG", "RESETBFLAG", "ISBFLAGSET", "METHOD", "URI", "FROM_URI",
  "TO_URI", "SRCIP", "SRCPORT", "DSTIP", "DSTPORT", "PROTO", "AF",
  "MYSELF", "MSGLEN", "NULLV", "CACHE_STORE", "CACHE_FETCH",
  "CACHE_COUNTER_FETCH", "CACHE_REMOVE", "CACHE_ADD", "CACHE_SUB",
  "CACHE_RAW_QUERY", "XDBG", "XLOG", "XLOG_BUF_SIZE", "XLOG_FORCE_COLOR",
  "XLOG_DEFAULT_LEVEL", "RAISE_EVENT", "SUBSCRIBE_EVENT", "CONSTRUCT_URI",
  "GET_TIMESTAMP", "SCRIPT_TRACE", "FORK", "DEBUG_MODE", "DEBUG",
  "ENABLE_ASSERTS", "ABORT_ON_ASSERT", "LOGLEVEL", "LOGSTDERROR",
  "LOGFACILITY", "LOGNAME", "AVP_ALIASES", "LISTEN", "MEMGROUP", "ALIAS",
  "AUTO_ALIASES", "DNS", "REV_DNS", "DNS_TRY_IPV6", "DNS_TRY_NAPTR",
  "DNS_RETR_TIME", "DNS_RETR_NO", "DNS_SERVERS_NO", "DNS_USE_SEARCH",
  "MAX_WHILE_LOOPS", "CHILDREN", "CHECK_VIA", "SHM_HASH_SPLIT_PERCENTAGE",
  "SHM_SECONDARY_HASH_SIZE", "MEM_WARMING_ENABLED",
  "MEM_WARMING_PATTERN_FILE", "MEM_WARMING_PERCENTAGE", "MEMLOG",
  "MEMDUMP", "EXECMSGTHRESHOLD", "EXECDNSTHRESHOLD", "TCPTHRESHOLD",
  "EVENT_SHM_THRESHOLD", "EVENT_PKG_THRESHOLD", "QUERYBUFFERSIZE",
  "QUERYFLUSHTIME", "SIP_WARNING", "SOCK_MODE", "SOCK_USER", "SOCK_GROUP",
  "UNIX_SOCK", "UNIX_SOCK_CHILDREN", "UNIX_TX_TIMEOUT", "SERVER_SIGNATURE",
  "SERVER_HEADER", "USER_AGENT_HEADER", "LOADMODULE", "MPATH", "MODPARAM",
  "MAXBUFFER", "CHROOT", "WDIR", "MHOMED", "POLL_METHOD",
  "TCP_ACCEPT_ALIASES", "TCP_CHILDREN", "TCP_CONNECT_TIMEOUT",
  "TCP_CON_LIFETIME", "TCP_LISTEN_BACKLOG", "TCP_MAX_CONNECTIONS",
  "TCP_NO_NEW_CONN_BFLAG", "TCP_KEEPALIVE", "TCP_KEEPCOUNT",
  "TCP_KEEPIDLE", "TCP_KEEPINTERVAL", "TCP_MAX_MSG_TIME",
  "ADVERTISED_ADDRESS", "ADVERTISED_PORT", "DISABLE_CORE", "OPEN_FD_LIMIT",
  "MCAST_LOOPBACK", "MCAST_TTL", "TOS", "DISABLE_DNS_FAILOVER",
  "DISABLE_DNS_BLACKLIST", "DST_BLACKLIST", "DISABLE_STATELESS_FWD",
  "DB_VERSION_TABLE", "DB_DEFAULT_URL", "DB_MAX_ASYNC_CONNECTIONS",
  "DISABLE_503_TRANSLATION", "SYNC_TOKEN", "ASYNC_TOKEN", "EQUAL",
  "EQUAL_T", "GT", "LT", "GTE", "LTE", "DIFF", "MATCH", "NOTMATCH",
  "COLONEQ", "PLUSEQ", "MINUSEQ", "SLASHEQ", "MULTEQ", "MODULOEQ",
  "BANDEQ", "BOREQ", "BXOREQ", "AND", "OR", "BRSHIFT", "BLSHIFT", "BXOR",
  "BAND", "BOR", "MODULO", "MULT", "SLASH", "MINUS", "PLUS", "BNOT", "NOT",
  "NUMBER", "ZERO", "ID", "STRING", "SCRIPTVAR", "IPV6ADDR", "COMMA",
  "SEMICOLON", "RPAREN", "LPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK",
  "AS", "USE_CHILDREN", "DOT", "CR", "COLON", "ANY", "SCRIPTVARERR",
  "$accept", "cfg", "statements", "statement", "$@1", "$@2", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "listen_id", "proto", "port",
  "snumber", "phostport", "alias_def", "id_lst", "listen_def", "any_proto",
  "multi_string", "blst_elem", "blst_elem_list", "assign_stm",
  "module_stm", "ip", "ipv4", "ipv6addr", "ipv6", "folded_string",
  "route_name", "route_stm", "failure_route_stm", "onreply_route_stm",
  "branch_route_stm", "error_route_stm", "local_route_stm",
  "startup_route_stm", "timer_route_stm", "event_route_stm", "exp",
  "equalop", "compop", "matchop", "intop", "strop", "uri_type",
  "script_var", "exp_elem", "exp_cond", "ipnet", "host_sep", "host",
  "assignop", "assignexp", "assign_cmd", "exp_stm", "stm", "actions",
  "action", "if_cmd", "while_cmd", "foreach_cmd", "switch_cmd",
  "switch_stm", "case_stms", "case_stm", "default_stm",
  "module_func_param", "route_param", "async_func", "cmd", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   231,   232,   233,   233,   233,   234,   234,   235,   234,
     236,   234,   237,   234,   238,   234,   239,   234,   240,   234,
     241,   234,   242,   234,   243,   234,   234,   244,   244,   244,
     245,   246,   246,   247,   247,   247,   248,   248,   248,   248,
     249,   249,   249,   249,   249,   250,   250,   251,   251,   251,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   255,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   257,
     257,   257,   257,   257,   258,   258,   259,   260,   261,   261,
     262,   262,   263,   263,   263,   264,   264,   264,   265,   265,
     266,   266,   266,   267,   267,   268,   268,   269,   269,   270,
     270,   271,   271,   272,   272,   272,   272,   273,   273,   273,
     273,   273,   273,   274,   274,   275,   275,   275,   275,   276,
     276,   277,   277,   278,   278,   278,   279,   279,   279,   280,
     280,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   283,   283,   283,   283,   284,   284,   285,
     285,   285,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     288,   288,   288,   289,   289,   289,   289,   289,   290,   290,
     290,   291,   291,   291,   292,   292,   292,   292,   292,   292,
     292,   292,   293,   293,   294,   295,   296,   297,   297,   298,
     298,   299,   299,   299,   299,   299,   299,   299,   299,   300,
     300,   301,   301,   301,   301,   301,   301,   301,   301,   302,
     302,   302,   302,   302,   302,   302,   303,   303,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     1,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     5,     5,     2,
       1,     3,     5,     5,     1,     1,     2,     1,     3,     3,
       5,     5,     7,     1,     1,     1,     2,     9,    10,     3,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     2,     7,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     8,     8,     2,     1,     1,     7,     1,     1,     3,
       2,     2,     1,     1,     1,     4,     7,     2,     7,     2,
       4,     7,     2,     7,     2,     4,     2,     4,     2,     4,
       2,     9,     2,     7,     9,     9,     2,     3,     3,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     2,     3,     3,     2,
       3,     3,     2,     3,     3,     2,     3,     3,     3,     2,
       3,     3,     3,     2,     3,     3,     3,     2,     3,     3,
       3,     3,     2,     3,     3,     1,     3,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     1,     1,     1,     3,     2,     1,     3,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     3,     5,     3,     7,     7,     2,     1,     2,
       1,     6,     5,     4,     3,     6,     5,     4,     3,     3,
       2,     1,     3,     1,     2,     2,     1,     2,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     4,     4,     2,
       4,     3,     2,     4,     4,     6,     2,     4,     6,     3,
       1,     3,     1,     4,     4,     3,     1,     4,     6,     2,
       4,     4,     4,     2,     4,     4,     2,     4,     4,     2,
       6,     6,     4,     4,     2,     6,     6,     4,     4,     2,
       6,     6,     4,     4,     2,     6,     2,     4,     4,     6,
       2,     4,     4,     2,     4,     4,     2,     4,     4,     2,
       4,     4,     2,     4,     6,     4,     3,     1,     4,     4,
       6,     6,     4,     2,     4,     4,     2,     4,     4,     2,
       4,     4,     2,     4,     4,     2,     4,     3,     1,     4,
       2,     4,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     3,     1,     4,     4,     4,     2,     4,     4,     4,
       2,     4,     4,     2,     4,     4,     2,     3,     4,     2,
       4,     4,     2,     4,     4,     2,     8,    10,    10,     6,
       8,     8,    10,    10,    12,    12,    10,    10,    12,    12,
       8,     6,     3,     4,     4,     2,     4,     4,     4,     4,
       6,     6,     4,     6,     8,     6,     8,    14,     6,     3,
       6,     8,     6
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,   218,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    84,     0,
      86,     0,    88,     0,    90,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     219,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   205,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     1,     5,
       3,     0,     9,     0,    11,     0,    13,     0,    15,     0,
      17,     0,    19,     0,    21,     0,    23,     0,    25,   176,
     173,   177,   174,   178,   175,    63,    70,    69,     0,     0,
      33,    62,    66,    65,    68,    67,    64,    72,    71,    74,
      73,    76,    75,   180,     0,    30,     0,    47,   179,     0,
     184,     0,   339,    28,   227,     0,     0,    40,    44,    45,
     183,    27,   224,   228,   225,    29,   186,   185,    78,    77,
      80,    79,    81,    83,    85,    87,    89,    91,    94,    93,
      98,    97,   100,    99,   102,   101,   104,   103,   106,   105,
     108,   107,   110,   109,   112,   111,   114,   113,   116,   115,
     118,   117,   120,   119,   122,   121,   124,   123,   126,   125,
     128,   127,   130,   129,   168,   167,   170,   169,   172,   171,
     203,   202,     0,    96,    95,   133,   132,   131,   136,   135,
     134,   138,   137,   141,   139,   140,   143,   142,   145,   144,
     147,   146,   149,   148,   151,   150,   153,   152,   156,   154,
     155,   158,   157,   162,   161,   164,   163,   166,   165,   160,
     159,   188,     0,   339,   187,   190,   189,   192,   191,   194,
     193,   196,   195,   198,   197,   201,   199,   200,   204,   206,
       0,   209,   211,   210,   213,   212,   215,   214,   217,   216,
     237,     0,     0,   239,     0,   242,     0,     0,   244,     0,
     246,     0,   248,     0,   250,     0,   252,     0,   256,     0,
      35,    34,    39,     0,     0,     0,     0,     0,     0,     0,
      46,   338,     0,     0,     0,     0,     0,     0,   440,     0,
     442,   446,     0,     0,     0,     0,     0,     0,     0,     0,
     497,     0,     0,     0,     0,     0,     0,   518,     0,   523,
     525,   527,   529,   532,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   279,   390,   280,
       0,     0,     0,   382,   385,   386,   387,   388,     0,   233,
     232,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,    49,    48,   182,    55,   181,     0,   229,
      41,   341,   340,     0,     0,   432,     0,   436,     0,     0,
       0,     0,     0,   449,     0,   476,     0,   480,     0,   483,
       0,   503,     0,   486,     0,   492,     0,   489,     0,     0,
       0,     0,   509,     0,   512,     0,   506,     0,   515,     0,
       0,   520,     0,     0,     0,     0,     0,     0,     0,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   283,     0,     0,   284,   262,   281,
     375,   282,   374,   373,     0,     0,     0,   536,     0,   540,
       0,   543,     0,   546,     0,   549,     0,   552,     0,   555,
       0,   453,     0,   456,     0,   459,     0,   464,     0,   469,
       0,   474,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   575,     0,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
       0,   389,   383,   235,   381,   391,   384,     0,     0,   240,
       0,     0,   245,   247,   249,     0,     0,     0,     0,     0,
       0,    56,     0,     0,     0,     0,     0,    60,     0,     0,
       0,   431,     0,     0,   439,     0,   441,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   517,     0,     0,   522,   524,   526,   528,     0,     0,
     531,   293,   263,   265,   266,   267,   268,   264,   269,   270,
     273,   274,   275,     0,   323,   273,     0,   306,   271,   272,
       0,   327,   273,     0,   309,     0,   312,     0,   315,     0,
     332,     0,   319,     0,   259,     0,   377,     0,     0,     0,
       0,     0,   353,     0,   352,     0,   355,   356,     0,   357,
       0,     0,     0,   392,   378,   303,   273,     0,   273,   274,
       0,     0,     0,   394,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   547,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   589,     0,
       0,     0,   416,   411,   413,   572,     0,   371,   372,   370,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    31,
      32,    37,    50,    51,     0,    43,    42,     0,     0,     0,
      53,    54,     0,    61,     0,   208,   433,   430,   437,     0,
     434,     0,   443,   444,   450,   447,     0,   477,     0,   481,
       0,   478,   484,   482,   504,   502,   487,   485,   493,   491,
     490,   488,     0,   495,   498,   499,     0,     0,   510,   508,
     513,   511,   507,   505,   516,   514,   521,   519,   533,   530,
     292,   291,   290,   321,   335,   288,   322,   320,   289,   305,
     304,   325,   286,   326,   324,   287,   308,   307,   311,   310,
     314,   313,   331,   329,   330,   328,   318,   317,   316,   260,
     376,   273,     0,   273,     0,   368,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,   257,
     258,   380,     0,     0,   301,   302,   300,   285,   298,   299,
     297,   296,   295,   294,     0,     0,   535,   534,   539,   537,
     538,   542,   541,   545,   544,   548,   551,   550,   554,   553,
     451,   452,   454,   455,   457,   458,     0,   462,   463,     0,
     467,   468,     0,   472,   473,     0,     0,     0,     0,     0,
       0,     0,   230,   576,   231,   577,     0,   578,   579,     0,
     582,     0,     0,     0,     0,   429,     0,     0,   574,   417,
     414,   415,   573,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   221,   222,     0,     0,    59,     0,     0,
       0,     0,   421,   420,   419,   422,     0,     0,     0,     0,
       0,   369,   367,   366,   365,   363,   364,   362,   360,   361,
     359,   358,   379,   393,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   426,     0,     0,
     418,   412,   236,   238,   241,   243,     0,     0,     0,   253,
      52,   226,     0,     0,   435,   438,   448,   475,     0,   479,
     494,   500,   501,   336,   334,   333,     0,     0,   398,   400,
       0,   460,   461,   465,   466,   470,   471,     0,     0,     0,
     559,     0,     0,     0,   571,   580,   581,     0,   583,     0,
     585,     0,   588,     0,   590,   428,   427,   592,     0,     0,
       0,     0,     0,   424,   423,   425,     0,     0,   396,     0,
     399,   397,   395,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,   254,   255,     0,     0,
     408,   404,   410,     0,   556,   560,   561,     0,     0,     0,
       0,   570,   584,   586,     0,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   406,     0,   402,     0,   557,   558,     0,   562,
       0,   563,     0,   566,     0,   567,     0,     0,    57,   405,
     401,     0,     0,     0,     0,     0,    58,   564,   565,   568,
     569,     0,     0,   587
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,   247,   236,   851,   764,   248,   249,   250,
     238,   862,   507,   667,   668,    95,    96,   251,   252,   253,
     254,   820,   492,   192,   194,   196,   198,   200,   202,   204,
     206,   208,   575,   738,   731,   732,   780,   781,   765,   480,
     578,   767,   915,   413,   255,   640,   768,   481,   581,   773,
     482,   483,   484,   485,   486,   487,  1127,  1128,  1129,  1171,
     836,  1056,   830,   488
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -723
static const yytype_int16 yypact[] =
{
    5361,  -118,   -75,   -27,     0,    15,    42,   302,   318,   342,
     382,   400,   477,   523,   526,   555,   561,   576,   579,   580,
      46,   478,   486,   487,   541,   554,   606,   611,   625,   626,
     630,   667,   676,   705,   721,   722,   743,   750,   758,   766,
     800,   833,   837,   840,   844,   878,   895,    39,   897,    64,
     898,   901,   902,   918,   919,   922,   930,   948,   950,   971,
     978,   986,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,   556,   578,  1005,  1015,  1016,  1017,
    1024,  1034,  -723,   643,  3800,  -723,   651,   577,   216,   652,
     192,   949,  1012,  1195,  1196,  -723,  -723,  -723,   225,   226,
     227,  1006,   229,   434,   230,   231,   434,   232,   105,    51,
     217,  1027,    36,   233,   234,   235,  -723,  1007,  -723,  1008,
    -723,  1009,  -723,  1032,  -723,  1033,  -723,  1037,   236,   237,
     240,   249,   295,   312,   110,   394,   409,   447,   448,   450,
     451,   453,   459,   460,   462,   463,   464,   118,   131,  -723,
    -723,   136,  -723,  1031,   465,   135,   139,   468,   168,   469,
     470,   471,   472,   473,   474,   218,   475,   476,   480,   481,
     482,    44,   483,   484,   485,   488,   492,   221,  -723,  1045,
    -723,  1052,  1051,  1054,   140,   171,   493,   496,  -723,  -118,
    -723,    41,  -723,    47,  -723,    54,  -723,    53,  -723,    61,
    -723,    62,  -723,    65,  -723,    55,  -723,    56,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  1055,  1056,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  1213,  -723,  1039,   403,  -723,  1040,
    -723,    16,  1041,  -723,  -723,  1057,  1042,  -723,  -723,   410,
    -723,  -723,  -723,  -723,  -723,   -79,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  1058,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  1047,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    1043,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  5222,   306,  -723,   306,  -723,  5222,   306,  -723,   306,
    -723,  5222,  -723,  5222,  -723,  5222,  -723,   306,  -723,   306,
    -723,  -723,  -723,   423,   423,  1074,   185,  1075,  1087,   423,
    -723,  -723,   125,  1099,  1100,  1092,    68,    69,  1095,  1096,
    1097,  1098,    70,    71,    72,    73,    74,    75,    76,    78,
    1101,  1103,  1105,    80,    81,    82,    83,  1106,    84,  1108,
    1110,  1112,  1113,  1115,  3980,  1116,  3980,  1117,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    95,    96,   100,
     101,  1118,  1119,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,   106,  -723,  -723,  -723,
     872,  1102,  1200,  -723,  -723,  -723,  -723,  -723,    99,  -723,
    -723,  -723,  1134,  1135,  1428,  1136,  1137,  1519,  1747,  1838,
    1138,   379,  1090,   375,  -723,  -723,  1120,  -723,  1139,  -723,
    1140,  -723,  -723,  1145,   -85,  -723,   109,  -723,   188,  1144,
    3980,  1146,   387,  -723,   151,  -723,   194,  -723,   120,  -723,
     195,  -723,   196,  -723,   199,  -723,   497,  -723,   498,  -160,
     -92,  -163,  -723,   200,  -723,   201,  -723,   202,  -723,   203,
    1148,  -723,   205,  1149,  1151,  1152,  1153,   124,   545,  -723,
    -723,  -723,   581,   565,   589,   714,   801,   851,   571,   857,
    3980,  3980,  4379,  4071,  -723,  4288,   597,  1114,  -723,  -723,
    -723,  -723,  -723,  -723,   -91,  4288,   -91,  -723,    58,  -723,
     169,  -723,   222,  -723,   499,  -723,    29,  -723,   207,  -723,
     209,  -723,   406,  -723,   506,  -723,   575,  -723,   620,  -723,
     763,  -723,   764,  1142,  1143,  1150,  1159,  1160,  1161,  1162,
    1163,  1165,  1166,  1167,  1168,   -91,   -28,  1141,  -723,   175,
    1254,  1308,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    4071,  -723,  -723,  -723,  -723,  -723,  -723,  1164,  1169,  -723,
    1170,  1171,  -723,  -723,  -723,  1173,   699,  1172,    33,  1175,
    -161,  -723,  1176,    43,   -49,  1174,   -96,  -723,    63,  1177,
    1178,  -723,  1179,   761,  -723,   -17,  -723,  -723,  1180,  1181,
    1182,  1183,  1186,  1185,  1188,  1187,   782,  1189,  1190,  1191,
    1192,  1193,  1197,  1198,  1201,  1202,  1204,   783,  -723,  1205,
    1206,  1209,  1210,  1222,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  -723,  1250,  1252,  -723,  -723,  -723,  -723,  1253,  1257,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,   184,  -723,   432,   187,  -723,  -723,  -723,
     500,  -723,   802,   191,  -723,   501,  -723,   142,  -723,   502,
    -723,   520,  -723,   243,  -723,   -47,  -723,  2066,   581,   589,
    4071,   790,  -723,  4071,  -723,   597,   863,  -723,   408,  -723,
    3980,  3980,  4607,  1347,  -723,  -723,  1316,   193,   871,   627,
     434,   -39,  1265,  -723,  1359,  1272,  1273,  1274,  1275,  1276,
    1277,  1278,  1279,  1280,  1281,  -723,  1282,  1283,  1284,  1294,
    1295,  1296,  1303,  1313,  1314,  1315,   787,  1317,   798,  1318,
     803,  1319,  1211,  1212,  1256,  1322,  1343,  1345,  1346,   -83,
      -1,   435,     3,   809,  1350,  1358,  1365,  1366,  -723,   107,
    1367,  1368,  -723,  -723,   411,  -723,   810,  -723,  -723,   884,
    5222,  5222,  5222,  5222,  1311,  1340,  1361,  5222,  -723,  -723,
    -723,  -723,  -723,  1360,  1362,  -723,  -723,  1369,  1371,   -96,
    -723,  -723,  1374,  -723,   -85,  -723,  -723,  -723,  -723,  1378,
    -723,  1379,  -723,  -723,  -723,  -723,  1380,  -723,  1390,  -723,
     416,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  1391,  -723,  -723,  -723,  1398,  1399,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  1208,  -723,  -723,  -723,   -79,  -723,
    -723,  -723,  -723,  -723,  -723,   -79,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  1541,   210,  1542,   212,  -723,   748,   213,  4071,  4071,
    4071,  4071,  4071,  4071,  4071,  4071,  4071,  4071,  -723,  -723,
    -723,  -723,  2157,  4698,  -723,  -723,  -723,   -79,  -723,  -723,
    -723,  -723,  -723,  -723,  1395,   -91,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  -723,  -723,   841,  -723,  -723,   842,
    -723,  -723,   845,  -723,  -723,  1403,  1404,  1405,  1406,  1407,
    1408,  1409,  -723,  -723,  -723,  -723,  1410,  -723,  -723,   -91,
    -723,  1411,  1412,   -91,  1413,  -723,   176,   306,  -723,  -723,
    -723,   424,  -723,  2385,  2476,  2704,  2795,  1414,  1415,  1416,
    3023,  1184,  1417,  -723,  -723,  1421,   377,  -723,  1420,  1423,
    1425,  1426,  -723,  -723,  -723,  -723,   852,  1429,  1430,  1432,
      45,  -723,   657,   657,   657,   657,   657,  -723,  -723,  -723,
    -723,  -723,  -723,  -723,  1376,  1433,  1434,  1435,  1436,  1437,
    1438,  1439,  1443,  1444,  1445,  1446,  1447,  1449,   853,   331,
     355,   856,   876,  1450,  1451,   883,  1452,  -723,   887,  1453,
    -723,  -723,  -723,  -723,  -723,  -723,  5222,  5222,  5222,  -723,
    -723,  -723,   377,  1456,  -723,  -723,  -723,  -723,   361,  -723,
    -723,  -723,  -723,  -723,  1047,  -723,   507,  1418,   607,  -723,
    4698,  -723,  -723,  -723,  -723,  -723,  -723,  1419,   -91,   -91,
    -723,    -5,   337,  1454,  -723,  -723,  -723,   -91,  -723,  1458,
    -723,  1460,  -723,  1461,  -723,  -723,  -723,  -723,  3114,  3342,
    3433,  1459,  -161,  -723,  -723,  -723,  1400,  1401,  -723,  1402,
    -723,  -723,  -723,   888,  1462,  1463,  1466,  1467,  1468,  1469,
    1470,  1471,  1472,  1475,  1474,  -723,  -723,  -723,  -161,  1477,
    4916,  5007,  5222,   366,  -723,  -723,  -723,  1476,  1484,  1485,
    1487,  -723,  -723,  -723,  1464,  -723,  1482,  1465,  1483,   881,
    1486,  1109,  3661,  1481,  1488,   891,   905,   906,   909,  1489,
    1491,  1490,  -723,  1492,  -723,  1493,  -723,  -723,   -91,  -723,
     -91,  -723,   -91,  -723,   -91,  -723,  1494,  1495,  -723,  -723,
    -723,  1496,  1497,  1498,  1499,  1502,  -723,  -723,  -723,  -723,
    -723,   -91,  1501,  -723
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -723,  -723,  -723,  1547,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -723,  -164,  -188,  -645,  -103,   -97,  -723,  1384,
    -723,   817,  1156,   815,  -723,  -723,  -723,  -710,  -723,  1442,
    -723,  -605,  -375,  -723,  -723,  -723,  -723,  -723,  -723,  -723,
    -723,  -723,  -403,   -23,   -29,  -723,   290,    -6,  -411,  -442,
    -723,  -415,  -722,  -723,  -623,  -723,  -579,  -408,  -723,  -580,
    -385,  -471,  -405,  -723,  -723,  -723,  -723,  -723,   518,  -723,
     675,  -723,  -723,  -425
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -410
static const yytype_int16 yytable[] =
{
     221,   494,   577,   226,   577,   783,   497,   354,   498,   493,
     499,   644,   495,   237,   496,   853,   822,   402,   856,   583,
     922,   583,   500,   644,   501,   914,   644,   644,   644,   579,
     794,   579,   914,   576,   848,   576,   580,   240,   580,   582,
     149,   582,   380,   585,   855,   351,  1123,   116,   383,   849,
     701,   477,   231,   697,   388,   385,   396,   398,   698,   785,
      97,   839,   390,   392,   863,   152,   394,   479,   850,   515,
     517,   523,   525,   527,   529,   531,   533,   535,   577,   537,
     679,   542,   544,   546,   548,   551,   587,   589,   591,   593,
     595,   597,   599,   601,   603,   583,   605,   607,   700,   702,
     645,   609,   611,    98,   774,   579,   229,   628,  1025,   576,
     669,   280,   580,   918,   774,   582,   235,   675,   699,   306,
     925,   685,   477,   477,   665,   718,   511,   411,   577,   577,
    1012,   766,   308,   860,   666,  1013,   315,   310,   479,   479,
     318,   372,   782,   928,   784,   583,   583,   412,   769,   770,
     771,    99,   680,   686,   967,   579,   579,   218,   219,   576,
     576,   220,   580,   580,   857,   582,   582,   754,   755,   323,
     787,   939,   374,   971,   972,   477,   831,  1096,   100,   770,
     771,   945,   827,   826,   946,   910,   505,   757,   916,   672,
     828,   479,   923,   101,   965,   683,   687,   689,   766,   871,
     691,   703,   705,   707,   709,  1176,   712,   199,   796,   477,
     798,   916,  1014,   923,   965,   769,  1014,  1015,   233,   338,
     102,  1018,   365,   790,   117,   479,   209,   211,   213,   195,
     216,   222,   224,   227,   256,   258,   260,   268,   270,   502,
     503,   272,   407,   849,   936,   510,   241,   795,   242,   243,
     274,   244,   150,   849,   352,  1124,   353,   243,   245,   244,
     244,   381,   850,   382,   232,   246,   245,   245,   352,   384,
     353,   243,   850,   244,   386,   389,   387,   397,   399,   864,
     245,   391,   393,   153,   865,   395,   644,   516,   518,   524,
     526,   528,   530,   532,   534,   536,   276,   538,   937,   543,
     545,   547,   549,   552,   588,   590,   592,   594,   596,   598,
     600,   602,   604,   278,   606,   608,   646,   230,   766,   610,
     612,   766,   670,   281,  1113,   629,  1026,   671,   577,   577,
     489,   307,   490,   491,   719,   769,   914,  -337,   769,   973,
     935,   574,   720,   574,   309,   583,   583,   316,   317,   311,
    1125,   319,   320,   373,   235,   579,   579,   218,   219,   576,
     576,   220,   580,   580,   681,   582,   582,   959,   960,  1062,
    1063,  1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,   788,
     324,   325,   789,  1073,   375,   832,   832,   962,   833,   833,
    1161,   834,   834,   835,  1097,   282,   911,   912,   506,   353,
     917,   673,   914,   353,   924,   353,   966,   684,   688,   690,
     284,  1090,   692,   704,   706,   708,   710,   574,   713,   678,
     797,   682,   799,   917,   786,   924,   966,   234,   339,   235,
     340,   366,   234,   367,   235,   210,   212,   214,  1055,   217,
     223,   225,   228,   257,   259,   261,   269,   271,   286,   288,
     273,   290,   292,   938,   294,  1033,  1034,  1035,  1036,   275,
     296,   298,  1040,   300,   302,   304,   313,   574,   574,   321,
     326,   328,   330,   332,   334,   336,   341,   343,   861,   118,
     103,   345,   347,   349,   355,   357,   359,   120,   122,   361,
    1052,   644,   774,   363,   376,   791,   104,   378,   693,   695,
     792,   919,   926,   930,   913,   277,   766,   766,   766,   766,
     766,   766,   766,   766,   766,   766,   489,  1189,   490,   491,
     105,   932,   279,   769,   769,   769,   769,   769,   769,   769,
     769,   769,   769,  1075,   739,   730,   739,   739,   739,   735,
     739,   742,   124,  1206,  1012,   751,   721,  1178,   779,  1145,
    1172,   477,   733,   776,   778,   126,   736,   178,   743,   929,
     106,   858,   644,   644,   644,   644,   737,   479,  1014,   644,
     777,  1163,   750,  1146,  1164,   477,  1213,  1091,   107,   180,
     477,  1094,   734,   559,   560,   561,   933,   352,   934,   193,
     741,   479,   244,   218,   219,   656,   479,   220,   775,   245,
     659,   477,   657,   660,   283,   677,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   800,   479,   801,   285,
     241,  1029,   242,   243,  1030,   244,  1053,   404,   405,  1054,
     477,   958,   245,   352,  1100,   353,   243,  1101,   244,   246,
     218,   219,   352,   188,   220,   245,   479,   244,  1012,  1126,
    1169,  1016,  1099,  1017,   245,   108,   119,   287,   289,   774,
     291,   293,   191,   295,   121,   123,   197,   574,   574,   297,
     299,   861,   301,   303,   305,   314,  1165,   970,   322,   327,
     329,   331,   333,   335,   337,   342,   344,   644,   644,   644,
     346,   348,   350,   356,   358,   360,  1174,  1175,   362,  1177,
    1179,   109,   364,   377,   110,  1181,   379,   694,   696,   793,
     920,   927,   931,   218,   219,   744,   802,   220,   803,   125,
    1166,  1158,  1159,  1160,   722,   723,   724,   725,   726,   727,
     728,   729,   127,   111,   179,   941,   943,   779,   644,   112,
     644,   644,   776,   778,   722,   723,   724,   725,   726,   727,
     722,  1214,   942,   944,   113,   727,   181,   114,   115,   947,
     722,   723,   724,   725,   726,   727,   728,   729,   722,   723,
     724,   725,   726,   727,   728,   729,   722,   723,   724,   725,
     726,   727,   728,   729,   128,   804,  1241,   805,  1242,   129,
    1243,   628,  1244,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,   746,   130,   131,  1209,  1211,  1212,   132,  1252,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
     806,  -354,   807,  -272,  -272,  -354,  -354,  -272,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,   133,  -354,  -354,  -354,  -354,
    -354,  -354,   748,   740,   134,   745,   747,   749,   752,   753,
     953,   954,   955,   956,   957,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,   921,   845,   846,  -354,  -354,  -354,
    -354,  -354,   642,   135,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   722,   723,   724,   725,   726,   727,   136,
     137,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   138,   445,  -407,  -407,  1223,   446,   447,   139,   448,
     449,   450,   451,   452,   453,   454,   140,   455,   456,   457,
     458,   459,   460,   968,   141,   969,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   201,  1061,  -354,   470,   471,
     472,   473,   474,   808,   810,   809,   811,   869,   142,   870,
     722,   723,   724,   725,   726,   727,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,   880,   892,
     881,   893,  -354,   996,  -354,   997,  -354,  -354,  -354,   629,
    -354,   143,   352,  -354,   999,   144,  1000,   244,   145,  1002,
    -354,  1003,   146,  1167,   245,  1019,  1031,  1020,  1032,   203,
     722,   723,   724,   725,   726,   727,   722,   723,   724,   725,
     726,   727,   722,   723,   724,   725,   726,   727,   728,   729,
     630,  1076,  1078,  1077,  1079,  1080,   147,  1081,   475,   631,
     632,   633,   634,   635,   636,   637,   638,   639,  1118,  1143,
    1119,  1144,  1147,   148,  1148,   151,   154,  -271,  -271,   155,
     156,  -271,   948,   949,   950,   951,   952,   953,   954,   955,
     956,   957,  1149,   476,  1150,   477,   157,   158,   478,  1153,
     159,  1154,  -407,  1031,  1193,  1156,  1194,  1228,   160,  1229,
     642,   479,   416,   417,   418,   419,   420,   421,   422,   423,
     424,  1230,  1232,  1231,  1233,  1234,   161,  1235,   162,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   163,
     445,  -403,  -403,  1225,   446,   447,   164,   448,   449,   450,
     451,   452,   453,   454,   165,   455,   456,   457,   458,   459,
     460,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   182,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   183,   184,   185,   470,   471,   472,   473,
     474,   642,   186,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   187,   205,   402,   207,   215,   262,   263,   264,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     239,   445,   265,   266,   312,   446,   447,   267,   448,   449,
     450,   451,   452,   453,   454,   368,   455,   456,   457,   458,
     459,   460,   369,   370,   371,   400,   401,   403,   406,   -30,
     409,   415,   244,   407,   414,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   504,   508,   475,   470,   471,   472,
     473,   474,   630,   722,   723,   724,   725,   726,   727,   728,
     729,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     509,   512,   514,   513,   519,   520,   521,   522,   658,   641,
     539,   476,   540,   477,   541,   550,   478,   553,   837,   554,
    -403,   555,   556,   506,   557,   584,   586,   613,   614,   479,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   829,   655,   812,   813,   647,   648,   650,
     651,   664,   674,   814,   676,   662,   711,   714,   663,   715,
     716,   717,   815,   816,   817,   818,   819,   475,   821,   823,
     824,   825,   838,   844,   840,   852,   854,   963,   964,   841,
     842,   843,   847,   859,  1110,   866,   867,   868,   872,   873,
     874,   875,   876,   877,   878,   879,   975,   882,   883,   884,
     885,   886,   476,  1060,   477,   887,   888,   478,  1126,   889,
     890,   643,   891,   894,   895,   896,   897,  1005,  1006,   642,
     479,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     898,   899,   900,   901,   902,   903,   904,   905,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   906,   445,
     907,   908,  1007,   446,   447,   909,   448,   449,   450,   451,
     452,   453,   454,   974,   455,   456,   457,   458,   459,   460,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   989,   990,   991,   470,   471,   472,   473,   474,
     642,   992,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   993,   994,   995,  1037,   998,  1001,  1004,  1008,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,  1009,
     445,  1010,  1011,  1038,   446,   447,  1021,   448,   449,   450,
     451,   452,   453,   454,  1022,   455,   456,   457,   458,   459,
     460,  1023,  1024,  1027,  1039,  1041,  1028,  1043,  1042,  1044,
    1046,  1048,  1049,  1050,   461,   462,   463,   464,   465,   466,
     467,   468,   469,  1051,  1057,   475,   470,   471,   472,   473,
     474,  1058,  1059,   913,   921,  1074,  1082,  1083,  1084,  1085,
    1086,  1087,  1088,  1089,  1092,  1093,  1095,  1111,  1190,  1191,
    1192,   190,  1173,   410,  1106,  1107,  1108,  1112,  1114,  1168,
     476,  1115,   477,  1116,  1117,   478,  1170,  1120,  1121,   649,
    1122,  1130,  1131,  1132,  1133,  1134,  1135,  1136,   479,  1137,
    1138,  1139,   661,  1141,  1140,  1142,  1151,  1180,  1182,  1152,
    1155,  1157,  1162,  1183,  1184,  1188,  1045,  1219,  1221,  1047,
    1195,  1196,  1197,  1198,  1199,  1200,  1215,   408,  1201,  1202,
    1203,  1204,  1205,  1207,  1216,  1217,   475,  1218,  1220,  1226,
    1222,  1098,     0,  1224,  1237,  1236,  1227,  1245,  1238,  1239,
    1240,     0,     0,  1246,  1247,  1248,  1249,  1250,  1251,  1253,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   477,     0,     0,   478,     0,     0,     0,
     652,     0,     0,     0,     0,     0,     0,     0,   642,   479,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,     0,     0,     0,     0,     0,     0,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,     0,   445,     0,
       0,     0,   446,   447,     0,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     0,     0,     0,   470,   471,   472,   473,   474,   642,
       0,   416,   417,   418,   419,   420,   421,   422,   423,   424,
       0,     0,     0,     0,     0,     0,     0,     0,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,     0,   445,
       0,     0,     0,   446,   447,     0,   448,   449,   450,   451,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,   462,   463,   464,   465,   466,   467,
     468,   469,     0,     0,   475,   470,   471,   472,   473,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,     0,     0,   478,     0,     0,     0,   653,     0,
       0,     0,     0,     0,     0,     0,     0,   479,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   477,     0,     0,   478,     0,     0,     0,   654,
       0,     0,     0,     0,     0,     0,     0,   642,   479,   416,
     417,   418,   419,   420,   421,   422,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,     0,   445,     0,     0,
       0,   446,   447,     0,   448,   449,   450,   451,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,   462,   463,   464,   465,   466,   467,   468,   469,
       0,     0,     0,   470,   471,   472,   473,   474,   642,     0,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,     0,     0,     0,     0,     0,     0,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,     0,   445,     0,
       0,     0,   446,   447,     0,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     0,     0,   475,   470,   471,   472,   473,   474,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     477,     0,     0,   478,     0,     0,     0,   940,     0,     0,
       0,     0,     0,     0,     0,     0,   479,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,     0,     0,   478,     0,     0,     0,  1072,     0,
       0,     0,     0,     0,     0,     0,   642,   479,   416,   417,
     418,   419,   420,   421,   422,   423,   424,     0,     0,     0,
       0,     0,     0,     0,     0,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,     0,   445,     0,     0,     0,
     446,   447,     0,   448,   449,   450,   451,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,   462,   463,   464,   465,   466,   467,   468,   469,     0,
       0,     0,   470,   471,   472,   473,   474,   642,     0,   416,
     417,   418,   419,   420,   421,   422,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,     0,   445,     0,     0,
       0,   446,   447,     0,   448,   449,   450,   451,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,   462,   463,   464,   465,   466,   467,   468,   469,
       0,     0,   475,   470,   471,   472,   473,   474,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   477,
       0,     0,   478,     0,     0,     0,  1102,     0,     0,     0,
       0,     0,     0,     0,     0,   479,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     477,     0,     0,   478,     0,     0,     0,  1103,     0,     0,
       0,     0,     0,     0,     0,   642,   479,   416,   417,   418,
     419,   420,   421,   422,   423,   424,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,     0,   445,     0,     0,     0,   446,
     447,     0,   448,   449,   450,   451,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
     462,   463,   464,   465,   466,   467,   468,   469,     0,     0,
       0,   470,   471,   472,   473,   474,   642,     0,   416,   417,
     418,   419,   420,   421,   422,   423,   424,     0,     0,     0,
       0,     0,     0,     0,     0,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,     0,   445,     0,     0,     0,
     446,   447,     0,   448,   449,   450,   451,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     461,   462,   463,   464,   465,   466,   467,   468,   469,     0,
       0,   475,   470,   471,   472,   473,   474,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   477,     0,
       0,   478,     0,     0,     0,  1104,     0,     0,     0,     0,
       0,     0,     0,     0,   479,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   475,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,     0,   477,
       0,     0,   478,     0,     0,     0,  1105,     0,     0,     0,
       0,     0,     0,     0,   642,   479,   416,   417,   418,   419,
     420,   421,   422,   423,   424,     0,     0,     0,     0,     0,
       0,     0,     0,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,     0,   445,     0,     0,     0,   446,   447,
       0,   448,   449,   450,   451,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,   462,
     463,   464,   465,   466,   467,   468,   469,     0,     0,     0,
     470,   471,   472,   473,   474,   642,     0,   416,   417,   418,
     419,   420,   421,   422,   423,   424,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,     0,   445,     0,     0,     0,   446,
     447,     0,   448,   449,   450,   451,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
     462,   463,   464,   465,   466,   467,   468,   469,     0,     0,
     475,   470,   471,   472,   473,   474,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,     0,   477,     0,     0,
     478,     0,     0,     0,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,   479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   476,     0,   477,     0,
       0,   478,     0,     0,     0,  1185,     0,     0,     0,     0,
       0,     0,     0,   642,   479,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,     0,     0,     0,     0,
       0,     0,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,     0,   445,     0,     0,     0,   446,   447,     0,
     448,   449,   450,   451,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   461,   462,   463,
     464,   465,   466,   467,   468,   469,     0,     0,     0,   470,
     471,   472,   473,   474,   642,     0,   416,   417,   418,   419,
     420,   421,   422,   423,   424,     0,     0,     0,     0,     0,
       0,     0,     0,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,     0,   445,     0,     0,     0,   446,   447,
       0,   448,   449,   450,   451,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,   462,
     463,   464,   465,   466,   467,   468,   469,     0,     0,   475,
     470,   471,   472,   473,   474,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   477,     0,     0,   478,
       0,     0,     0,  1186,     0,     0,     0,     0,     0,     0,
       0,     0,   479,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     475,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,     0,   477,     0,     0,
     478,     0,     0,     0,  1187,     0,     0,     0,     0,     0,
       0,     0,   642,   479,   416,   417,   418,   419,   420,   421,
     422,   423,   424,     0,     0,     0,     0,     0,     0,     0,
       0,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,     0,   445,     0,     0,     0,   446,   447,     0,   448,
     449,   450,   451,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   461,   462,   463,   464,
     465,   466,   467,   468,   469,     0,     0,     0,   470,   471,
     472,   473,   474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      -2,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    -8,   -10,   -12,   -14,   -16,   -18,   -20,   -22,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,   477,     0,     0,   478,     0,
       0,     0,  -409,     0,     2,     3,     4,     0,     0,     0,
       0,   479,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     0,     0,     0,     0,     0,     0,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,   416,   417,   418,   419,   420,   421,   422,
     423,   424,     0,     0,     0,     0,     0,     0,     0,     0,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
       0,     0,     0,     0,     0,     0,     0,    82,   448,   449,
     450,   451,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   558,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,     0,   461,   462,   463,   464,   465,
     466,   467,   468,   469,     0,     0,     0,   470,   471,   472,
     473,   474,     0,     0,   416,   417,   418,   419,   420,   421,
     422,   423,   424,     0,     0,     0,     0,     0,     0,     0,
       0,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   448,
     449,   450,   451,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   558,   559,   560,   561,   758,   563,   759,
     565,   566,   567,   568,   569,     0,   461,   462,   463,   464,
     465,   466,   467,   468,   469,     0,     0,   475,   470,   471,
     472,   473,   474,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   219,     0,   570,
     220,     0,   476,     0,   477,     0,     0,     0,     0,   571,
     572,     0,   573,     0,     0,     0,     0,     0,     0,     0,
     479,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   475,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   219,   760,
       0,   220,     0,   761,   762,   477,     0,     0,     0,     0,
     763,   416,   417,   418,   419,   420,   421,   422,   423,   424,
       0,   479,     0,     0,     0,     0,     0,     0,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,     0,   445,
       0,     0,     0,   446,   447,     0,   448,   449,   450,   451,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,   462,   463,   464,   465,   466,   467,
     468,   469,     0,     0,     0,   470,   471,   472,   473,   474,
       0,     0,   416,   417,   418,   419,   420,   421,   422,   423,
     424,     0,     0,     0,     0,     0,     0,     0,     0,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,     0,
     445,     0,     0,     0,   446,   447,     0,   448,   449,   450,
     451,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,   462,   463,   464,   465,   466,
     467,   468,   469,     0,     0,   475,   470,   471,   472,   473,
     474,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,   771,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   477,     0,     0,   478,     0,     0,   772,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   479,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   475,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,     0,   477,     0,     0,   478,     0,     0,     0,
     756,     0,     0,     0,     0,     0,     0,     0,     0,   479,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,     0,     0,     0,     0,     0,     0,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,     0,   445,     0,
       0,     0,   446,   447,     0,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     0,     0,     0,   470,   471,   472,   473,   474,     0,
       0,   416,   417,   418,   419,   420,   421,   422,   423,   424,
       0,     0,     0,     0,     0,     0,     0,     0,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,     0,   445,
       0,     0,     0,   446,   447,     0,   448,   449,   450,   451,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,   462,   463,   464,   465,   466,   467,
     468,   469,     0,     0,   475,   470,   471,   472,   473,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,     0,     0,   478,     0,     0,     0,   961,     0,
       0,     0,     0,     0,     0,     0,     0,   479,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   475,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,   477,     0,     0,   478,     0,     0,   772,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   479,     0,
       0,     0,     0,     0,     0,     0,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,     0,   445,     0,     0,
    1208,   446,   447,     0,   448,   449,   450,   451,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,   462,   463,   464,   465,   466,   467,   468,   469,
       0,     0,     0,   470,   471,   472,   473,   474,     0,     0,
     416,   417,   418,   419,   420,   421,   422,   423,   424,     0,
       0,     0,     0,     0,     0,     0,     0,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,     0,   445,     0,
       0,  1210,   446,   447,     0,   448,   449,   450,   451,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   461,   462,   463,   464,   465,   466,   467,   468,
     469,     0,     0,   475,   470,   471,   472,   473,   474,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,     0,
     477,     0,     0,   478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   475,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   476,
       0,   477,     0,     0,   478,   416,   417,   418,   419,   420,
     421,   422,   423,   424,     0,     0,     0,   479,     0,     0,
       0,     0,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,     0,   445,     0,     0,     0,   446,   447,     0,
     448,   449,   450,   451,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   461,   462,   463,
     464,   465,   466,   467,   468,   469,     0,     0,     0,   470,
     471,   472,   473,   474,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    -8,   -10,   -12,   -14,   -16,   -18,   -20,   -22,
     -24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   475,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   476,     0,   477,     0,     0,   478,
       0,     0,     0,     0,     0,     2,     3,     4,     0,     0,
       0,     0,   479,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     0,     0,     0,     0,     0,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-723)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   386,   444,   106,   446,   585,   391,   171,   393,   384,
     395,   482,   387,   110,   389,   660,   621,     1,   663,   444,
     742,   446,   397,   494,   399,   735,   497,   498,   499,   444,
       1,   446,   742,   444,     1,   446,   444,     1,   446,   444,
       1,   446,     1,   446,     1,     1,     1,     1,     1,   210,
     213,   214,     1,   213,     1,     1,     1,     1,   218,     1,
     178,   640,     1,     1,     1,     1,     1,   230,   229,     1,
       1,     1,     1,     1,     1,     1,     1,     1,   520,     1,
     522,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,   520,     1,     1,   540,   541,
       1,     1,     1,   178,   575,   520,     1,     1,     1,   520,
       1,     1,   520,   736,   585,   520,   212,   520,   210,     1,
     743,     1,   214,   214,   209,     1,     1,   206,   570,   571,
     213,   573,     1,   229,   219,   218,     1,     1,   230,   230,
       1,     1,   584,     1,   586,   570,   571,   226,   573,   196,
     197,   178,     1,   528,   777,   570,   571,   206,   207,   570,
     571,   210,   570,   571,   213,   570,   571,   570,   571,     1,
       1,   218,     1,   212,   213,   214,     1,     1,   178,   196,
     197,   760,   210,   625,   763,     1,     1,   572,     1,     1,
     218,   230,     1,   178,     1,     1,     1,     1,   640,   216,
       1,     1,     1,     1,     1,   210,     1,    15,     1,   214,
       1,     1,   213,     1,     1,   640,   213,   218,     1,     1,
     178,   218,     1,     1,   178,   230,     1,     1,     1,    13,
       1,     1,     1,     1,     1,     1,     1,     1,     1,   403,
     404,     1,   226,   210,     1,   409,   210,   218,   212,   213,
       1,   215,   213,   210,   210,   210,   212,   213,   222,   215,
     215,   220,   229,   222,   213,   229,   222,   222,   210,   222,
     212,   213,   229,   215,   220,   222,   222,   222,   222,   216,
     222,   220,   220,   219,   221,   220,   757,   219,   219,   219,
     219,   219,   219,   219,   219,   219,     1,   219,    55,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,     1,   219,   219,   217,   212,   760,   219,
     219,   763,   213,   213,  1046,   219,   219,   218,   770,   771,
     210,   213,   212,   213,   210,   760,  1046,   212,   763,   781,
     751,   444,   218,   446,   213,   770,   771,   212,   213,   213,
    1060,   212,   213,   213,   212,   770,   771,   206,   207,   770,
     771,   210,   770,   771,   213,   770,   771,   770,   771,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   210,
     212,   213,   213,   963,   213,   210,   210,   772,   213,   213,
    1112,   216,   216,   218,   218,     1,   212,   213,   213,   212,
     213,   213,  1112,   212,   213,   212,   213,   213,   213,   213,
       1,  1016,   213,   213,   213,   213,   213,   520,   213,   522,
     213,   524,   213,   213,   588,   213,   213,   210,   210,   212,
     212,   210,   210,   212,   212,   210,   210,   210,   880,   210,
     210,   210,   210,   210,   210,   210,   210,   210,     1,     1,
     210,     1,     1,   210,     1,   840,   841,   842,   843,   210,
       1,     1,   847,     1,     1,     1,     1,   570,   571,     1,
       1,     1,     1,     1,     1,     1,     1,     1,   666,     1,
     178,     1,     1,     1,     1,     1,     1,     1,     1,     1,
      74,   962,   963,     1,     1,   592,   178,     1,     1,     1,
       1,     1,     1,     1,    72,   210,   948,   949,   950,   951,
     952,   953,   954,   955,   956,   957,   210,  1162,   212,   213,
     178,     1,   210,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   975,   563,   558,   565,   566,   567,   562,
     569,   564,     1,  1188,   213,   568,     1,   210,   577,   218,
    1130,   214,   558,   576,   577,     1,   562,     1,   564,   747,
     178,   664,  1033,  1034,  1035,  1036,     1,   230,   213,  1040,
     576,   210,     1,   218,   213,   214,   210,  1019,   178,     1,
     214,  1023,     1,    63,    64,    65,    66,   210,    68,    12,
       1,   230,   215,   206,   207,   216,   230,   210,     1,   222,
     225,   214,   223,   228,   210,   218,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   210,   230,   212,   210,
     210,   210,   212,   213,   213,   215,   210,   224,   225,   213,
     214,   223,   222,   210,   210,   212,   213,   213,   215,   229,
     206,   207,   210,     0,   210,   222,   230,   215,   213,    42,
      43,   216,  1027,   218,   222,   178,   178,   210,   210,  1130,
     210,   210,    11,   210,   178,   178,    14,   770,   771,   210,
     210,   859,   210,   210,   210,   210,  1118,   780,   210,   210,
     210,   210,   210,   210,   210,   210,   210,  1158,  1159,  1160,
     210,   210,   210,   210,   210,   210,  1138,  1139,   210,  1141,
    1142,   178,   210,   210,   178,  1147,   210,   210,   210,   210,
     210,   210,   210,   206,   207,     1,   210,   210,   212,   178,
     213,  1106,  1107,  1108,   179,   180,   181,   182,   183,   184,
     185,   186,   178,   178,   178,   758,   759,   766,  1209,   178,
    1211,  1212,   765,   766,   179,   180,   181,   182,   183,   184,
     179,  1193,   758,   759,   178,   184,   178,   178,   178,   765,
     179,   180,   181,   182,   183,   184,   185,   186,   179,   180,
     181,   182,   183,   184,   185,   186,   179,   180,   181,   182,
     183,   184,   185,   186,   178,   210,  1228,   212,  1230,   178,
    1232,     1,  1234,     3,     4,     5,     6,     7,     8,     9,
      10,    11,     1,   178,   178,  1190,  1191,  1192,   178,  1251,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     210,    41,   212,   206,   207,    45,    46,   210,    48,    49,
      50,    51,    52,    53,    54,   178,    56,    57,    58,    59,
      60,    61,     1,   563,   178,   565,   566,   567,     1,   569,
     203,   204,   205,   206,   207,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    72,   176,   177,    87,    88,    89,
      90,    91,     1,   178,     3,     4,     5,     6,     7,     8,
       9,    10,    11,   179,   180,   181,   182,   183,   184,   178,
     178,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,   178,    41,    42,    43,    44,    45,    46,   178,    48,
      49,    50,    51,    52,    53,    54,   178,    56,    57,    58,
      59,    60,    61,    72,   178,    74,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    16,   218,   177,    87,    88,
      89,    90,    91,   210,   210,   212,   212,   216,   178,   218,
     179,   180,   181,   182,   183,   184,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   216,   216,
     218,   218,   212,   216,   214,   218,   216,   217,   218,   219,
     220,   178,   210,   223,   216,   178,   218,   215,   178,   216,
     230,   218,   178,  1126,   222,   216,   216,   218,   218,    17,
     179,   180,   181,   182,   183,   184,   179,   180,   181,   182,
     183,   184,   179,   180,   181,   182,   183,   184,   185,   186,
     178,   210,   210,   212,   212,   210,   178,   212,   177,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   216,   216,
     218,   218,   216,   178,   218,   178,   178,   206,   207,   178,
     178,   210,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   216,   212,   218,   214,   178,   178,   217,   216,
     178,   218,   221,   216,   216,   218,   218,   216,   178,   218,
       1,   230,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   216,   216,   218,   218,   216,   178,   218,   178,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   178,
      41,    42,    43,    44,    45,    46,   178,    48,    49,    50,
      51,    52,    53,    54,   178,    56,    57,    58,    59,    60,
      61,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   178,   178,   178,    87,    88,    89,    90,
      91,     1,   178,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   178,    18,     1,    19,   210,   210,   210,   210,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     213,    41,   210,   210,   213,    45,    46,   210,    48,    49,
      50,    51,    52,    53,    54,   210,    56,    57,    58,    59,
      60,    61,   210,   212,   210,   210,   210,   228,   228,   228,
     228,   228,   215,   226,   216,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   210,   210,   177,    87,    88,    89,
      90,    91,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     223,   212,   220,   213,   219,   219,   219,   219,   228,   217,
     219,   212,   219,   214,   219,   219,   217,   219,    74,   219,
     221,   219,   219,   213,   219,   219,   219,   219,   219,   230,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   212,   216,   213,   213,   223,   223,   223,
     223,   216,   218,   213,   218,   226,   218,   218,   228,   218,
     218,   218,   213,   213,   213,   213,   213,   177,   213,   213,
     213,   213,    74,   210,   220,   210,   210,    40,    72,   220,
     220,   220,   220,   219,   210,   218,   218,   218,   218,   218,
     218,   218,   216,   218,   216,   218,    47,   218,   218,   218,
     218,   218,   212,   205,   214,   218,   218,   217,    42,   218,
     218,   221,   218,   218,   218,   216,   216,   216,   216,     1,
     230,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     218,   218,   218,   218,   218,   218,   218,   218,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   218,    41,
     218,   218,   216,    45,    46,   218,    48,    49,    50,    51,
      52,    53,    54,   218,    56,    57,    58,    59,    60,    61,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   218,   218,   218,    87,    88,    89,    90,    91,
       1,   218,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   218,   218,   218,   223,   218,   218,   218,   216,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,   216,
      41,   216,   216,   223,    45,    46,   216,    48,    49,    50,
      51,    52,    53,    54,   216,    56,    57,    58,    59,    60,
      61,   216,   216,   216,   223,   225,   218,   218,   226,   218,
     216,   213,   213,   213,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   213,   213,   177,    87,    88,    89,    90,
      91,   213,   213,    72,    72,   220,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   210,   228,   228,
     228,    84,   213,   249,   220,   220,   220,   216,   218,   221,
     212,   218,   214,   218,   218,   217,  1128,   218,   218,   221,
     218,   218,   218,   218,   218,   218,   218,   218,   230,   216,
     216,   216,   506,   216,   218,   216,   216,   213,   210,   218,
     218,   218,   216,   213,   213,   216,   859,   213,   213,   864,
     218,   218,   216,   216,   216,   216,   210,   245,   218,   218,
     218,   216,   218,   216,   210,   210,   177,   210,   216,   218,
     217,  1026,    -1,   217,   213,   216,   218,   213,   218,   217,
     217,    -1,    -1,   218,   218,   218,   218,   218,   216,   218,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   214,    -1,    -1,   217,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   230,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    91,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,   177,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,    -1,    -1,   217,    -1,    -1,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,   230,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,   177,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   230,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,   177,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,
      -1,    -1,   217,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,   230,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    91,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    57,    58,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,   177,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,    -1,
      -1,   217,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,
      -1,    -1,   217,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,   230,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
     177,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   214,    -1,    -1,
     217,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,   214,    -1,
      -1,   217,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   230,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    91,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    -1,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,   177,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,   214,    -1,    -1,   217,
      -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,   214,    -1,    -1,
     217,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   230,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,   214,    -1,    -1,   217,    -1,
      -1,    -1,   221,    -1,    84,    85,    86,    -1,    -1,    -1,
      -1,   230,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    48,    49,
      50,    51,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    -1,   177,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   206,   207,    -1,   209,
     210,    -1,   212,    -1,   214,    -1,    -1,    -1,    -1,   219,
     220,    -1,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,   207,   208,
      -1,   210,    -1,   212,   213,   214,    -1,    -1,    -1,    -1,
     219,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,   177,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   197,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,    -1,    -1,   217,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,   214,    -1,    -1,   217,    -1,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    57,    58,    59,    60,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,   177,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,   214,    -1,    -1,   217,    -1,    -1,   220,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      -1,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,   177,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
     214,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,   214,    -1,    -1,   217,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,   214,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    -1,    -1,
      -1,    -1,   230,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,    -1,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    84,    85,    86,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   227,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   256,   257,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,     1,   178,     1,   178,
       1,   178,     1,   178,     1,   178,     1,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,     1,
     213,   178,     1,   219,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,     1,   178,
       1,   178,   178,   178,   178,   178,   178,   178,     0,     1,
     234,    11,   264,    12,   265,    13,   266,    14,   267,    15,
     268,    16,   269,    17,   270,    18,   271,    19,   272,     1,
     210,     1,   210,     1,   210,   210,     1,   210,   206,   207,
     210,   247,     1,   210,     1,   210,   247,     1,   210,     1,
     212,     1,   213,     1,   210,   212,   245,   248,   251,   213,
       1,   210,   212,   213,   215,   222,   229,   244,   248,   249,
     250,   258,   259,   260,   261,   285,     1,   210,     1,   210,
       1,   210,   210,   210,   210,   210,   210,   210,     1,   210,
       1,   210,     1,   210,     1,   210,     1,   210,     1,   210,
       1,   213,     1,   210,     1,   210,     1,   210,     1,   210,
       1,   210,     1,   210,     1,   210,     1,   210,     1,   210,
       1,   210,     1,   210,     1,   210,     1,   213,     1,   213,
       1,   213,   213,     1,   210,     1,   212,   213,     1,   212,
     213,     1,   210,     1,   212,   213,     1,   210,     1,   210,
       1,   210,     1,   210,     1,   210,     1,   210,     1,   210,
     212,     1,   210,     1,   210,     1,   210,     1,   210,     1,
     210,     1,   210,   212,   244,     1,   210,     1,   210,     1,
     210,     1,   210,     1,   210,     1,   210,   212,   210,   210,
     212,   210,     1,   213,     1,   213,     1,   210,     1,   210,
       1,   220,   222,     1,   222,     1,   220,   222,     1,   222,
       1,   220,     1,   220,     1,   220,     1,   222,     1,   222,
     210,   210,     1,   228,   224,   225,   228,   226,   260,   228,
     250,   206,   226,   284,   216,   228,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    45,    46,    48,    49,
      50,    51,    52,    53,    54,    56,    57,    58,    59,    60,
      61,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      87,    88,    89,    90,    91,   177,   212,   214,   217,   230,
     280,   288,   291,   292,   293,   294,   295,   296,   304,   210,
     212,   213,   263,   263,   291,   263,   263,   291,   291,   291,
     263,   263,   244,   244,   210,     1,   213,   253,   210,   223,
     244,     1,   212,   213,   220,     1,   219,     1,   219,   219,
     219,   219,   219,     1,   219,     1,   219,     1,   219,     1,
     219,     1,   219,     1,   219,     1,   219,     1,   219,   219,
     219,   219,     1,   219,     1,   219,     1,   219,     1,   219,
     219,     1,   219,   219,   219,   219,   219,   219,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     209,   219,   220,   222,   247,   273,   279,   280,   281,   282,
     288,   289,   293,   304,   219,   273,   219,     1,   219,     1,
     219,     1,   219,     1,   219,     1,   219,     1,   219,     1,
     219,     1,   219,     1,   219,     1,   219,     1,   219,     1,
     219,     1,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,     1,   219,
     178,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     286,   217,     1,   221,   292,     1,   217,   223,   223,   221,
     223,   223,   221,   221,   221,   216,   216,   223,   228,   225,
     228,   253,   226,   228,   216,   209,   219,   254,   255,     1,
     213,   218,     1,   213,   218,   273,   218,   218,   247,   280,
       1,   213,   247,     1,   213,     1,   263,     1,   213,     1,
     213,     1,   213,     1,   210,     1,   210,   213,   218,   210,
     280,   213,   280,     1,   213,     1,   213,     1,   213,     1,
     213,   218,     1,   213,   218,   218,   218,   218,     1,   210,
     218,     1,   179,   180,   181,   182,   183,   184,   185,   186,
     274,   275,   276,   278,     1,   274,   278,     1,   274,   275,
     277,     1,   274,   278,     1,   277,     1,   277,     1,   277,
       1,   274,     1,   277,   273,   273,   221,   291,    66,    68,
     208,   212,   213,   219,   247,   279,   280,   282,   287,   304,
     196,   197,   220,   290,   292,     1,   274,   278,   274,   275,
     277,   278,   280,   290,   280,     1,   244,     1,   210,   213,
       1,   248,     1,   210,     1,   218,     1,   213,     1,   213,
     210,   212,   210,   212,   210,   212,   210,   212,   210,   212,
     210,   212,   213,   213,   213,   213,   213,   213,   213,   213,
     262,   213,   262,   213,   213,   213,   280,   210,   218,   212,
     303,     1,   210,   213,   216,   218,   301,    74,    74,   287,
     220,   220,   220,   220,   210,   176,   177,   220,     1,   210,
     229,   246,   210,   246,   210,     1,   246,   213,   247,   219,
     229,   245,   252,     1,   216,   221,   218,   218,   218,   216,
     218,   216,   218,   218,   218,   218,   216,   218,   216,   218,
     216,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   216,   218,   218,   218,   216,   216,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
       1,   212,   213,    72,   258,   283,     1,   213,   285,     1,
     210,    72,   283,     1,   213,   285,     1,   210,     1,   245,
       1,   210,     1,    66,    68,   279,     1,    55,   210,   218,
     221,   274,   278,   274,   278,   287,   287,   278,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   223,   273,
     273,   221,   291,    40,    72,     1,   213,   285,    72,    74,
     247,   212,   213,   280,   218,    47,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   216,   218,   218,   216,
     218,   218,   216,   218,   218,   216,   216,   216,   216,   216,
     216,   216,   213,   218,   213,   218,   216,   218,   218,   216,
     218,   216,   216,   216,   216,     1,   219,   216,   218,   210,
     213,   216,   218,   291,   291,   291,   291,   223,   223,   223,
     291,   225,   226,   218,   218,   252,   216,   254,   213,   213,
     213,   213,    74,   210,   213,   280,   302,   213,   213,   213,
     205,   218,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   221,   290,   220,   280,   210,   212,   210,   212,
     210,   212,   213,   213,   213,   213,   213,   213,   213,   213,
     262,   280,   213,   213,   280,   213,     1,   218,   301,   263,
     210,   213,   221,   221,   221,   221,   220,   220,   220,   221,
     210,   210,   216,   283,   218,   218,   218,   218,   216,   218,
     218,   218,   218,     1,   210,   258,    42,   297,   298,   299,
     218,   218,   218,   218,   218,   218,   218,   216,   216,   216,
     218,   216,   216,   216,   218,   218,   218,   216,   218,   216,
     218,   216,   218,   216,   218,   218,   218,   218,   291,   291,
     291,   283,   216,   210,   213,   280,   213,   247,   221,    43,
     299,   300,   290,   213,   280,   280,   210,   280,   210,   280,
     213,   280,   210,   213,   213,   221,   221,   221,   216,   246,
     228,   228,   228,   216,   218,   218,   218,   216,   216,   216,
     216,   218,   218,   218,   216,   218,   246,   216,    44,   291,
      44,   291,   291,   210,   280,   210,   210,   210,   210,   213,
     216,   213,   217,    44,   217,    44,   218,   218,   216,   218,
     216,   218,   216,   218,   216,   218,   216,   213,   218,   217,
     217,   280,   280,   280,   280,   213,   218,   218,   218,   218,
     218,   216,   280,   218
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
/* Line 1792 of yacc.c  */
#line 493 "cfg.y"
    {}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 494 "cfg.y"
    {}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 495 "cfg.y"
    { yyerror(""); YYABORT;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 500 "cfg.y"
    {rt=REQUEST_ROUTE;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 501 "cfg.y"
    {rt=FAILURE_ROUTE;}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 502 "cfg.y"
    {rt=ONREPLY_ROUTE;}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 503 "cfg.y"
    {rt=BRANCH_ROUTE;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 504 "cfg.y"
    {rt=ERROR_ROUTE;}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 505 "cfg.y"
    {rt=LOCAL_ROUTE;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 506 "cfg.y"
    {rt=STARTUP_ROUTE;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 507 "cfg.y"
    {rt=TIMER_ROUTE;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 508 "cfg.y"
    {rt=EVENT_ROUTE;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 513 "cfg.y"
    {	tmp=ip_addr2a((yyvsp[(1) - (1)].ipaddr));
							if(tmp==0){
								LM_CRIT("cfg. parser: bad ip address.\n");
								(yyval.strval)=0;
							}else{
								(yyval.strval)=pkg_malloc(strlen(tmp)+1);
								if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								}else{
									strncpy((yyval.strval), tmp, strlen(tmp)+1);
								}
							}
						}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 527 "cfg.y"
    {	(yyval.strval)=pkg_malloc(strlen((yyvsp[(1) - (1)].strval))+1);
							if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
							}else{
									strncpy((yyval.strval), (yyvsp[(1) - (1)].strval), strlen((yyvsp[(1) - (1)].strval))+1);
							}
						}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 535 "cfg.y"
    {	if ((yyvsp[(1) - (1)].strval)==0) {
								(yyval.strval) = 0;
							} else {
								(yyval.strval)=pkg_malloc(strlen((yyvsp[(1) - (1)].strval))+1);
								if ((yyval.strval)==0){
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								}else{
									strncpy((yyval.strval), (yyvsp[(1) - (1)].strval), strlen((yyvsp[(1) - (1)].strval))+1);
								}
							}
						}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 549 "cfg.y"
    {
		if (parse_proto((unsigned char *)(yyvsp[(1) - (1)].strval), strlen((yyvsp[(1) - (1)].strval)), &i_tmp) < 0) {
			yyerrorf("cannot handle protocol <%s>\n", (yyvsp[(1) - (1)].strval));
			YYABORT;
		}
		(yyval.intval) = i_tmp;
	 }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 558 "cfg.y"
    { (yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 559 "cfg.y"
    { (yyval.intval)=0; }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 562 "cfg.y"
    { (yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 563 "cfg.y"
    { (yyval.intval)=(yyvsp[(2) - (2)].intval); }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 564 "cfg.y"
    { (yyval.intval)=-(yyvsp[(2) - (2)].intval); }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 568 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (3)].strval), (yyvsp[(1) - (3)].intval), 0); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 569 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (5)].strval), (yyvsp[(1) - (5)].intval), (yyvsp[(5) - (5)].intval));}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 570 "cfg.y"
    {
				(yyval.sockid)=0;
				yyerror("port number expected");
				YYABORT;
				}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 575 "cfg.y"
    { (yyval.sockid)=0;
				yyerror("protocol expected");
				YYABORT;
			}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 581 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(1) - (1)].strval), PROTO_NONE, 0); }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 582 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (3)].strval), PROTO_NONE, 0); }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 583 "cfg.y"
    { (yyval.sockid)=mk_listen_id((yyvsp[(3) - (5)].strval), PROTO_NONE, (yyvsp[(5) - (5)].intval)); }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 584 "cfg.y"
    {
				(yyval.sockid)=0;
				yyerror(" port number expected");
				}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 591 "cfg.y"
    {  (yyval.sockid)=(yyvsp[(1) - (1)].sockid) ; }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 592 "cfg.y"
    { (yyval.sockid)=(yyvsp[(1) - (2)].sockid); (yyval.sockid)->next=(yyvsp[(2) - (2)].sockid); }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 596 "cfg.y"
    { (yyval.sockid)=(yyvsp[(1) - (1)].sockid); }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 597 "cfg.y"
    { (yyval.sockid)=(yyvsp[(1) - (3)].sockid); (yyval.sockid)->children=(yyvsp[(3) - (3)].intval); }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 598 "cfg.y"
    {
				(yyval.sockid)=(yyvsp[(1) - (3)].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[(1) - (3)].sockid), (yyvsp[(3) - (3)].strval), 5060);
				}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 601 "cfg.y"
    {
				(yyval.sockid)=(yyvsp[(1) - (5)].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[(1) - (5)].sockid), (yyvsp[(3) - (5)].strval), 5060);
				(yyvsp[(1) - (5)].sockid)->children=(yyvsp[(5) - (5)].intval);
				}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 605 "cfg.y"
    {
				(yyval.sockid)=(yyvsp[(1) - (5)].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[(1) - (5)].sockid), (yyvsp[(3) - (5)].strval), (yyvsp[(5) - (5)].intval));
				}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 608 "cfg.y"
    {
				(yyval.sockid)=(yyvsp[(1) - (7)].sockid); set_listen_id_adv((struct socket_id *)(yyvsp[(1) - (7)].sockid), (yyvsp[(3) - (7)].strval), (yyvsp[(5) - (7)].intval));
				(yyvsp[(1) - (7)].sockid)->children=(yyvsp[(7) - (7)].intval);
				}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 614 "cfg.y"
    { (yyval.intval)=PROTO_NONE; }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 615 "cfg.y"
    { (yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 617 "cfg.y"
    { (yyval.multistr)=new_string((yyvsp[(1) - (1)].strval)); }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 618 "cfg.y"
    { (yyval.multistr)=new_string((yyvsp[(1) - (2)].strval)); (yyval.multistr)->next=(yyvsp[(2) - (2)].multistr); }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 621 "cfg.y"
    {
				s_tmp.s=(yyvsp[(8) - (9)].strval);
				s_tmp.len=strlen((yyvsp[(8) - (9)].strval));
				if (add_rule_to_list(&bl_head,&bl_tail,(yyvsp[(4) - (9)].ipnet),&s_tmp,(yyvsp[(6) - (9)].intval),(yyvsp[(2) - (9)].intval),0)) {
					yyerror("failed to add backlist element\n");YYABORT;
				}
			}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 628 "cfg.y"
    {
				s_tmp.s=(yyvsp[(9) - (10)].strval);
				s_tmp.len=strlen((yyvsp[(9) - (10)].strval));
				if (add_rule_to_list(&bl_head,&bl_tail,(yyvsp[(5) - (10)].ipnet),&s_tmp,
				(yyvsp[(7) - (10)].intval),(yyvsp[(3) - (10)].intval),BLR_APPLY_CONTRARY)) {
					yyerror("failed to add backlist element\n");YYABORT;
				}
			}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 638 "cfg.y"
    {}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 639 "cfg.y"
    {}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 640 "cfg.y"
    { yyerror("bad black list element");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 645 "cfg.y"
    { yyerror("\'debug\' is deprecated, use \'log_level\' instead\n");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 647 "cfg.y"
    {yyerror("fork is deprecated, use debug_mode\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 648 "cfg.y"
    {
			/* in debug mode, force logging to DEBUG level*/
			*log_level = debug_mode?L_DBG:(yyvsp[(3) - (3)].intval);
			}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 652 "cfg.y"
    { enable_asserts=(yyvsp[(3) - (3)].intval); }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 653 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 654 "cfg.y"
    { abort_on_assert=(yyvsp[(3) - (3)].intval); }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 655 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 656 "cfg.y"
    { debug_mode=(yyvsp[(3) - (3)].intval);
			if (debug_mode) { *log_level = L_DBG;log_stderr=1;}
			}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 660 "cfg.y"
    { yyerror("boolean value expected for debug_mode"); }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 664 "cfg.y"
    { if (!config_check && !debug_mode) log_stderr=(yyvsp[(3) - (3)].intval); }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 665 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 666 "cfg.y"
    {
			if ( (i_tmp=str2facility((yyvsp[(3) - (3)].strval)))==-1)
				yyerror("bad facility (see syslog(3) man page)");
			if (!config_check)
				log_facility=i_tmp;
			}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 672 "cfg.y"
    { yyerror("ID expected"); }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 673 "cfg.y"
    { log_name=(yyvsp[(3) - (3)].strval); }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 674 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 675 "cfg.y"
    { received_dns|= ((yyvsp[(3) - (3)].intval))?DO_DNS:0; }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 676 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 677 "cfg.y"
    { received_dns|= ((yyvsp[(3) - (3)].intval))?DO_REV_DNS:0; }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 678 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 679 "cfg.y"
    { dns_try_ipv6=(yyvsp[(3) - (3)].intval); }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 680 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 681 "cfg.y"
    { dns_try_naptr=(yyvsp[(3) - (3)].intval); }
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 682 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 683 "cfg.y"
    { dns_retr_time=(yyvsp[(3) - (3)].intval); }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 684 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 685 "cfg.y"
    { dns_retr_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 686 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 687 "cfg.y"
    { dns_servers_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 688 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 689 "cfg.y"
    { dns_search_list=(yyvsp[(3) - (3)].intval); }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 690 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 691 "cfg.y"
    { max_while_loops=(yyvsp[(3) - (3)].intval); }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 692 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 693 "cfg.y"
    { maxbuffer=(yyvsp[(3) - (3)].intval); }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 694 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 695 "cfg.y"
    { children_no=(yyvsp[(3) - (3)].intval); }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 696 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 697 "cfg.y"
    { check_via=(yyvsp[(3) - (3)].intval); }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 698 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 699 "cfg.y"
    {
			#ifdef HP_MALLOC
			shm_hash_split_percentage=(yyvsp[(3) - (3)].intval);
			#else
			yyerror("Cannot set parameter; Please recompile with support "
				"for HP_MALLOC");
			#endif
			}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 707 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 708 "cfg.y"
    {
			#ifdef HP_MALLOC
			shm_secondary_hash_size=(yyvsp[(3) - (3)].intval);
			#else
			yyerror("Cannot set parameter; Please recompile with support"
				" for HP_MALLOC");
			#endif
			}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 716 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 717 "cfg.y"
    {
			#ifdef HP_MALLOC
			mem_warming_enabled = (yyvsp[(3) - (3)].intval);
			#else
			yyerror("Cannot set parameter; Please recompile with support"
				" for HP_MALLOC");
			#endif
			}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 725 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 726 "cfg.y"
    {
			#ifdef HP_MALLOC
			mem_warming_pattern_file = (yyvsp[(3) - (3)].strval);
			#else
			yyerror("Cannot set parameter; Please recompile with "
				"support for HP_MALLOC");
			#endif
			}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 734 "cfg.y"
    { yyerror("string expected"); }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 735 "cfg.y"
    {
			#ifdef HP_MALLOC
			mem_warming_percentage = (yyvsp[(3) - (3)].intval);
			#else
			yyerror("Cannot set parameter; Please recompile with "
				"support for HP_MALLOC");
			#endif
			}
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 743 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 744 "cfg.y"
    { memlog=(yyvsp[(3) - (3)].intval); memdump=(yyvsp[(3) - (3)].intval); }
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 745 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 746 "cfg.y"
    { memdump=(yyvsp[(3) - (3)].intval); }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 747 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 748 "cfg.y"
    { execmsgthreshold=(yyvsp[(3) - (3)].intval); }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 749 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 750 "cfg.y"
    { execdnsthreshold=(yyvsp[(3) - (3)].intval); }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 751 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 752 "cfg.y"
    { tcpthreshold=(yyvsp[(3) - (3)].intval); }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 753 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 754 "cfg.y"
    {
			#ifdef STATISTICS
			if ((yyvsp[(3) - (3)].intval) < 0 || (yyvsp[(3) - (3)].intval) > 100)
				yyerror("SHM threshold has to be a percentage between"
					" 0 and 100");
			event_shm_threshold=(yyvsp[(3) - (3)].intval);
			#else
			yyerror("statistics support not compiled in");
			#endif /* STATISTICS */
			}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 764 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 765 "cfg.y"
    {
			#ifdef STATISTICS
			if ((yyvsp[(3) - (3)].intval) < 0 || (yyvsp[(3) - (3)].intval) > 100)
				yyerror("PKG threshold has to be a percentage between "
					"0 and 100");
			event_pkg_threshold=(yyvsp[(3) - (3)].intval);
			#else
			yyerror("statistics support not compiled in");
			#endif
			}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 775 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 776 "cfg.y"
    { query_buffer_size=(yyvsp[(3) - (3)].intval); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 777 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 778 "cfg.y"
    { query_flush_time=(yyvsp[(3) - (3)].intval); }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 779 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 780 "cfg.y"
    { sip_warning=(yyvsp[(3) - (3)].intval); }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 781 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 782 "cfg.y"
    { chroot_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 783 "cfg.y"
    { chroot_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 784 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 785 "cfg.y"
    { working_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 786 "cfg.y"
    { working_dir=(yyvsp[(3) - (3)].strval); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 787 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 788 "cfg.y"
    { mhomed=(yyvsp[(3) - (3)].intval); }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 789 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 790 "cfg.y"
    {
									io_poll_method=get_poll_type((yyvsp[(3) - (3)].strval));
									if (io_poll_method==POLL_NONE){
										LM_CRIT("bad poll method name:"
											" %s\n, try one of %s.\n",
											(yyvsp[(3) - (3)].strval), poll_support);
										yyerror("bad poll_method "
											"value");
									}
								}
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 800 "cfg.y"
    {
									io_poll_method=get_poll_type((yyvsp[(3) - (3)].strval));
									if (io_poll_method==POLL_NONE){
										LM_CRIT("bad poll method name:"
											" %s\n, try one of %s.\n",
											(yyvsp[(3) - (3)].strval), poll_support);
										yyerror("bad poll_method "
											"value");
									}
									}
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 810 "cfg.y"
    { yyerror("poll method name expected"); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 811 "cfg.y"
    {
				tcp_accept_aliases=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 814 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 815 "cfg.y"
    {
				tcp_children_no=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 818 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 819 "cfg.y"
    {
				tcp_connect_timeout=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 822 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 823 "cfg.y"
    {
				tcp_con_lifetime=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 826 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 827 "cfg.y"
    {
				tcp_listen_backlog=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 830 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 831 "cfg.y"
    {
				tcp_max_connections=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 834 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 835 "cfg.y"
    {
				tmp = NULL;
				fix_flag_name(tmp, (yyvsp[(3) - (3)].intval));
				tcp_no_new_conn_bflag =
					get_flag_id_by_name(FLAG_TYPE_BRANCH, tmp);
				if (!flag_in_range( (flag_t)tcp_no_new_conn_bflag ) )
					yyerror("invalid TCP no_new_conn Branch Flag");
				flag_idx2mask( &tcp_no_new_conn_bflag );
		}
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 844 "cfg.y"
    {
				tcp_no_new_conn_bflag =
					get_flag_id_by_name(FLAG_TYPE_BRANCH, (yyvsp[(3) - (3)].strval));
				if (!flag_in_range( (flag_t)tcp_no_new_conn_bflag ) )
					yyerror("invalid TCP no_new_conn Branch Flag");
				flag_idx2mask( &tcp_no_new_conn_bflag );
		}
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 851 "cfg.y"
    { yyerror("number value expected"); }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 852 "cfg.y"
    {
				tcp_keepalive=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 855 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 856 "cfg.y"
    {
				tcp_max_msg_time=(yyvsp[(3) - (3)].intval);
		}
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 859 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 860 "cfg.y"
    {
			#ifndef HAVE_TCP_KEEPCNT
				warn("cannot be enabled TCP_KEEPCOUNT (no OS support)");
			#else
				tcp_keepcount=(yyvsp[(3) - (3)].intval);
			#endif
		}
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 867 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 868 "cfg.y"
    {
			#ifndef HAVE_TCP_KEEPIDLE
				warn("cannot be enabled TCP_KEEPIDLE (no OS support)");
			#else
				tcp_keepidle=(yyvsp[(3) - (3)].intval);
			#endif
		}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 875 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 876 "cfg.y"
    {
			#ifndef HAVE_TCP_KEEPINTVL
				warn("cannot be enabled TCP_KEEPINTERVAL (no OS support)");
			#else
				tcp_keepinterval=(yyvsp[(3) - (3)].intval);
			 #endif
		}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 883 "cfg.y"
    { yyerror("int value expected"); }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 884 "cfg.y"
    { server_signature=(yyvsp[(3) - (3)].intval); }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 885 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 886 "cfg.y"
    { server_header.s=(yyvsp[(3) - (3)].strval);
									server_header.len=strlen((yyvsp[(3) - (3)].strval));
									}
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 889 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 890 "cfg.y"
    { user_agent_header.s=(yyvsp[(3) - (3)].strval);
									user_agent_header.len=strlen((yyvsp[(3) - (3)].strval));
									}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 893 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 894 "cfg.y"
    { xlog_buf_size = (yyvsp[(3) - (3)].intval); }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 895 "cfg.y"
    { xlog_force_color = (yyvsp[(3) - (3)].intval); }
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 896 "cfg.y"
    { xlog_default_level = (yyvsp[(3) - (3)].intval); }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 897 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 898 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 899 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 900 "cfg.y"
    {
							if (add_listener((yyvsp[(3) - (3)].sockid), 0)!=0){
								LM_CRIT("cfg. parser: failed"
										" to add listen address\n");
								break;
							}
						}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 907 "cfg.y"
    { yyerror("ip address or hostname "
						"expected (use quotes if the hostname includes"
						" config keywords)"); }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 910 "cfg.y"
    {
							/* convert STIRNG ($3) to an ID */
							/* update the memstats type for each module */
							#ifndef SHM_EXTRA_STATS
								LM_CRIT("SHM_EXTRA_STATS not defined");
								YYABORT;
							#else

							#ifdef SHM_SHOW_DEFAULT_GROUP
							if(strcmp((yyvsp[(3) - (5)].strval), "default") == 0){
								LM_CRIT("default group  name is not allowed");
								YYABORT;
							}
							#endif

							for(tmp_mod = mod_names; tmp_mod; tmp_mod=tmp_mod->next){
								if(strcmp((yyvsp[(3) - (5)].strval), tmp_mod->s) == 0){
									LM_CRIT("The same mem-group name is used twice: [%s] [%s]\n", (yyvsp[(3) - (5)].strval), tmp_mod->s);
									YYABORT;
								}
							}

							tmp_mod = pkg_malloc(sizeof(struct multi_str));
							if(!tmp_mod){
								LM_CRIT("out of pkg memory");
								YYABORT;
							}

							tmp_mod->s = (yyvsp[(3) - (5)].strval);
							tmp_mod->next = mod_names;
							mod_names = tmp_mod;
							for (tmp_mod = (yyvsp[(5) - (5)].multistr); tmp_mod; tmp_mod = tmp_mod->next){
								if(set_mem_idx(tmp_mod->s, mem_free_idx)){
									YYABORT;
								}
							}
							mem_free_idx++;
							#endif
						}
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 949 "cfg.y"
    { yyerror("invalid or no module specified"); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 950 "cfg.y"
    {
							for(lst_tmp=(yyvsp[(3) - (3)].sockid); lst_tmp; lst_tmp=lst_tmp->next)
								add_alias(lst_tmp->name, strlen(lst_tmp->name),
											lst_tmp->port, lst_tmp->proto);
							  }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 955 "cfg.y"
    { yyerror("hostname expected (use quotes"
							" if the hostname includes config keywords)"); }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 957 "cfg.y"
    { auto_aliases=(yyvsp[(3) - (3)].intval); }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 958 "cfg.y"
    { yyerror("number  expected"); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 959 "cfg.y"
    {
								if ((yyvsp[(3) - (3)].strval)) {
									default_global_address.s=(yyvsp[(3) - (3)].strval);
									default_global_address.len=strlen((yyvsp[(3) - (3)].strval));
								}
								}
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 965 "cfg.y"
    {yyerror("ip address or hostname "
												"expected"); }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 967 "cfg.y"
    {
								tmp = int2str((yyvsp[(3) - (3)].intval), &i_tmp);
								if (i_tmp > default_global_port.len)
									default_global_port.s =
									pkg_realloc(default_global_port.s, i_tmp);
								if (!default_global_port.s) {
									LM_CRIT("cfg. parser: out of memory.\n");
									YYABORT;
								} else {
									default_global_port.len = i_tmp;
									memcpy(default_global_port.s, tmp,
											default_global_port.len);
								}
								}
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 981 "cfg.y"
    {yyerror("ip address or hostname "
												"expected"); }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 983 "cfg.y"
    {
										disable_core_dump=(yyvsp[(3) - (3)].intval);
									}
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 986 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 987 "cfg.y"
    {
										open_files_limit=(yyvsp[(3) - (3)].intval);
									}
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 990 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 991 "cfg.y"
    {
								#ifdef USE_MCAST
										mcast_loopback=(yyvsp[(3) - (3)].intval);
								#else
									warn("no multicast support compiled in");
								#endif
		  }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 998 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 999 "cfg.y"
    {
								#ifdef USE_MCAST
										mcast_ttl=(yyvsp[(3) - (3)].intval);
								#else
									warn("no multicast support compiled in");
								#endif
		  }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 1006 "cfg.y"
    { yyerror("number expected as tos"); }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 1007 "cfg.y"
    { tos = (yyvsp[(3) - (3)].intval);
							if (tos<=0)
								yyerror("invalid tos value");
		 }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 1011 "cfg.y"
    { if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_LOWDELAY")) {
								tos=IPTOS_LOWDELAY;
							} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_THROUGHPUT")) {
								tos=IPTOS_THROUGHPUT;
							} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_RELIABILITY")) {
								tos=IPTOS_RELIABILITY;
#if defined(IPTOS_MINCOST)
							} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_MINCOST")) {
								tos=IPTOS_MINCOST;
#endif
#if defined(IPTOS_LOWCOST)
							} else if (strcasecmp((yyvsp[(3) - (3)].strval),"IPTOS_LOWCOST")) {
								tos=IPTOS_LOWCOST;
#endif
							} else {
								yyerror("invalid tos value - allowed: "
									"IPTOS_LOWDELAY,IPTOS_THROUGHPUT,"
									"IPTOS_RELIABILITY"
#if defined(IPTOS_LOWCOST)
									",IPTOS_LOWCOST"
#endif
#if defined(IPTOS_MINCOST)
									",IPTOS_MINCOST"
#endif
									"\n");
							}
		 }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 1038 "cfg.y"
    { yyerror("number expected"); }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 1039 "cfg.y"
    { mpath=(yyvsp[(3) - (3)].strval); strcpy(mpath_buf, (yyvsp[(3) - (3)].strval));
								mpath_len=strlen((yyvsp[(3) - (3)].strval));
								if(mpath_buf[mpath_len-1]!='/') {
									mpath_buf[mpath_len]='/';
									mpath_len++;
									mpath_buf[mpath_len]='\0';
								}
							}
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 1047 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 1048 "cfg.y"
    {
										disable_dns_failover=(yyvsp[(3) - (3)].intval);
									}
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 1051 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 1052 "cfg.y"
    {
										disable_dns_blacklist=(yyvsp[(3) - (3)].intval);
									}
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 1055 "cfg.y"
    { yyerror("boolean value expected"); }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 1056 "cfg.y"
    {
				s_tmp.s = (yyvsp[(3) - (7)].strval);
				s_tmp.len = strlen((yyvsp[(3) - (7)].strval));
				if (create_bl_head( BL_CORE_ID, BL_READONLY_LIST,
				    bl_head, bl_tail, &s_tmp)==0) {
					yyerror("failed to create blacklist\n");
					YYABORT;
				}
				bl_head = bl_tail = NULL;
				}
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 1066 "cfg.y"
    {
				sl_fwd_disabled=(yyvsp[(3) - (3)].intval);
				}
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 1069 "cfg.y"
    { db_version_table=(yyvsp[(3) - (3)].strval); }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 1070 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 1071 "cfg.y"
    { db_default_url=(yyvsp[(3) - (3)].strval); }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 1072 "cfg.y"
    { yyerror("string value expected"); }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 1073 "cfg.y"
    { db_max_async_connections=(yyvsp[(3) - (3)].intval); }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 1074 "cfg.y"
    {
				yyerror("integer value expected");
				}
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 1077 "cfg.y"
    { disable_503_translation=(yyvsp[(3) - (3)].intval); }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 1078 "cfg.y"
    {
				yyerror("integer value expected");
				}
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 1081 "cfg.y"
    { yyerror("unknown config variable"); }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 1084 "cfg.y"
    {
			if (load_module((yyvsp[(2) - (2)].strval)) < 0)
				yyerrorf("failed to load module %s\n", (yyvsp[(2) - (2)].strval));
		}
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 1088 "cfg.y"
    { yyerror("string expected");  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 1089 "cfg.y"
    {
				if (set_mod_param_regex((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), STR_PARAM, (yyvsp[(7) - (8)].strval)) != 0) {
					yyerrorf("Parameter <%s> not found in module <%s> - "
						"can't set", (yyvsp[(5) - (8)].strval), (yyvsp[(3) - (8)].strval));
				}
			}
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 1095 "cfg.y"
    {
				if (set_mod_param_regex((yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), INT_PARAM, (void*)(yyvsp[(7) - (8)].intval)) != 0) {
					yyerrorf("Parameter <%s> not found in module <%s> - "
						"can't set", (yyvsp[(5) - (8)].strval), (yyvsp[(3) - (8)].strval));
				}
			}
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 1101 "cfg.y"
    { yyerror("Invalid arguments"); }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 1105 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 1106 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 1109 "cfg.y"
    {
											(yyval.ipaddr)=pkg_malloc(
													sizeof(struct ip_addr));
											if ((yyval.ipaddr)==0){
												LM_CRIT("cfg. parser: "
												        "out of memory\n");
												YYABORT;
											}else{
												memset((yyval.ipaddr), 0,
													sizeof(struct ip_addr));
												(yyval.ipaddr)->af=AF_INET;
												(yyval.ipaddr)->len=4;
												if (((yyvsp[(1) - (7)].intval)>255) || ((yyvsp[(1) - (7)].intval)<0) ||
													((yyvsp[(3) - (7)].intval)>255) || ((yyvsp[(3) - (7)].intval)<0) ||
													((yyvsp[(5) - (7)].intval)>255) || ((yyvsp[(5) - (7)].intval)<0) ||
													((yyvsp[(7) - (7)].intval)>255) || ((yyvsp[(7) - (7)].intval)<0)){
													yyerror("invalid ipv4"
															"address");
													(yyval.ipaddr)->u.addr32[0]=0;
													/* $$=0; */
												}else{
													(yyval.ipaddr)->u.addr[0]=(yyvsp[(1) - (7)].intval);
													(yyval.ipaddr)->u.addr[1]=(yyvsp[(3) - (7)].intval);
													(yyval.ipaddr)->u.addr[2]=(yyvsp[(5) - (7)].intval);
													(yyval.ipaddr)->u.addr[3]=(yyvsp[(7) - (7)].intval);
													/*
													$$=htonl( ($1<<24)|
													($3<<16)| ($5<<8)|$7 );
													*/
												}
											}
												}
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 1143 "cfg.y"
    {
					(yyval.ipaddr)=pkg_malloc(sizeof(struct ip_addr));
					if ((yyval.ipaddr)==0){
						LM_CRIT("ERROR: cfg. parser: out of memory.\n");
						YYABORT;
					}else{
						memset((yyval.ipaddr), 0, sizeof(struct ip_addr));
						(yyval.ipaddr)->af=AF_INET6;
						(yyval.ipaddr)->len=16;
						if (inet_pton(AF_INET6, (yyvsp[(1) - (1)].strval), (yyval.ipaddr)->u.addr)<=0){
							yyerror("bad ipv6 address");
						}
					}
				}
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 1159 "cfg.y"
    { (yyval.ipaddr)=(yyvsp[(1) - (1)].ipaddr); }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 1160 "cfg.y"
    {(yyval.ipaddr)=(yyvsp[(2) - (3)].ipaddr); }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 1163 "cfg.y"
    {
				(yyval.strval) = pkg_malloc( strlen((yyvsp[(1) - (2)].strval)) + strlen((yyvsp[(2) - (2)].strval)) + 1);
				if ((yyval.strval)==0){
					yyerror("cfg. parser: out of memory");
					YYABORT;
				} else {
					strcpy((yyval.strval),(yyvsp[(1) - (2)].strval)); strcat((yyval.strval),(yyvsp[(2) - (2)].strval));
					pkg_free((yyvsp[(1) - (2)].strval)); pkg_free((yyvsp[(2) - (2)].strval));
				}
			}
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 1173 "cfg.y"
    {
				(yyval.strval) = pkg_malloc( strlen((yyvsp[(1) - (2)].strval)) + strlen((yyvsp[(2) - (2)].strval)) + 1);
				if ((yyval.strval)==0){
					LM_CRIT("ERROR: cfg. parser: out of memory.\n");
					YYABORT;
				} else {
					strcpy((yyval.strval),(yyvsp[(1) - (2)].strval)); strcat((yyval.strval),(yyvsp[(2) - (2)].strval));
					pkg_free((yyvsp[(1) - (2)].strval)); pkg_free((yyvsp[(2) - (2)].strval));
				}
			}
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 1184 "cfg.y"
    {
				(yyval.strval) = (yyvsp[(1) - (1)].strval);
				}
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 1187 "cfg.y"
    {
				tmp=int2str((yyvsp[(1) - (1)].intval), &i_tmp);
				if (((yyval.strval)=pkg_malloc(i_tmp+1))==0) {
					yyerror("cfg. parser: out of memory.\n");
					YYABORT;
				}
				memcpy( (yyval.strval), tmp, i_tmp);
				(yyval.strval)[i_tmp] = 0;
				}
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 1196 "cfg.y"
    {
				(yyval.strval) = (yyvsp[(1) - (1)].strval);
		}
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 1201 "cfg.y"
    {
						if (rlist[DEFAULT_RT].a!=0) {
							yyerror("overwriting default "
								"request routing table");
							YYABORT;
						}
						push((yyvsp[(3) - (4)].action), &rlist[DEFAULT_RT].a);
					}
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 1209 "cfg.y"
    {
						if ( strtol((yyvsp[(3) - (7)].strval),&tmp,10)==0 && *tmp==0) {
							/* route[0] detected */
							if (rlist[DEFAULT_RT].a!=0) {
								yyerror("overwriting(2) default "
									"request routing table");
								YYABORT;
							}
							push((yyvsp[(6) - (7)].action), &rlist[DEFAULT_RT].a);
						} else {
							i_tmp = get_script_route_idx((yyvsp[(3) - (7)].strval),rlist,RT_NO,1);
							if (i_tmp==-1) YYABORT;
							push((yyvsp[(6) - (7)].action), &rlist[i_tmp].a);
						}
					}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 1224 "cfg.y"
    { yyerror("invalid  route  statement"); }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 1227 "cfg.y"
    {
						i_tmp = get_script_route_idx((yyvsp[(3) - (7)].strval),failure_rlist,
								FAILURE_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[(6) - (7)].action), &failure_rlist[i_tmp].a);
					}
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 1233 "cfg.y"
    { yyerror("invalid failure_route statement"); }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 1236 "cfg.y"
    {
						if (onreply_rlist[DEFAULT_RT].a!=0) {
							yyerror("overwriting default "
								"onreply routing table");
							YYABORT;
						}
						push((yyvsp[(3) - (4)].action), &onreply_rlist[DEFAULT_RT].a);
					}
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 1244 "cfg.y"
    {
						i_tmp = get_script_route_idx((yyvsp[(3) - (7)].strval),onreply_rlist,
								ONREPLY_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[(6) - (7)].action), &onreply_rlist[i_tmp].a);
					}
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 1250 "cfg.y"
    { yyerror("invalid onreply_route statement"); }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 1253 "cfg.y"
    {
						i_tmp = get_script_route_idx((yyvsp[(3) - (7)].strval),branch_rlist,
								BRANCH_RT_NO,1);
						if (i_tmp==-1) YYABORT;
						push((yyvsp[(6) - (7)].action), &branch_rlist[i_tmp].a);
					}
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 1259 "cfg.y"
    { yyerror("invalid branch_route statement"); }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 1262 "cfg.y"
    {
						if (error_rlist.a!=0) {
							yyerror("overwriting default "
								"error routing table");
							YYABORT;
						}
						push((yyvsp[(3) - (4)].action), &error_rlist.a);
					}
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 1270 "cfg.y"
    { yyerror("invalid error_route statement"); }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 1273 "cfg.y"
    {
						if (local_rlist.a!=0) {
							yyerror("re-definition of local "
								"route detected");
							YYABORT;
						}
						push((yyvsp[(3) - (4)].action), &local_rlist.a);
					}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 1281 "cfg.y"
    { yyerror("invalid local_route statement"); }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 1284 "cfg.y"
    {
						if (startup_rlist.a!=0) {
							yyerror("re-definition of startup "
								"route detected");
							YYABORT;
						}
						push((yyvsp[(3) - (4)].action), &startup_rlist.a);
					}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 1292 "cfg.y"
    { yyerror("invalid startup_route statement"); }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 1295 "cfg.y"
    {
						i_tmp = 0;
						while (timer_rlist[i_tmp].a!=0 && i_tmp < TIMER_RT_NO) {
							i_tmp++;
						}
						if(i_tmp == TIMER_RT_NO) {
							yyerror("Too many timer routes defined\n");
							YYABORT;
						}
						timer_rlist[i_tmp].interval = (yyvsp[(5) - (9)].intval);
						push((yyvsp[(8) - (9)].action), &timer_rlist[i_tmp].a);
					}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 1307 "cfg.y"
    { yyerror("invalid timer_route statement"); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 1311 "cfg.y"
    {
						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[(3) - (7)].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[(3) - (7)].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[(3) - (7)].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_SYNC;

						push((yyvsp[(6) - (7)].action), &event_rlist[i_tmp].a);
					}
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 1331 "cfg.y"
    {

						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[(3) - (9)].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[(3) - (9)].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[(3) - (9)].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_SYNC;

						push((yyvsp[(8) - (9)].action), &event_rlist[i_tmp].a);
					}
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 1352 "cfg.y"
    {

						i_tmp = 1;
						while (event_rlist[i_tmp].a !=0 && i_tmp < EVENT_RT_NO) {
							if (strcmp((yyvsp[(3) - (9)].strval), event_rlist[i_tmp].name) == 0) {
								LM_ERR("Script route <%s> redefined\n", (yyvsp[(3) - (9)].strval));
								YYABORT;
							}
							i_tmp++;
						}

						if (i_tmp == EVENT_RT_NO) {
							yyerror("Too many event routes defined\n");
							YYABORT;
						}

						event_rlist[i_tmp].name = (yyvsp[(3) - (9)].strval);
						event_rlist[i_tmp].mode = EV_ROUTE_ASYNC;

						push((yyvsp[(8) - (9)].action), &event_rlist[i_tmp].a);
					}
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 1373 "cfg.y"
    { yyerror("invalid event_route statement"); }
    break;

  case 257:
/* Line 1792 of yacc.c  */
#line 1377 "cfg.y"
    { (yyval.expr)=mk_exp(AND_OP, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr)); }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 1378 "cfg.y"
    { (yyval.expr)=mk_exp(OR_OP, (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 1379 "cfg.y"
    { (yyval.expr)=mk_exp(NOT_OP, (yyvsp[(2) - (2)].expr), 0);  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 1380 "cfg.y"
    { (yyval.expr)=mk_exp(EVAL_OP, (yyvsp[(2) - (3)].expr), 0); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 1381 "cfg.y"
    { (yyval.expr)=(yyvsp[(2) - (3)].expr); }
    break;

  case 262:
/* Line 1792 of yacc.c  */
#line 1382 "cfg.y"
    { (yyval.expr)=(yyvsp[(1) - (1)].expr); }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 1385 "cfg.y"
    {(yyval.intval)=EQUAL_OP; }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 1386 "cfg.y"
    {(yyval.intval)=DIFF_OP; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 1389 "cfg.y"
    {(yyval.intval)=GT_OP; }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 1390 "cfg.y"
    {(yyval.intval)=LT_OP; }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 1391 "cfg.y"
    {(yyval.intval)=GTE_OP; }
    break;

  case 268:
/* Line 1792 of yacc.c  */
#line 1392 "cfg.y"
    {(yyval.intval)=LTE_OP; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 1394 "cfg.y"
    {(yyval.intval)=MATCH_OP; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 1395 "cfg.y"
    {(yyval.intval)=NOTMATCH_OP; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 1398 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 1399 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 1402 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 1403 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 1404 "cfg.y"
    {(yyval.intval)=(yyvsp[(1) - (1)].intval); }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 1407 "cfg.y"
    {(yyval.intval)=URI_O;}
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 1408 "cfg.y"
    {(yyval.intval)=FROM_URI_O;}
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 1409 "cfg.y"
    {(yyval.intval)=TO_URI_O;}
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 1412 "cfg.y"
    {
				spec = (pv_spec_t*)pkg_malloc(sizeof(pv_spec_t));
				if (spec==NULL){
					yyerror("no more pkg memory\n");
					YYABORT;
				}
				memset(spec, 0, sizeof(pv_spec_t));
				tstr.s = (yyvsp[(1) - (1)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_spec(&tstr, spec)==NULL)
				{
					yyerror("unknown script variable");
				}

				(yyval.specval) = spec;
			}
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 1428 "cfg.y"
    {
			(yyval.specval)=0; yyerror("invalid script variable name");
		}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 1433 "cfg.y"
    {(yyval.expr)=(yyvsp[(1) - (1)].expr); }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 1434 "cfg.y"
    {(yyval.expr)=mk_elem( NO_OP, ACTION_O, 0, ACTIONS_ST, (yyvsp[(1) - (1)].action) ); }
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 1435 "cfg.y"
    {(yyval.expr)=mk_elem( NO_OP, NUMBER_O, 0, NUMBER_ST,
											(void*)(yyvsp[(1) - (1)].intval) ); }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 1437 "cfg.y"
    {
				(yyval.expr)=mk_elem(NO_OP, SCRIPTVAR_O,0,SCRIPTVAR_ST,(void*)(yyvsp[(1) - (1)].specval));
			}
    break;

  case 285:
/* Line 1792 of yacc.c  */
#line 1440 "cfg.y"
    {(yyval.expr) = mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, STR_ST, (yyvsp[(3) - (3)].strval));
				 			}
    break;

  case 286:
/* Line 1792 of yacc.c  */
#line 1442 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, NET_ST, (yyvsp[(3) - (3)].ipnet));
								}
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 1444 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, STR_ST, (yyvsp[(3) - (3)].strval));
								}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 1446 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, NET_ST, (yyvsp[(3) - (3)].ipnet));
								}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 1448 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, STR_ST, (yyvsp[(3) - (3)].strval));
								}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 1452 "cfg.y"
    {(yyval.expr)= mk_elem((yyvsp[(2) - (3)].intval), METHOD_O, 0, STR_ST, (yyvsp[(3) - (3)].strval));
									}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 1454 "cfg.y"
    {(yyval.expr) = mk_elem((yyvsp[(2) - (3)].intval), METHOD_O, 0, STR_ST, (yyvsp[(3) - (3)].strval));
				 			}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 1456 "cfg.y"
    { (yyval.expr)=0; yyerror("string expected"); }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 1457 "cfg.y"
    { (yyval.expr)=0; yyerror("invalid operator,"
										"== , !=, or =~ expected");
						}
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 1460 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval),SCRIPTVAR_ST,(void*)(yyvsp[(3) - (3)].specval));
			}
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 1463 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval),STR_ST,(yyvsp[(3) - (3)].strval));
			}
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 1466 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval),STR_ST,(yyvsp[(3) - (3)].strval));
			}
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 1469 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval),NUMBER_ST,(void *)(yyvsp[(3) - (3)].intval));
			}
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 1472 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval), MYSELF_ST, 0);
			}
    break;

  case 299:
/* Line 1792 of yacc.c  */
#line 1475 "cfg.y"
    {
				(yyval.expr)=mk_elem( (yyvsp[(2) - (3)].intval), SCRIPTVAR_O,(void*)(yyvsp[(1) - (3)].specval), NULLV_ST, 0);
			}
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 1478 "cfg.y"
    {(yyval.expr) = mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, STR_ST, (yyvsp[(3) - (3)].strval));
				 				}
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 1480 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(1) - (3)].intval), 0, MYSELF_ST, 0);
								}
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 1482 "cfg.y"
    { (yyval.expr)=0; yyerror("string or MYSELF expected"); }
    break;

  case 303:
/* Line 1792 of yacc.c  */
#line 1483 "cfg.y"
    { (yyval.expr)=0; yyerror("invalid operator,"
									" == , != or =~ expected");
					}
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 1486 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCPORT_O, 0, NUMBER_ST,
												(void *) (yyvsp[(3) - (3)].intval) ); }
    break;

  case 305:
/* Line 1792 of yacc.c  */
#line 1488 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 1489 "cfg.y"
    { (yyval.expr)=0; yyerror("==, !=, <,>, >= or <=  expected"); }
    break;

  case 307:
/* Line 1792 of yacc.c  */
#line 1490 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTPORT_O, 0, NUMBER_ST,
												(void *) (yyvsp[(3) - (3)].intval) ); }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 1492 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 1493 "cfg.y"
    { (yyval.expr)=0; yyerror("==, !=, <,>, >= or <=  expected"); }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 1494 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), PROTO_O, 0, NUMBER_ST,
												(void *) (yyvsp[(3) - (3)].intval) ); }
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 1496 "cfg.y"
    { (yyval.expr)=0;
								yyerror("protocol expected (udp, tcp or tls)");
							}
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 1499 "cfg.y"
    { (yyval.expr)=0; yyerror("equal/!= operator expected"); }
    break;

  case 313:
/* Line 1792 of yacc.c  */
#line 1500 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), AF_O, 0, NUMBER_ST,
												(void *) (yyvsp[(3) - (3)].intval) ); }
    break;

  case 314:
/* Line 1792 of yacc.c  */
#line 1502 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 1503 "cfg.y"
    { (yyval.expr)=0; yyerror("equal/!= operator expected"); }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 1504 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), MSGLEN_O, 0, NUMBER_ST,
												(void *) (yyvsp[(3) - (3)].intval) ); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 1506 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), MSGLEN_O, 0, NUMBER_ST,
												(void *) BUF_SIZE); }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 1508 "cfg.y"
    { (yyval.expr)=0; yyerror("number expected"); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 1509 "cfg.y"
    { (yyval.expr)=0; yyerror("equal/!= operator expected"); }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 1510 "cfg.y"
    {	s_tmp.s=(yyvsp[(3) - (3)].strval);
									s_tmp.len=strlen((yyvsp[(3) - (3)].strval));
									ip_tmp=str2ip(&s_tmp);
									if (ip_tmp==0)
										ip_tmp=str2ip6(&s_tmp);
									if (ip_tmp){
										(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, NET_ST,
												mk_net_bitlen(ip_tmp,
														ip_tmp->len*8) );
									}else{
										(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, STR_ST,
												(yyvsp[(3) - (3)].strval));
									}
								}
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 1524 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, MYSELF_ST, 0);
								}
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 1526 "cfg.y"
    { (yyval.expr)=0; yyerror( "ip address or hostname"
						 "expected" ); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 1528 "cfg.y"
    { (yyval.expr)=0;
						 yyerror("invalid operator, ==, != or =~ expected");}
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 1530 "cfg.y"
    {	s_tmp.s=(yyvsp[(3) - (3)].strval);
									s_tmp.len=strlen((yyvsp[(3) - (3)].strval));
									ip_tmp=str2ip(&s_tmp);
									if (ip_tmp==0)
										ip_tmp=str2ip6(&s_tmp);
									if (ip_tmp){
										(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, NET_ST,
												mk_net_bitlen(ip_tmp,
														ip_tmp->len*8) );
									}else{
										(yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, STR_ST,
												(yyvsp[(3) - (3)].strval));
									}
								}
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 1544 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, MYSELF_ST, 0);
								}
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 1546 "cfg.y"
    { (yyval.expr)=0; yyerror( "ip address or hostname"
						 			"expected" ); }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 1548 "cfg.y"
    { (yyval.expr)=0;
						yyerror("invalid operator, ==, != or =~ expected");}
    break;

  case 328:
/* Line 1792 of yacc.c  */
#line 1550 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), (yyvsp[(3) - (3)].intval), 0, MYSELF_ST, 0);
								}
    break;

  case 329:
/* Line 1792 of yacc.c  */
#line 1552 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), SRCIP_O, 0, MYSELF_ST, 0);
								}
    break;

  case 330:
/* Line 1792 of yacc.c  */
#line 1554 "cfg.y"
    { (yyval.expr)=mk_elem((yyvsp[(2) - (3)].intval), DSTIP_O, 0, MYSELF_ST, 0);
								}
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 1556 "cfg.y"
    {	(yyval.expr)=0;
									yyerror(" URI, SRCIP or DSTIP expected"); }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 1558 "cfg.y"
    { (yyval.expr)=0;
							yyerror ("invalid operator, == or != expected");
						}
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 1563 "cfg.y"
    { (yyval.ipnet)=mk_net((yyvsp[(1) - (3)].ipaddr), (yyvsp[(3) - (3)].ipaddr)); }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 1564 "cfg.y"
    {	if (((yyvsp[(3) - (3)].intval)<0) || ((yyvsp[(3) - (3)].intval)>(long)(yyvsp[(1) - (3)].ipaddr)->len*8)){
								yyerror("invalid bit number in netmask");
								(yyval.ipnet)=0;
							}else{
								(yyval.ipnet)=mk_net_bitlen((yyvsp[(1) - (3)].ipaddr), (yyvsp[(3) - (3)].intval));
							/*
								$$=mk_net($1,
										htonl( ($3)?~( (1<<(32-$3))-1 ):0 ) );
							*/
							}
						}
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 1575 "cfg.y"
    { (yyval.ipnet)=mk_net_bitlen((yyvsp[(1) - (1)].ipaddr), (yyvsp[(1) - (1)].ipaddr)->len*8); }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 1576 "cfg.y"
    { (yyval.ipnet)=0;
						 yyerror("netmask (eg:255.0.0.0 or 8) expected");
						}
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 1583 "cfg.y"
    {(yyval.strval)=".";}
    break;

  case 338:
/* Line 1792 of yacc.c  */
#line 1584 "cfg.y"
    {(yyval.strval)="-"; }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 1587 "cfg.y"
    { (yyval.strval)=(yyvsp[(1) - (1)].strval); }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 1588 "cfg.y"
    { (yyval.strval)=(char*)pkg_malloc(strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))+1);
						  if ((yyval.strval)==0){
							LM_CRIT("cfg. parser: memory allocation"
										" failure while parsing host\n");
							YYABORT;
						  }else{
							memcpy((yyval.strval), (yyvsp[(1) - (3)].strval), strlen((yyvsp[(1) - (3)].strval)));
							(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))]=*(yyvsp[(2) - (3)].strval);
							memcpy((yyval.strval)+strlen((yyvsp[(1) - (3)].strval))+1, (yyvsp[(3) - (3)].strval), strlen((yyvsp[(3) - (3)].strval)));
							(yyval.strval)[strlen((yyvsp[(1) - (3)].strval))+1+strlen((yyvsp[(3) - (3)].strval))]=0;
						  }
						  pkg_free((yyvsp[(1) - (3)].strval)); pkg_free((yyvsp[(3) - (3)].strval));
						}
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 1601 "cfg.y"
    { (yyval.strval)=0; pkg_free((yyvsp[(1) - (3)].strval)); yyerror("invalid hostname (use quotes if hostname has config keywords)"); }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 1605 "cfg.y"
    { (yyval.intval) = EQ_T; }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 1606 "cfg.y"
    { (yyval.intval) = COLONEQ_T; }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 1607 "cfg.y"
    { (yyval.intval) = PLUSEQ_T; }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 1608 "cfg.y"
    { (yyval.intval) = MINUSEQ_T;}
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 1609 "cfg.y"
    { (yyval.intval) = DIVEQ_T; }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 1610 "cfg.y"
    { (yyval.intval) = MULTEQ_T; }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 1611 "cfg.y"
    { (yyval.intval) = MODULOEQ_T; }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 1612 "cfg.y"
    { (yyval.intval) = BANDEQ_T; }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 1613 "cfg.y"
    { (yyval.intval) = BOREQ_T; }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 1614 "cfg.y"
    { (yyval.intval) = BXOREQ_T; }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 1618 "cfg.y"
    { (yyval.expr) = mk_elem(VALUE_OP, NUMBERV_O, (void*)(yyvsp[(1) - (1)].intval), 0, 0); }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 1619 "cfg.y"
    { (yyval.expr) = mk_elem(VALUE_OP, STRINGV_O, (yyvsp[(1) - (1)].strval), 0, 0); }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 1620 "cfg.y"
    { (yyval.expr) = mk_elem(VALUE_OP, STRINGV_O, (yyvsp[(1) - (1)].strval), 0, 0); }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 1621 "cfg.y"
    { (yyval.expr) = mk_elem(VALUE_OP, SCRIPTVAR_O, (yyvsp[(1) - (1)].specval), 0, 0); }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 1622 "cfg.y"
    { (yyval.expr)= (yyvsp[(1) - (1)].expr); }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 1623 "cfg.y"
    { (yyval.expr)=mk_elem( NO_OP, ACTION_O, 0, ACTIONS_ST, (yyvsp[(1) - (1)].action) ); }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 1624 "cfg.y"
    {
				(yyval.expr) = mk_elem(PLUS_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 1627 "cfg.y"
    {
				(yyval.expr) = mk_elem(MINUS_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 1630 "cfg.y"
    {
				(yyval.expr) = mk_elem(MULT_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 1633 "cfg.y"
    {
				(yyval.expr) = mk_elem(DIV_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 1636 "cfg.y"
    {
				(yyval.expr) = mk_elem(MODULO_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 1639 "cfg.y"
    {
				(yyval.expr) = mk_elem(BAND_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 1642 "cfg.y"
    {
				(yyval.expr) = mk_elem(BOR_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 1645 "cfg.y"
    {
				(yyval.expr) = mk_elem(BXOR_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 1648 "cfg.y"
    {
				(yyval.expr) = mk_elem(BLSHIFT_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 1651 "cfg.y"
    {
				(yyval.expr) = mk_elem(BRSHIFT_OP, EXPR_O, (yyvsp[(1) - (3)].expr), EXPR_ST, (yyvsp[(3) - (3)].expr));
			}
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 1654 "cfg.y"
    {
				(yyval.expr) = mk_elem(BNOT_OP, EXPR_O, (yyvsp[(2) - (2)].expr), 0, 0);
			}
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 1657 "cfg.y"
    { (yyval.expr) = (yyvsp[(2) - (3)].expr); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 1660 "cfg.y"
    {
			if(!pv_is_w((yyvsp[(1) - (3)].specval)))
				yyerror("invalid left operand in assignment");
			if((yyvsp[(1) - (3)].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), (yyvsp[(2) - (3)].intval),
					SCRIPTVAR_ST,
					EXPR_ST,
					(yyvsp[(1) - (3)].specval),
					(yyvsp[(3) - (3)].expr));
		}
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 1673 "cfg.y"
    {
			if(!pv_is_w((yyvsp[(1) - (3)].specval)))
				yyerror("invalid left operand in assignment");
			if((yyvsp[(1) - (3)].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), EQ_T,
					SCRIPTVAR_ST,
					NULLV_ST,
					(yyvsp[(1) - (3)].specval),
					0);
		}
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 1686 "cfg.y"
    {
			if(!pv_is_w((yyvsp[(1) - (3)].specval)))
				yyerror("invalid left operand in assignment");
			/* not all can get NULL with := */
			switch((yyvsp[(1) - (3)].specval)->type) {
				case PVT_AVP:
				break;
				default:
					yyerror("invalid left operand in NULL assignment");
			}
			if((yyvsp[(1) - (3)].specval)->trans!=0)
				yyerror("transformations not accepted in left side "
					"of assignment");

			mk_action2( (yyval.action), COLONEQ_T,
					SCRIPTVAR_ST,
					NULLV_ST,
					(yyvsp[(1) - (3)].specval),
					0);
		}
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 1708 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 1709 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 1710 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 1711 "cfg.y"
    { (yyval.action)=(yyvsp[(2) - (3)].action); }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 1712 "cfg.y"
    { (yyval.action)=0; }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 1715 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 1716 "cfg.y"
    { (yyval.action)=(yyvsp[(2) - (3)].action); }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 1717 "cfg.y"
    { (yyval.action)=0; }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 1720 "cfg.y"
    {(yyval.action)=append_action((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 1721 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 1722 "cfg.y"
    { (yyval.action)=0; yyerror("bad command!)"); }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 1725 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (2)].action);}
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 1726 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 1727 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 387:
/* Line 1792 of yacc.c  */
#line 1728 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 1729 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 1730 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (2)].action);}
    break;

  case 390:
/* Line 1792 of yacc.c  */
#line 1731 "cfg.y"
    {(yyval.action)=0;}
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 1732 "cfg.y"
    { (yyval.action)=0; yyerror("bad command: missing ';'?"); }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 1735 "cfg.y"
    { mk_action3( (yyval.action), IF_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 NOSUBTYPE,
													 (yyvsp[(2) - (3)].expr),
													 (yyvsp[(3) - (3)].action),
													 0);
									}
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 1743 "cfg.y"
    { mk_action3( (yyval.action), IF_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 ACTIONS_ST,
													 (yyvsp[(2) - (5)].expr),
													 (yyvsp[(3) - (5)].action),
													 (yyvsp[(5) - (5)].action));
									}
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 1753 "cfg.y"
    { mk_action2( (yyval.action), WHILE_T,
													 EXPR_ST,
													 ACTIONS_ST,
													 (yyvsp[(2) - (3)].expr),
													 (yyvsp[(3) - (3)].action));
									}
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 1761 "cfg.y"
    {
					if ((yyvsp[(3) - (7)].specval)->type != PVT_SCRIPTVAR &&
					    (yyvsp[(3) - (7)].specval)->type != PVT_AVP &&
						(yyvsp[(3) - (7)].specval)->type != PVT_JSON) {
						yyerror("\nfor-each statement: only \"var\", \"avp\" "
					            "and \"json\" iterators are supported!");
					}

					mk_action3( (yyval.action), FOR_EACH_T,
					            SCRIPTVAR_ST,
					            SCRIPTVAR_ST,
					            ACTIONS_ST,
					            (yyvsp[(3) - (7)].specval),
					            (yyvsp[(5) - (7)].specval),
					            (yyvsp[(7) - (7)].action));
					}
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 1779 "cfg.y"
    {
											mk_action2( (yyval.action), SWITCH_T,
														SCRIPTVAR_ST,
														ACTIONS_ST,
														(yyvsp[(3) - (7)].specval),
														(yyvsp[(6) - (7)].action));
									}
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 1788 "cfg.y"
    { (yyval.action)=append_action((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 1789 "cfg.y"
    { (yyval.action)=(yyvsp[(1) - (1)].action); }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 1791 "cfg.y"
    {(yyval.action)=append_action((yyvsp[(1) - (2)].action), (yyvsp[(2) - (2)].action)); }
    break;

  case 400:
/* Line 1792 of yacc.c  */
#line 1792 "cfg.y"
    {(yyval.action)=(yyvsp[(1) - (1)].action);}
    break;

  case 401:
/* Line 1792 of yacc.c  */
#line 1796 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (6)].intval),
													(yyvsp[(4) - (6)].action),
													(void*)1);
											}
    break;

  case 402:
/* Line 1792 of yacc.c  */
#line 1805 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (5)].intval),
													0,
													(void*)1);
											}
    break;

  case 403:
/* Line 1792 of yacc.c  */
#line 1813 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (4)].intval),
													(yyvsp[(4) - (4)].action),
													(void*)0);
									}
    break;

  case 404:
/* Line 1792 of yacc.c  */
#line 1821 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													NUMBER_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (3)].intval),
													0,
													(void*)0);
							}
    break;

  case 405:
/* Line 1792 of yacc.c  */
#line 1830 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (6)].strval),
													(yyvsp[(4) - (6)].action),
													(void*)1);
											}
    break;

  case 406:
/* Line 1792 of yacc.c  */
#line 1839 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (5)].strval),
													0,
													(void*)1);
											}
    break;

  case 407:
/* Line 1792 of yacc.c  */
#line 1847 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (4)].strval),
													(yyvsp[(4) - (4)].action),
													(void*)0);
									}
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 1855 "cfg.y"
    { mk_action3( (yyval.action), CASE_T,
													STR_ST,
													ACTIONS_ST,
													NUMBER_ST,
													(void*)(yyvsp[(2) - (3)].strval),
													0,
													(void*)0);
							}
    break;

  case 409:
/* Line 1792 of yacc.c  */
#line 1866 "cfg.y"
    { mk_action2( (yyval.action), DEFAULT_T,
													ACTIONS_ST,
													0,
													(yyvsp[(3) - (3)].action),
													0);
									}
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 1872 "cfg.y"
    { mk_action2( (yyval.action), DEFAULT_T,
													ACTIONS_ST,
													0,
													0,
													0);
									}
    break;

  case 411:
/* Line 1792 of yacc.c  */
#line 1880 "cfg.y"
    {
										elems[1].type = STRING_ST;
										elems[1].u.data = (yyvsp[(1) - (1)].strval);
										(yyval.intval)=1;
										}
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 1885 "cfg.y"
    {
										if ((yyvsp[(1) - (3)].intval)+1>=MAX_ACTION_ELEMS) {
											yyerror("too many arguments "
												"in function\n");
											(yyval.intval)=0;
										}
										elems[(yyvsp[(1) - (3)].intval)+1].type = STRING_ST;
										elems[(yyvsp[(1) - (3)].intval)+1].u.data = (yyvsp[(3) - (3)].strval);
										(yyval.intval)=(yyvsp[(1) - (3)].intval)+1;
										}
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 1895 "cfg.y"
    {
										elems[1].type = NULLV_ST;
										elems[1].u.data = NULL;
										elems[2].type = NULLV_ST;
										elems[2].u.data = NULL;
										(yyval.intval)=2;
										}
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 1902 "cfg.y"
    {
										elems[1].type = NULLV_ST;
										elems[1].u.data = NULL;
										elems[2].type = STRING_ST;
										elems[2].u.data = (yyvsp[(2) - (2)].strval);
										(yyval.intval)=2;
										}
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 1909 "cfg.y"
    {
										if ((yyvsp[(1) - (2)].intval)+1>=MAX_ACTION_ELEMS) {
											yyerror("too many arguments "
												"in function\n");
											(yyval.intval)=0;
										}
										elems[(yyvsp[(1) - (2)].intval)+1].type = NULLV_ST;
										elems[(yyvsp[(1) - (2)].intval)+1].u.data = NULL;
										(yyval.intval)=(yyvsp[(1) - (2)].intval)+1;
										}
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 1919 "cfg.y"
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 1924 "cfg.y"
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 1929 "cfg.y"
    {
										(yyval.intval)=0;
										yyerror("numbers used as parameters -"
											" they should be quoted");
										}
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 1936 "cfg.y"
    {
						route_elems[0].type = STRING_ST;
						route_elems[0].u.data = (yyvsp[(1) - (1)].strval);
						(yyval.intval)=1;
			}
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 1941 "cfg.y"
    {
						route_elems[0].type = NUMBER_ST;
						route_elems[0].u.data = (void*)(long)(yyvsp[(1) - (1)].intval);
						(yyval.intval)=1;
			}
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 1946 "cfg.y"
    {
						route_elems[0].type = NULLV_ST;
						route_elems[0].u.data = 0;
						(yyval.intval)=1;
			}
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 1951 "cfg.y"
    {
						route_elems[0].type = SCRIPTVAR_ST;
						route_elems[0].u.data = (yyvsp[(1) - (1)].specval);
						(yyval.intval)=1;
			}
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 1956 "cfg.y"
    {
						if ((yyvsp[(1) - (3)].intval)>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[(1) - (3)].intval)].type = STRING_ST;
							route_elems[(yyvsp[(1) - (3)].intval)].u.data = (yyvsp[(3) - (3)].strval);
							(yyval.intval)=(yyvsp[(1) - (3)].intval)+1;
						}
			}
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 1966 "cfg.y"
    {
						if ((yyvsp[(1) - (3)].intval)>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[(1) - (3)].intval)].type = NUMBER_ST;
							route_elems[(yyvsp[(1) - (3)].intval)].u.data = (void*)(long)(yyvsp[(3) - (3)].intval);
							(yyval.intval)=(yyvsp[(1) - (3)].intval)+1;
						}
			}
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 1976 "cfg.y"
    {
						if ((yyvsp[(1) - (3)].intval)+1>=MAX_ACTION_ELEMS) {
							yyerror("too many arguments in function\n");
							(yyval.intval)=-1;
						} else {
							route_elems[(yyvsp[(1) - (3)].intval)].type = SCRIPTVAR_ST;
							route_elems[(yyvsp[(1) - (3)].intval)].u.data = (yyvsp[(3) - (3)].specval);
							(yyval.intval)=(yyvsp[(1) - (3)].intval)+1;
						}
			}
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 1988 "cfg.y"
    {
				cmd_tmp=(void*)find_acmd_export_t((yyvsp[(1) - (3)].strval), 0);
				if (cmd_tmp==0){
					yyerrorf("unknown async command <%s>, "
						"missing loadmodule?", (yyvsp[(1) - (3)].strval));
					(yyval.action)=0;
				}else{
					elems[0].type = ACMD_ST;
					elems[0].u.data = cmd_tmp;
					mk_action_((yyval.action), AMODULE_T, 1, elems);
				}
			}
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 2000 "cfg.y"
    {
				cmd_tmp=(void*)find_acmd_export_t((yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].intval));
				if (cmd_tmp==0){
					yyerrorf("unknown async command <%s>, "
						"missing loadmodule?", (yyvsp[(1) - (4)].strval));
					(yyval.action)=0;
				}else{
					elems[0].type = ACMD_ST;
					elems[0].u.data = cmd_tmp;
					mk_action_((yyval.action), AMODULE_T, (yyvsp[(3) - (4)].intval)+1, elems);
				}
			}
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 2012 "cfg.y"
    {
				(yyval.action)=0;
				yyerrorf("bad arguments for command <%s>", (yyvsp[(1) - (4)].strval));
			}
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 2016 "cfg.y"
    {
				(yyval.action)=0;
				yyerrorf("bare word <%s> found, command calls need '()'", (yyvsp[(1) - (2)].strval));
			}
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 2022 "cfg.y"
    { mk_action2( (yyval.action), FORWARD_T,
											STRING_ST,
											0,
											(yyvsp[(3) - (4)].strval),
											0);
										}
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 2028 "cfg.y"
    {
										mk_action2( (yyval.action), FORWARD_T,
											0,
											0,
											0,
											0);
										}
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 2035 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 2036 "cfg.y"
    { (yyval.action)=0; yyerror("bad forward "
										"argument"); }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 2039 "cfg.y"
    { mk_action2( (yyval.action), SEND_T,
											STRING_ST,
											0,
											(yyvsp[(3) - (4)].strval),
											0);
										}
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 2045 "cfg.y"
    { mk_action2( (yyval.action), SEND_T,
											STRING_ST,
											STRING_ST,
											(yyvsp[(3) - (6)].strval),
											(yyvsp[(5) - (6)].strval));
										}
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 2051 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 2052 "cfg.y"
    { (yyval.action)=0; yyerror("bad send"
													"argument"); }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 2054 "cfg.y"
    {
			mk_action2( (yyval.action), ASSERT_T, EXPR_ST, STRING_ST, (yyvsp[(3) - (6)].expr), (yyvsp[(5) - (6)].strval));
			}
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 2057 "cfg.y"
    {mk_action2( (yyval.action), DROP_T,0, 0, 0, 0); }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 2058 "cfg.y"
    {mk_action2( (yyval.action), DROP_T,0, 0, 0, 0); }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 2059 "cfg.y"
    {mk_action2( (yyval.action), EXIT_T,0, 0, 0, 0); }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 2060 "cfg.y"
    {mk_action2( (yyval.action), EXIT_T,0, 0, 0, 0); }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 2061 "cfg.y"
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)(yyvsp[(3) - (4)].intval),
																0);
												}
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 2067 "cfg.y"
    {mk_action2( (yyval.action), RETURN_T,
																SCRIPTVAR_ST,
																0,
																(void*)(yyvsp[(3) - (4)].specval),
																0);
												}
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 2073 "cfg.y"
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)1,
																0);
												}
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 2079 "cfg.y"
    {mk_action2( (yyval.action), RETURN_T,
																NUMBER_ST,
																0,
																(void*)1,
																0);
												}
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 2085 "cfg.y"
    {mk_action2( (yyval.action), LOG_T, NUMBER_ST,
													STRING_ST,(void*)4,(yyvsp[(3) - (4)].strval));
									}
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 2088 "cfg.y"
    {mk_action2( (yyval.action), LOG_T,
																NUMBER_ST,
																STRING_ST,
																(void*)(yyvsp[(3) - (6)].intval),
																(yyvsp[(5) - (6)].strval));
												}
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 2094 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 2095 "cfg.y"
    { (yyval.action)=0; yyerror("bad log"
									"argument"); }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 2097 "cfg.y"
    {
			mk_action2((yyval.action), SETFLAG_T, NUMBER_ST, 0, (void *)(yyvsp[(3) - (4)].intval), 0 );
			}
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 2100 "cfg.y"
    {mk_action2((yyval.action), SETFLAG_T, STR_ST, 0,
													(void *)(yyvsp[(3) - (4)].strval), 0 ); }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 2102 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 2103 "cfg.y"
    {mk_action2( (yyval.action), RESETFLAG_T,
										NUMBER_ST, 0, (void *)(yyvsp[(3) - (4)].intval), 0 ); }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 2105 "cfg.y"
    {mk_action2( (yyval.action), RESETFLAG_T,
										STR_ST, 0, (void *)(yyvsp[(3) - (4)].strval), 0 ); }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 2107 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 2108 "cfg.y"
    {mk_action2( (yyval.action), ISFLAGSET_T,
										NUMBER_ST, 0, (void *)(yyvsp[(3) - (4)].intval), 0 ); }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 2110 "cfg.y"
    {mk_action2( (yyval.action), ISFLAGSET_T,
										STR_ST, 0, (void *)(yyvsp[(3) - (4)].strval), 0 ); }
    break;

  case 459:
/* Line 1792 of yacc.c  */
#line 2112 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 460:
/* Line 1792 of yacc.c  */
#line 2113 "cfg.y"
    {mk_action2( (yyval.action),
													SETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].intval) ); }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 2117 "cfg.y"
    {mk_action2( (yyval.action),
													SETBFLAG_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].strval) ); }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 2121 "cfg.y"
    {mk_action2( (yyval.action), SETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[(3) - (4)].intval) ); }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 2124 "cfg.y"
    {mk_action2( (yyval.action), SETBFLAG_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[(3) - (4)].strval) ); }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 2127 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 2128 "cfg.y"
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].intval) ); }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 2132 "cfg.y"
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].strval) ); }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 2136 "cfg.y"
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[(3) - (4)].intval) ); }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 2140 "cfg.y"
    {mk_action2( (yyval.action),
													RESETBFLAG_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[(3) - (4)].strval) ); }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 2144 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 2145 "cfg.y"
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, NUMBER_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].intval) ); }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 2149 "cfg.y"
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, STR_ST,
													(void *)(yyvsp[(3) - (6)].intval), (void *)(yyvsp[(5) - (6)].strval) ); }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 2153 "cfg.y"
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, NUMBER_ST,
													0, (void *)(yyvsp[(3) - (4)].intval) ); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 2157 "cfg.y"
    {mk_action2( (yyval.action),
													ISBFLAGSET_T,
													NUMBER_ST, STR_ST,
													0, (void *)(yyvsp[(3) - (4)].strval) ); }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 2161 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')'?"); }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 2162 "cfg.y"
    {mk_action2( (yyval.action), ERROR_T,
																STRING_ST,
																STRING_ST,
																(yyvsp[(3) - (6)].strval),
																(yyvsp[(5) - (6)].strval));
												  }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 2168 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 2169 "cfg.y"
    { (yyval.action)=0; yyerror("bad error"
														"argument"); }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 2171 "cfg.y"
    {
						i_tmp = get_script_route_idx( (yyvsp[(3) - (4)].strval), rlist, RT_NO, 0);
						if (i_tmp==-1) yyerror("too many script routes");
						mk_action2( (yyval.action), ROUTE_T, NUMBER_ST,
							0, (void*)(long)i_tmp, 0);
					}
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 2178 "cfg.y"
    {
						i_tmp = get_script_route_idx( (yyvsp[(3) - (6)].strval), rlist, RT_NO, 0);
						if (i_tmp==-1) yyerror("too many script routes");
						if ((yyvsp[(5) - (6)].intval) <= 0) yyerror("too many route parameters");

						/* duplicate the list */
						a_tmp = pkg_malloc((yyvsp[(5) - (6)].intval) * sizeof(action_elem_t));
						if (!a_tmp) {
							yyerror("no more pkg memory");
							YYABORT;
						}
						memcpy(a_tmp, route_elems, (yyvsp[(5) - (6)].intval)*sizeof(action_elem_t));

						mk_action3( (yyval.action), ROUTE_T, NUMBER_ST,	/* route idx */
							NUMBER_ST,					/* number of params */
							SCRIPTVAR_ELEM_ST,			/* parameters */
							(void*)(long)i_tmp,
							(void*)(long)(yyvsp[(5) - (6)].intval),
							(void*)a_tmp);
					}
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 2199 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 2200 "cfg.y"
    { (yyval.action)=0; yyerror("bad route"
						"argument"); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 2202 "cfg.y"
    { mk_action2( (yyval.action), SET_HOST_T, STR_ST,
														0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 2204 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 2205 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 2208 "cfg.y"
    { mk_action2( (yyval.action), PREFIX_T, STR_ST,
														0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 2210 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 2211 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 2213 "cfg.y"
    { mk_action2( (yyval.action), STRIP_TAIL_T,
									NUMBER_ST, 0, (void *) (yyvsp[(3) - (4)].intval), 0); }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 2215 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 2216 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"number expected"); }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 2219 "cfg.y"
    { mk_action2( (yyval.action), STRIP_T, NUMBER_ST,
														0, (void *) (yyvsp[(3) - (4)].intval), 0); }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 2221 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 2222 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"number expected"); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 2224 "cfg.y"
    {
			{
				qvalue_t q;

				rc = str2q(&q, (yyvsp[(5) - (6)].strval), strlen((yyvsp[(5) - (6)].strval)));
				if (rc < 0)
					yyerrorf("bad qvalue (%.*s): %s",
							 strlen((yyvsp[(5) - (6)].strval)), (yyvsp[(5) - (6)].strval), qverr2str(rc));

				mk_action2( (yyval.action), APPEND_BRANCH_T, STR_ST, NUMBER_ST, (yyvsp[(3) - (6)].strval),
						(void *)(long)q);
			}
		}
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 2237 "cfg.y"
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, (yyvsp[(3) - (4)].strval), (void *)Q_UNSPECIFIED) ; }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 2239 "cfg.y"
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, 0, (void *)Q_UNSPECIFIED) ; }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 2241 "cfg.y"
    { mk_action2( (yyval.action), APPEND_BRANCH_T,
						STR_ST, NUMBER_ST, 0, (void *)Q_UNSPECIFIED ) ; }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 2243 "cfg.y"
    {
						mk_action1((yyval.action), REMOVE_BRANCH_T, NUMBER_ST, (void*)(yyvsp[(3) - (4)].intval));}
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 2245 "cfg.y"
    {
						mk_action1( (yyval.action), REMOVE_BRANCH_T, SCRIPTVAR_ST, (yyvsp[(3) - (4)].specval));}
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 2247 "cfg.y"
    {
				spec = (pv_spec_t*)pkg_malloc(sizeof(pv_spec_t));
				memset(spec, 0, sizeof(pv_spec_t));
				tstr.s = (yyvsp[(3) - (6)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_spec(&tstr, spec)==NULL)
				{
					yyerror("unknown script variable in first parameter");
				}
				if(!pv_is_w(spec))
					yyerror("read-only script variable in first parameter");

				pvmodel = 0;
				tstr.s = (yyvsp[(5) - (6)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
				{
					yyerror("error in second parameter");
				}

				mk_action2( (yyval.action), PV_PRINTF_T,
						SCRIPTVAR_ST, SCRIPTVAR_ELEM_ST, spec, pvmodel) ;
			}
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 2270 "cfg.y"
    {
				if(!pv_is_w((yyvsp[(3) - (6)].specval)))
					yyerror("read-only script variable in first parameter");
				pvmodel = 0;
				tstr.s = (yyvsp[(5) - (6)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
				{
					yyerror("error in second parameter");
				}

				mk_action2( (yyval.action), PV_PRINTF_T,
						SCRIPTVAR_ST, SCRIPTVAR_ELEM_ST, (yyvsp[(3) - (6)].specval), pvmodel) ;
			}
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 2285 "cfg.y"
    { mk_action2( (yyval.action), SET_HOSTPORT_T,
														STR_ST, 0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 2287 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 2288 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument,"
												" string expected"); }
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 2290 "cfg.y"
    { mk_action2( (yyval.action), SET_PORT_T, STR_ST,
														0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 2292 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 2293 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 2295 "cfg.y"
    { mk_action2( (yyval.action), SET_USER_T,
														STR_ST, 0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 2297 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 2298 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 2300 "cfg.y"
    { mk_action2( (yyval.action), SET_USERPASS_T,
														STR_ST, 0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 2302 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 2303 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 2305 "cfg.y"
    { mk_action2( (yyval.action), SET_URI_T, STR_ST,
														0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 2307 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 2308 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
										"string expected"); }
    break;

  case 517:
/* Line 1792 of yacc.c  */
#line 2310 "cfg.y"
    { mk_action2( (yyval.action), REVERT_URI_T, 0,0,0,0); }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 2311 "cfg.y"
    { mk_action2( (yyval.action), REVERT_URI_T, 0,0,0,0); }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 2312 "cfg.y"
    { mk_action2( (yyval.action), SET_DSTURI_T,
													STR_ST, 0, (yyvsp[(3) - (4)].strval), 0); }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 2314 "cfg.y"
    { (yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 2315 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
										"string expected"); }
    break;

  case 522:
/* Line 1792 of yacc.c  */
#line 2317 "cfg.y"
    { mk_action2( (yyval.action), RESET_DSTURI_T,
															0,0,0,0); }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 2319 "cfg.y"
    { mk_action2( (yyval.action), RESET_DSTURI_T, 0,0,0,0); }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 2320 "cfg.y"
    { mk_action2( (yyval.action), ISDSTURISET_T, 0,0,0,0);}
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 2321 "cfg.y"
    { mk_action2( (yyval.action), ISDSTURISET_T, 0,0,0,0); }
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 2322 "cfg.y"
    { mk_action2( (yyval.action), FORCE_RPORT_T,
															0, 0, 0, 0); }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 2324 "cfg.y"
    { mk_action2( (yyval.action), FORCE_RPORT_T,0, 0, 0, 0); }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 2325 "cfg.y"
    {
					mk_action2( (yyval.action), FORCE_LOCAL_RPORT_T,0, 0, 0, 0); }
    break;

  case 529:
/* Line 1792 of yacc.c  */
#line 2327 "cfg.y"
    {
					mk_action2( (yyval.action), FORCE_LOCAL_RPORT_T,0, 0, 0, 0); }
    break;

  case 530:
/* Line 1792 of yacc.c  */
#line 2329 "cfg.y"
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,NUMBER_ST, 0,
					(void*)(yyvsp[(3) - (4)].intval), 0);
		}
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 2333 "cfg.y"
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,0, 0, 0, 0);
		}
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 2336 "cfg.y"
    {
				mk_action2( (yyval.action), FORCE_TCP_ALIAS_T,0, 0, 0, 0);
		}
    break;

  case 533:
/* Line 1792 of yacc.c  */
#line 2339 "cfg.y"
    {(yyval.action)=0;
					yyerror("bad argument, number expected");
					}
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 2342 "cfg.y"
    {
								mk_action2( (yyval.action), SET_ADV_ADDR_T, STR_ST,
											0, (yyvsp[(3) - (4)].strval), 0);
								}
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 2346 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument, "
														"string expected"); }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 2348 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 2349 "cfg.y"
    {
								tstr.s = int2str((yyvsp[(3) - (4)].intval), &tstr.len);
								if (!(tmp = pkg_malloc(tstr.len + 1))) {
										LM_CRIT("out of pkg memory\n");
										(yyval.action) = 0;
										YYABORT;
								} else {
									memcpy(tmp, tstr.s, tstr.len);
									tmp[tstr.len] = '\0';
									mk_action2((yyval.action), SET_ADV_PORT_T, STR_ST,
											   0, tmp, 0);
								}
								            }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 2362 "cfg.y"
    {
								mk_action2((yyval.action), SET_ADV_PORT_T,
										   STR_ST, NOSUBTYPE,
										   (yyvsp[(3) - (4)].strval), NULL);
								}
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 2367 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument "
						"(string or integer expected)"); }
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 2369 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 2370 "cfg.y"
    {
								mk_action2( (yyval.action), FORCE_SEND_SOCKET_T,
									SOCKID_ST, 0, (yyvsp[(3) - (4)].sockid), 0);
								}
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 2374 "cfg.y"
    { (yyval.action)=0; yyerror("bad argument,"
								" proto:host[:port] expected");
								}
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 2377 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 2378 "cfg.y"
    {
								mk_action2( (yyval.action), SERIALIZE_BRANCHES_T,
									NUMBER_ST, 0, (void*)(long)(yyvsp[(3) - (4)].intval), 0);
								}
    break;

  case 545:
/* Line 1792 of yacc.c  */
#line 2382 "cfg.y"
    {(yyval.action)=0; yyerror("bad argument,"
								" number expected");
								}
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 2385 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 2386 "cfg.y"
    {
								mk_action2( (yyval.action), NEXT_BRANCHES_T, 0, 0, 0, 0);
								}
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 2389 "cfg.y"
    {(yyval.action)=0; yyerror("no argument is"
								" expected");
								}
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 2392 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 2393 "cfg.y"
    {
								mk_action2( (yyval.action), USE_BLACKLIST_T,
									STRING_ST, 0, (yyvsp[(3) - (4)].strval), 0);
								}
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 2397 "cfg.y"
    {(yyval.action)=0; yyerror("bad argument,"
								" string expected");
								}
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 2400 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 2401 "cfg.y"
    {
								mk_action2( (yyval.action), UNUSE_BLACKLIST_T,
									STRING_ST, 0, (yyvsp[(3) - (4)].strval), 0);
								}
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 2405 "cfg.y"
    {(yyval.action)=0; yyerror("bad argument,"
								" string expected");
								}
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 2408 "cfg.y"
    {(yyval.action)=0; yyerror("missing '(' or ')' ?"); }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 2409 "cfg.y"
    {
									mk_action3( (yyval.action), CACHE_STORE_T,
													STR_ST,
													STR_ST,
													STR_ST,
													(yyvsp[(3) - (8)].strval),
													(yyvsp[(5) - (8)].strval),
													(yyvsp[(7) - (8)].strval));
							}
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 2419 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[(7) - (10)].strval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (10)].intval);
								mk_action_((yyval.action), CACHE_STORE_T, 4, elems);
							}
    break;

  case 558:
/* Line 1792 of yacc.c  */
#line 2431 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[(7) - (10)].strval);
								elems[3].type = SCRIPTVAR_ST;
								elems[3].u.data = (yyvsp[(9) - (10)].specval);
								mk_action_((yyval.action), CACHE_STORE_T, 4, elems);
							}
    break;

  case 559:
/* Line 1792 of yacc.c  */
#line 2443 "cfg.y"
    {
									mk_action2( (yyval.action), CACHE_REMOVE_T,
													STR_ST,
													STR_ST,
													(yyvsp[(3) - (6)].strval),
													(yyvsp[(5) - (6)].strval));
							}
    break;

  case 560:
/* Line 1792 of yacc.c  */
#line 2450 "cfg.y"
    {
									mk_action3( (yyval.action), CACHE_FETCH_T,
													STR_ST,
													STR_ST,
													SCRIPTVAR_ST,
													(yyvsp[(3) - (8)].strval),
													(yyvsp[(5) - (8)].strval),
													(yyvsp[(7) - (8)].specval));
							}
    break;

  case 561:
/* Line 1792 of yacc.c  */
#line 2459 "cfg.y"
    {
									mk_action3( (yyval.action), CACHE_COUNTER_FETCH_T,
													STR_ST,
													STR_ST,
													SCRIPTVAR_ST,
													(yyvsp[(3) - (8)].strval),
													(yyvsp[(5) - (8)].strval),
													(yyvsp[(7) - (8)].specval));
							}
    break;

  case 562:
/* Line 1792 of yacc.c  */
#line 2468 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[(7) - (10)].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (10)].intval);
								mk_action_((yyval.action), CACHE_ADD_T, 4, elems);
							}
    break;

  case 563:
/* Line 1792 of yacc.c  */
#line 2479 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[(7) - (10)].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (10)].intval);
								mk_action_((yyval.action), CACHE_ADD_T, 4, elems);
							}
    break;

  case 564:
/* Line 1792 of yacc.c  */
#line 2490 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (12)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (12)].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[(7) - (12)].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (12)].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[(11) - (12)].specval);
								mk_action_((yyval.action), CACHE_ADD_T, 5, elems);
							}
    break;

  case 565:
/* Line 1792 of yacc.c  */
#line 2503 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (12)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (12)].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[(7) - (12)].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (12)].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[(11) - (12)].specval);
								mk_action_((yyval.action), CACHE_ADD_T, 5, elems);
							}
    break;

  case 566:
/* Line 1792 of yacc.c  */
#line 2516 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[(7) - (10)].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (10)].intval);
								mk_action_((yyval.action), CACHE_SUB_T, 4, elems);
							}
    break;

  case 567:
/* Line 1792 of yacc.c  */
#line 2527 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (10)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (10)].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[(7) - (10)].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (10)].intval);
								mk_action_((yyval.action), CACHE_SUB_T, 4, elems);
							}
    break;

  case 568:
/* Line 1792 of yacc.c  */
#line 2538 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (12)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (12)].strval);
								elems[2].type = NUMBER_ST;
								elems[2].u.number = (yyvsp[(7) - (12)].intval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (12)].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[(11) - (12)].specval);
								mk_action_((yyval.action), CACHE_SUB_T, 5, elems);
							}
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 2551 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (12)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (12)].strval);
								elems[2].type = SCRIPTVAR_ST;
								elems[2].u.data = (yyvsp[(7) - (12)].specval);
								elems[3].type = NUMBER_ST;
								elems[3].u.number = (yyvsp[(9) - (12)].intval);
								elems[4].type = SCRIPTVAR_ST;
								elems[4].u.data = (yyvsp[(11) - (12)].specval);
								mk_action_((yyval.action), CACHE_SUB_T, 5, elems);
							}
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 2564 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (8)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (8)].strval);
								elems[2].type = STR_ST;
								elems[2].u.data = (yyvsp[(7) - (8)].strval);
								mk_action_((yyval.action), CACHE_RAW_QUERY_T, 3, elems);
							}
    break;

  case 571:
/* Line 1792 of yacc.c  */
#line 2573 "cfg.y"
    {
								elems[0].type = STR_ST;
								elems[0].u.data = (yyvsp[(3) - (6)].strval);
								elems[1].type = STR_ST;
								elems[1].u.data = (yyvsp[(5) - (6)].strval);
								mk_action_((yyval.action), CACHE_RAW_QUERY_T, 2, elems);
							}
    break;

  case 572:
/* Line 1792 of yacc.c  */
#line 2580 "cfg.y"
    {
						 			cmd_tmp=(void*)find_cmd_export_t((yyvsp[(1) - (3)].strval), 0, rt);
									if (cmd_tmp==0){
										if (find_cmd_export_t((yyvsp[(1) - (3)].strval), 0, 0)) {
											yyerror("Command cannot be "
												"used in the block\n");
										} else {
											yyerrorf("unknown command <%s>, "
												"missing loadmodule?", (yyvsp[(1) - (3)].strval));
										}
										(yyval.action)=0;
									}else{
										elems[0].type = CMD_ST;
										elems[0].u.data = cmd_tmp;
										mk_action_((yyval.action), MODULE_T, 1, elems);
									}
								}
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 2597 "cfg.y"
    {
									cmd_tmp=(void*)find_cmd_export_t((yyvsp[(1) - (4)].strval),(yyvsp[(3) - (4)].intval),rt);
									if (cmd_tmp==0){
										if (find_cmd_export_t((yyvsp[(1) - (4)].strval), (yyvsp[(3) - (4)].intval), 0)) {
											yyerror("Command cannot be "
												"used in the block\n");
										} else {
											yyerrorf("unknown command <%s>, "
												"missing loadmodule?", (yyvsp[(1) - (4)].strval));
										}
										(yyval.action)=0;
									}else{
										elems[0].type = CMD_ST;
										elems[0].u.data = cmd_tmp;
										mk_action_((yyval.action), MODULE_T, (yyvsp[(3) - (4)].intval)+1, elems);
									}
								}
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 2614 "cfg.y"
    { (yyval.action)=0; yyerrorf("bad arguments for "
												"command <%s>", (yyvsp[(1) - (4)].strval)); }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 2616 "cfg.y"
    { (yyval.action)=0;
			yyerrorf("bare word <%s> found, command calls need '()'", (yyvsp[(1) - (2)].strval));
			}
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 2619 "cfg.y"
    {
				mk_action1((yyval.action), XDBG_T, STR_ST, (yyvsp[(3) - (4)].strval));	}
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 2621 "cfg.y"
    {
				mk_action1((yyval.action), XDBG_T, STR_ST, (yyvsp[(3) - (4)].strval));	}
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 2623 "cfg.y"
    {
				mk_action1((yyval.action), XLOG_T, STR_ST, (yyvsp[(3) - (4)].strval)); }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 2625 "cfg.y"
    {
				mk_action1((yyval.action), XLOG_T, STR_ST, (yyvsp[(3) - (4)].strval)); }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 2627 "cfg.y"
    {
				mk_action2((yyval.action), XLOG_T, STR_ST, STR_ST, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval)); }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 2629 "cfg.y"
    {
				mk_action2((yyval.action), XLOG_T, STR_ST, STR_ST, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval)); }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 2631 "cfg.y"
    {
				mk_action1((yyval.action), RAISE_EVENT_T, STR_ST, (yyvsp[(3) - (4)].strval)); }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 2633 "cfg.y"
    {
				mk_action2((yyval.action), RAISE_EVENT_T, STR_ST, SCRIPTVAR_ST, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].specval)); }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 2635 "cfg.y"
    {
				mk_action3((yyval.action), RAISE_EVENT_T, STR_ST, SCRIPTVAR_ST,
					SCRIPTVAR_ST, (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].specval), (yyvsp[(7) - (8)].specval)); }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 2638 "cfg.y"
    {
				mk_action2((yyval.action), SUBSCRIBE_EVENT_T, STR_ST, STR_ST, (yyvsp[(3) - (6)].strval), (yyvsp[(5) - (6)].strval)); }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 2640 "cfg.y"
    {
				mk_action3((yyval.action), SUBSCRIBE_EVENT_T, STR_ST, STR_ST,
					NUMBER_ST, (yyvsp[(3) - (8)].strval), (yyvsp[(5) - (8)].strval), (void*)(long)(yyvsp[(7) - (8)].intval)); }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 2643 "cfg.y"
    {
				elems[0].type = STR_ST;
				elems[0].u.data = (yyvsp[(3) - (14)].strval);
				elems[1].type = STR_ST;
				elems[1].u.data = (yyvsp[(5) - (14)].strval);
				elems[2].type = STR_ST;
				elems[2].u.data = (yyvsp[(7) - (14)].strval);
				elems[3].type = STR_ST;
				elems[3].u.data = (yyvsp[(9) - (14)].strval);
				elems[4].type = STR_ST;
				elems[4].u.data = (yyvsp[(11) - (14)].strval);
				elems[5].type = SCRIPTVAR_ST;
				elems[5].u.data = (yyvsp[(13) - (14)].specval);
				mk_action_((yyval.action), CONSTRUCT_URI_T,6,elems); }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 2657 "cfg.y"
    {
				elems[0].type = SCRIPTVAR_ST;
				elems[0].u.data = (yyvsp[(3) - (6)].specval);
				elems[1].type = SCRIPTVAR_ST;
				elems[1].u.data = (yyvsp[(5) - (6)].specval);
				mk_action_((yyval.action), GET_TIMESTAMP_T,2,elems); }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 2663 "cfg.y"
    {
				mk_action2((yyval.action), SCRIPT_TRACE_T, 0, 0, 0, 0); }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 2665 "cfg.y"
    {
				pvmodel = 0;
				tstr.s = (yyvsp[(5) - (6)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
					yyerror("error in second parameter");
				mk_action2((yyval.action), SCRIPT_TRACE_T, NUMBER_ST,
						   SCRIPTVAR_ELEM_ST, (void *)(yyvsp[(3) - (6)].intval), pvmodel); }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 2673 "cfg.y"
    {
				pvmodel = 0;
				tstr.s = (yyvsp[(5) - (8)].strval);
				tstr.len = strlen(tstr.s);
				if(pv_parse_format(&tstr, &pvmodel)<0)
					yyerror("error in second parameter");
				mk_action3((yyval.action), SCRIPT_TRACE_T, NUMBER_ST,
						SCRIPTVAR_ELEM_ST, STR_ST, (void *)(yyvsp[(3) - (8)].intval), pvmodel, (yyvsp[(7) - (8)].strval)); }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 2681 "cfg.y"
    {
				i_tmp = get_script_route_idx( (yyvsp[(5) - (6)].strval), rlist, RT_NO, 0);
				if (i_tmp==-1) yyerror("too many script routes");
				mk_action2((yyval.action), ASYNC_T, ACTIONS_ST, NUMBER_ST,
						(yyvsp[(3) - (6)].action), (void*)(long)i_tmp);
				}
    break;


/* Line 1792 of yacc.c  */
#line 8695 "cfg.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 2691 "cfg.y"


static inline void warn(char* s)
{
	LM_WARN("warning in config file %s, line %d, column %d-%d: %s\n",
			get_cfg_file_name, line, startcolumn, column, s);
}

static void yyerror(char* s)
{
	LM_CRIT("parse error in config file %s, line %d, column %d-%d: %s\n",
			get_cfg_file_name, line, startcolumn, column, s);
	cfg_errors++;
}

#define ERROR_MAXLEN 1024
static void yyerrorf(char *fmt, ...)
{
	char *tmp = pkg_malloc(ERROR_MAXLEN);
	va_list ap;
	va_start(ap, fmt);

	vsnprintf(tmp, ERROR_MAXLEN, fmt, ap);
	yyerror(tmp);

	pkg_free(tmp);
	va_end(ap);
}


static struct socket_id* mk_listen_id(char* host, enum sip_protos proto,
																	int port)
{
	struct socket_id* l;
	l=pkg_malloc(sizeof(struct socket_id));
	if (l==0){
		LM_CRIT("cfg. parser: out of memory.\n");
	}else{
		l->name     = host;
		l->adv_name = NULL;
		l->adv_port = 0;
		l->proto    = proto;
		l->port     = port;
		l->children = 0;
		l->next     = NULL;
	}

	return l;
}

static struct multi_str *new_string(char *s)
{
	struct multi_str *ms = pkg_malloc(sizeof(struct multi_str));
	if (!ms) {
		LM_CRIT("cfg. parser: out of memory.\n");
	}else{
		ms->s    = s;
		ms->next = NULL;
	}
	return ms;
}

static struct socket_id* set_listen_id_adv(struct socket_id* sock,
											char *adv_name,
											int adv_port)
{
	sock->adv_name=adv_name;
	sock->adv_port=adv_port;
	return sock;
}
