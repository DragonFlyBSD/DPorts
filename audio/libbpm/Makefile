# New ports collection makefile for:  libbpm
# Date created:                11 December 2009
# Whom:                        Mykola Dzham <i@levsha.me>
#
# $FreeBSD: ports/audio/libbpm/Makefile,v 1.2 2012/11/17 05:54:36 svnexp Exp $
#

PORTNAME=	libbpm
PORTVERSION=	0.3
CATEGORIES=	audio
MASTER_SITES=	http://www.hep.ucl.ac.uk/~bino/libbpm/dist/ http://levsha.me/ports/distfiles/

MAINTAINER=	i@levsha.me
COMMENT=	C-library contains low level beam position monitor signal processing

GNU_CONFIGURE=	yes

USE_LDCONFIG=	yes
USE_GNOME=	gnomehack pkgconfig

post-patch:
	${SED} -i '' 's/\(-release .*\)/\1 -version-info 0/' ${WRKSRC}/Makefile.in ${WRKSRC}/*/Makefile.in

.include <bsd.port.mk>
