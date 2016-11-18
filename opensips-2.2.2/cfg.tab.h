/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2058 of yacc.c  */
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


/* Line 2058 of yacc.c  */
#line 301 "cfg.tab.h"
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
