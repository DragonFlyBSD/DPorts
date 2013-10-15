# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: security/shttpscanner/Makefile 327769 2013-09-20 22:55:24Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -E '/^#define/s!([a-z]*\.txt)!${DATADIR}/\1!' ${WRKSRC}/${DISTNAME:tl}.c

do-build:
	@cd ${WRKSRC} && ${CC} ${CFLAGS} ${PTHREAD_CFLAGS} -o ${PORTNAME} ${DISTNAME:tl}.c ${PTHREAD_LIBS}

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	@${INSTALL} -d ${DATADIR}/
	@${INSTALL} ${WRKSRC}/requests.txt ${WRKSRC}/subdomains.txt ${DATADIR}/

.include <bsd.port.mk>
