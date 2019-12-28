PORTNAME=	webcamd
PORTVERSION=	9.9.9.9
CATEGORIES=	multimedia

MAINTAINER=	zrj@efnet.irc
COMMENT=	Stub port of Linux USB webcam and DVB drivers into userspace

LICENSE=	BSD2CLAUSE

DISTFILES=

PLIST_FILES=	sbin/webcamd

do-configure:

do-build:
	${MKDIR} ${WRKSRC}
	cd ${WRKSRC} && ${CC} ${FILESDIR}/webcamd-stub.c -o webcamd-stub

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/webcamd-stub ${STAGEDIR}${PREFIX}/sbin/webcamd

.include <bsd.port.mk>
