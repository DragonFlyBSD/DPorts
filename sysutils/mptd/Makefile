PORTNAME=	mptd
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://www.glenbarber.us/ports/${CATEGORIES}/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Monitoring daemon for mpt RAID controllers
WWW=		https://www.freebsd.org/

LICENSE=	BSD2CLAUSE

USE_RC_SUBR=	mptd
PLIST_FILES+=	sbin/mptd

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mptd ${STAGEDIR}${PREFIX}/sbin/mptd

dfly-patch:
	${REINPLACE_CMD} -e 's@dev/mpt/@dev/disk/mpt/@g'	\
		${WRKSRC}/mptd.h
	${REINPLACE_CMD} -e 's@<cam/@<bus/cam/@g' \
		${WRKSRC}/mpt_cam.c

.include <bsd.port.mk>
