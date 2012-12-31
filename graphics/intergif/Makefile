# New ports collection makefile for:	interGif
# Date created:				31 August 2005
# Whom:					jamie
#
# $FreeBSD: ports/graphics/intergif/Makefile,v 1.3 2012/12/06 16:41:46 svnexp Exp $
#

PORTNAME=	interGif
PORTVERSION=	6.15
CATEGORIES=	graphics
MASTER_SITES=	http://utter.chaos.org.uk/~pdh/software/arc/ \
		http://ftp.bishopston.net/freebsd/distfiles/ \
		ftp://ftp.bishopston.net/freebsd/distfiles/
DISTNAME=	ig615src
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Efficient animated GIF optimiser

WRKSRC=		${WRKDIR}/igsrc

PLIST_FILES=	bin/intergif
ALL_TARGET=	intergif

pre-patch:
	${CP} -f ${WRKSRC}/makefile.ix ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/intergif ${PREFIX}/bin/intergif

.include <bsd.port.mk>
