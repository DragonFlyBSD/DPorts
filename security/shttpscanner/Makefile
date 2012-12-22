# New ports collection makefile for:	shttpscanner
# Date created:		25 September 2006
# Whom:			Andrew Pantyukhin <infofarmer@FreeBSD.org>
#
# $FreeBSD: ports/security/shttpscanner/Makefile,v 1.6 2012/11/17 06:01:20 svnexp Exp $
#

PORTNAME=	shttpscanner
PORTVERSION=	0.4
CATEGORIES=	security www
MASTER_SITES=	SF/${PORTNAME}/sHTTPScanner/sHTTPScanner%20v${PORTVERSION}
DISTNAME=	sHTTPScanner_v${DISTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple HTTP scanner

USE_ZIP=	yes
USE_DOS2UNIX=	yes

PLIST_FILES=	bin/${PORTNAME} %%DATADIR%%/requests.txt %%DATADIR%%/subdomains.txt
PLIST_DIRS=	%%DATADIR%%

post-patch:
	@${REINPLACE_CMD} -E '/^#define/s!([a-z]*\.txt)!${DATADIR}/\1!' ${WRKSRC}/${DISTNAME:tl}.c

do-build:
	@cd ${WRKSRC} && ${CC} ${CFLAGS} ${PTHREAD_CFLAGS} -o ${PORTNAME} ${DISTNAME:tl}.c ${PTHREAD_LIBS}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL} -d ${DATADIR}/
	@${INSTALL} ${WRKSRC}/requests.txt ${WRKSRC}/subdomains.txt ${DATADIR}/

.include <bsd.port.mk>
