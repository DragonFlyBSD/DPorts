# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: graphics/unpaper/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	unpaper
PORTVERSION=	0.3
CATEGORIES=	graphics
MASTER_SITES=	CENKES BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Post-processing tool for scanned sheets of paper

NO_STAGE=	yes
do-build:
	@${CC} ${CFLAGS} -o ${WRKSRC}/${PORTNAME} \
		${WRKSRC}/src/${PORTNAME}.c -lm

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
.ifndef NOPORTDOCS
	@${INSTALL} -d ${DOCSDIR}/
	@cd ${WRKSRC}/&&${INSTALL_DATA} CHANGELOG README ${DOCSDIR}/
	@cd ${WRKSRC}/doc/&&${COPYTREE_SHARE} . ${DOCSDIR}/
.endif

.include <bsd.port.mk>
