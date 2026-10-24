PORTNAME=	xoj
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	SUNSITE/X11/demos

MAINTAINER=	ports@FreeBSD.org
COMMENT=	O. J. Simpson Simulator root window demo

USES=		imake:noman tar:tgz xorg
USE_XORG=	xaw
PLIST_FILES=	bin/xoj

dfly-patch:
	${REINPLACE_CMD} -e 's@ifndef \(__FreeBSD__\)@if \!defined(\1) \&\& \!defined(__DragonFly__)@g'	\
		${WRKSRC}/xoj.c

.include <bsd.port.mk>
