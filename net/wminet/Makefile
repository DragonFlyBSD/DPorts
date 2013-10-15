# Submitted by ftigeot

PORTNAME=	wminet
PORTVERSION=	1.2
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.enteract.com/users/rneswold/
DISTNAME=	wmnet-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Dockable network monitor for WindowMaker

USE_XORG=	x11 xext xpm
MAKE_ENV+=	X11BASE=${PREFIX}

MAN1=		wminet.1
PLIST_FILES=	bin/wminet

NO_STAGE=	yes

.include <bsd.port.mk>
