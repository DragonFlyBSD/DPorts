# $FreeBSD$

PORTNAME=	dflyclock
PORTVERSION=	1.0.6
CATEGORIES=	x11-clocks
MASTER_SITES=	https://gitweb.dragonflybsd.org/projects.git/snapshot/
DISTNAME=	HEAD

MAINTAINER=	tuxillo@dragonflybsd.org

LICENSE=	BSD2CLAUSE

COMMENT=	The best X11-based clock.

USES=		tar:bzip2 xorg xorg-cat:app
USE_XORG=	x11 xft xext

COMMITID=	a806980
WRKSRC=		${WRKDIR}/projects-${DISTNAME}-${COMMITID}/dflyclock

do-configure:
	# There is no NO_CONFIGURE because it's empty by default but
	# ./configure is still called?
	@${ECHO_CMD} No configure phase

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/dflyclock ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/dflyclock.1 ${STAGEDIR}${PREFIX}/man/man1/

.include <bsd.port.mk>
