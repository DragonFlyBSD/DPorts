# Submitted by ftigeot

PORTNAME=	wminet
PORTVERSION=	1.2
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.enteract.com/users/rneswold/
DISTNAME=	wmnet-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockable network monitor for WindowMaker

USES=		xorg
USE_XORG=	x11 xext xpm
MAKE_ENV+=	X11BASE=${PREFIX}
MAKE_ARGS+=	BINDIR=${STAGEDIR}${PREFIX}/bin \
		MANDIR=${STAGEDIR}${MANPREFIX}/man

PLIST_FILES=	bin/wminet man/man1/wminet.1.gz

.include <bsd.port.mk>
