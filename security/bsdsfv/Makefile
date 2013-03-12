# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: security/bsdsfv/Makefile 313649 2013-03-08 14:00:30Z ehaupt $

PORTNAME=	bsdsfv
PORTVERSION=	1.18
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Flexible SFV checksum utility

MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
PLIST_FILES=	bin/bsdsfv
PORTDOCS=	MANUAL

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|^\(INSTALL_PREFIX =\).*$$|\1 ${PREFIX}|g' \
		${WRKSRC}/Makefile

.if ${PORT_OPTIONS:MDOCS}
post-install:
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
