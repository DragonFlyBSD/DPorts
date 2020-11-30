# zrj
PORTNAME=	xorg-conf-examples
PORTVERSION=	1.0
CATEGORIES=	x11
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	zrj@efnet.irc
COMMENT=	X.Org config examples

LICENSE=	MIT

NO_BUILD=	yes
SUB_FILES=	pkg-message

do-install:
	${MKDIR} -p ${STAGEDIR}${LOCALBASE}/share/X11/xorg-conf-examples
	${CP} ${FILESDIR}/driver-*.conf ${STAGEDIR}${LOCALBASE}/share/X11/xorg-conf-examples/

.include <bsd.port.mk>
