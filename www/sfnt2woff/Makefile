# New ports collection makefile for:	sfnt2woff
# Date Created:				Sep 23 2011
# Whom:					Andrey Chernov <ache@freebsd.org>
#
# $FreeBSD: ports/www/sfnt2woff/Makefile,v 1.3 2012/11/17 06:03:05 svnexp Exp $
#

PORTNAME=	sfnt2woff
PORTVERSION=	20091004
CATEGORIES=	www converters
MASTER_SITES=	http://people.mozilla.org/~jkew/woff/
DISTNAME=	woff-code-latest

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert TTF/OTF fonts to WOFF web embeddable format and back

NO_WRKSUBDIR=	yes
USE_ZIP=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/sfnt2woff bin/woff2sfnt

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/sfnt2woff ${WRKSRC}/woff2sfnt \
		 ${PREFIX}/bin

.include <bsd.port.mk>
