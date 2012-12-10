# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: ports/net/minissdpd/Makefile,v 1.8 2012/11/17 06:00:06 svnexp Exp $

PORTNAME=	minissdpd
PORTVERSION=	1.2
CATEGORIES=	net
MASTER_SITES=	http://miniupnp.free.fr/files/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	UPnP IGD discovery speed enhancer

USE_GMAKE=	yes
USE_RC_SUBR=	minissdpd
MAKE_JOBS_SAFE=	yes

CFLAGS+=	-D_GNU_SOURCE

MAN8=		minissdpd.8
PLIST_FILES=	sbin/minissdpd

post-extract:
	@${MV} ${WRKSRC}/${PORTNAME}.1 ${WRKSRC}/${MAN8}

post-patch:
	@${REINPLACE_CMD} -e 's|^\(\.TH.*\)1|\18|' ${WRKSRC}/${MAN8}
	@${REINPLACE_CMD} -E '/^(CC|CFLAGS)/d' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/sbin
	${INSTALL_MAN} ${WRKSRC}/${MAN8} ${MANPREFIX}/man/man8

.include <bsd.port.mk>
