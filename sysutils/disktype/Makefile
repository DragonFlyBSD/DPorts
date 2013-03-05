# Created by: Adam Weinberger <adamw@FreeBSD.org>
# $FreeBSD: ports/sysutils/disktype/Makefile,v 1.10 2013/01/15 13:46:58 svnexp Exp $

PORTNAME=	disktype
PORTVERSION=	9
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Disk formatting type autodetector

USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/disktype
PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-patch:
.for var in CFLAGS LDFLAGS CC
	@${REINPLACE_CMD} -e 's|^\(${var}\)[ ]*=|\1 ?=|' \
		${WRKSRC}/Makefile
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
.if ${PORT_OPTIONS:MDOCS}
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
