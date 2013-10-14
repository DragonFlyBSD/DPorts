# Created by: Yen-Ming Lee <leeym@cae.ce.ntu.edu.tw>
# $FreeBSD: java/jad/Makefile 327738 2013-09-20 19:48:32Z bapt $

PORTNAME=	jad
PORTVERSION=	1.5.8c
CATEGORIES=	java devel
MASTER_SITES=	http://www.varaneckas.com/sites/default/files/jad/
DISTNAME=	jad158c.freebsd

MAINTAINER=	ale@FreeBSD.org
COMMENT=	A Java Decompiler

USE_ZIP=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/jad

PORTDOCS=	*

ONLY_FOR_ARCHS=	i386 amd64

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/jad ${PREFIX}/bin/
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/Readme.txt ${DOCSDIR}/
.endif

.include <bsd.port.mk>
