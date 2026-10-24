PORTNAME=	mfid
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	LOCAL/feld

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Monitoring daemon for mfi RAID controllers
WWW=		https://www.freebsd.org/

USE_RC_SUBR=	mfid
PLIST_FILES+=	sbin/mfid

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mfid ${STAGEDIR}${PREFIX}/sbin/mfid

dfly-patch:
	${REINPLACE_CMD} -e 's@dev/mfi/@dev/raid/mfi/@g'	\
		${WRKSRC}/mfid.c

.include <bsd.port.mk>
