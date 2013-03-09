# New ports collection makefile for:    mpeg_encode
# Date created:
# Whom:                 erich@FreeBSD.org
#
# $FreeBSD: ports/multimedia/mpeg_encode/Makefile,v 1.24 2012/11/17 05:59:51 svnexp Exp $
#

PORTNAME=	mpeg_encode
PORTVERSION=	1.5b
CATEGORIES=	multimedia
MASTER_SITES=	LOCAL/ahze
DISTNAME=	${PKGNAME}-src

MAINTAINER=	multimedia@FreeBSD.org
COMMENT=	UCB's MPEG-I video stream encoder

MAN1=		mpeg_encode.1

WRKSRC=		${WRKDIR}/${PORTNAME}

post-patch:
	@(${GREP} -R -l "malloc.h" ${WRKSRC}/* | \
	    ${XARGS} ${REINPLACE_CMD} -e "s/malloc.h/stdlib.h/")

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/mpeg_encode ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/docs/mpeg_encode.1 ${PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in users-guide.ps template.param
	@${INSTALL_DATA} ${WRKSRC}/docs/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
