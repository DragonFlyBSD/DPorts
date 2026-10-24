PORTNAME=	dialog4ports
PORTVERSION=	0.1.6
PORTREVISION?=	2
CATEGORIES=	ports-mgmt
MASTER_SITES=	http://mirror.shatow.net/freebsd/${PORTNAME}/ \
		ftp://invisible-island.net/dialog/:dialog \
		http://mirror.shatow.net/freebsd/${PORTNAME}/:dialog

MAINTAINER=	rum1cro@yandex.ru
COMMENT?=	Console Interface to configure ports
WWW=		https://bitbucket.org/m1cro/d4p/

LICENSE=	BSD2CLAUSE

USES=		uidfix

MAKE_ARGS+=	MAN1DIR=${PREFIX}/share/man/man1

# CCACHE has options, so may need d4p, make d4p not ccache friendly
# to avoid circular dependency
NO_CCACHE=	yes
MAKE_ENV+=	SRCCONF=/dev/null

.if !exists(/usr/lib/libdialog.so)
BROKEN=		Requires libdialog in base
.endif

DEPRECATED=	Consider using ports-mgmt/portconfig which is a dropin replacement

.if !defined(D4P_SLAVE)
PLIST_FILES=	bin/dialog4ports share/man/man1/${PORTNAME}.1.gz
.endif

.include <bsd.port.pre.mk>

.if defined(DEBUG_FLAGS)
MAKE_ARGS+=	DEBUG_FLAGS="${DEBUG_FLAGS}"
.endif

## This is used by 'make config' via Tools/scripts/dialog4ports.sh
## Use caution in changing
.if !exists(${DIALOG4PORTS})
DIALOG4PORTS=	${WRKSRC}/dialog4ports
.endif

.if defined(D4P_SLAVE)
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} \
		${DIALOGNAME}.tgz:dialog
DIALOGNAME=	dialog-1.1-20120706

MAKE_ENV+=	DIALOGSOURCES=${WRKDIR}/${DIALOGNAME}

do-configure:
	@cd ${WRKDIR}/${DIALOGNAME}; ${SETENV} ${CONFIGURE_ENV} ./configure LDFLAGS="${LDFLAGS}"

.endif

.if exists(/usr/lib/priv/libprivate_ncursesw.so)
CFLAGS+=	-I/usr/include/priv/ncurses

.  if defined(D4P_SLAVE)
LDFLAGS+=	-L/usr/lib/priv
CONFIGURE_ENV+=	cf_cv_curses_incdir=-I/usr/include/priv/ncurses
pre-patch:
	${REINPLACE_CMD} -e 's@\(ncurses curses cursesX\)@\1 private_ncursesw@g'			\
		${WRKDIR}/${DIALOGNAME}/configure
.  endif

dfly-patch:
	${REINPLACE_CMD} -e "s@-lncurses@-rpath /lib/priv -L/usr/lib/priv -lprivate_ncursesw@g" \
		${WRKSRC}/Makefile
.endif

.include <bsd.port.post.mk>
