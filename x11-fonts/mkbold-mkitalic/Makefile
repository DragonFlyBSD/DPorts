# New ports collection makefile for:	mkbold-mkitalic
# Date created:        			Dec 28 2004
# Whom:					KOMATSU Shinichiro
#
# $FreeBSD: ports/x11-fonts/mkbold-mkitalic/Makefile,v 1.9 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	mkbold-mkitalic
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	x11-fonts
MASTER_SITES=	http://hp.vector.co.jp/authors/VA013651/lib/

MAINTAINER=	koma2@lovepeers.org
COMMENT=	Programs to make BDF font bold/italic

CONFLICTS=	mkbold-[0-9]* mkitalic-[0-9]*

PLIST_FILES=	bin/mkbold bin/mkitalic bin/mkbolditalic
PORTDOCS=	ALGORITHM ALGORITHM.eucJP LICENSE README README.eucJP
USE_BZIP2=	yes

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	(cd ${WRKSRC}; ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR})
.endif

.include <bsd.port.mk>
