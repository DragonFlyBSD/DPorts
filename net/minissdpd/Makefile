# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: net/minissdpd/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	minissdpd
PORTVERSION=	1.2
CATEGORIES=	net
MASTER_SITES=	http://miniupnp.free.fr/files/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	UPnP IGD discovery speed enhancer

USES=		gmake
USE_RC_SUBR=	minissdpd

CFLAGS+=	-D_GNU_SOURCE

PLIST_FILES=	sbin/minissdpd man/man8/minissdpd.8.gz

post-extract:
	@${MV} ${WRKSRC}/${PORTNAME}.1 ${WRKSRC}/${PORTNAME}.8

post-patch:
	@${REINPLACE_CMD} -e 's|^\(\.TH.*\)1|\18|' ${WRKSRC}/${PORTNAME}.8
	@${REINPLACE_CMD} -E '/^(CC|CFLAGS)/d' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.8 ${STAGEDIR}${MANPREFIX}/man/man8

.include <bsd.port.mk>
