# New ports collection makefile for:	pure-sfv
# Date created:				26 Jul 2005
# Whom:					Emanuel Haupt <ehaupt@critical.ch>
#
# $FreeBSD: ports/security/pure-sfv/Makefile,v 1.8 2012/11/17 06:01:16 svnexp Exp $
#

PORTNAME=	pure-sfv
PORTVERSION=	0.3
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}%20${PORTVERSION}
DISTNAME=	${PORTNAME}_${PORTVERSION}_src

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Utility to test and create .sfv files

LICENSE=	GPLv2

USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}

PLIST_FILES=	bin/pure-sfv
PORTDOCS=	ReadMe.txt

post-patch:
	@${REINPLACE_CMD} -E 's/^(CFLAGS|CC)[ +=]*/\1?=/' \
		${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
