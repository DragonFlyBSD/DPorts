# New ports collection Makefile for: 	swiggle
# Date created:				19 Feb 2003
# Whom:					Josef El-Rayes <j.el-rayes@daemon.li>
#
# $FreeBSD: ports/www/swiggle/Makefile,v 1.25 2012/11/17 06:03:06 svnexp Exp $

PORTNAME=	swiggle
PORTVERSION=	0.4
PORTREVISION=	7
CATEGORIES=	www
MASTER_SITES=	http://homepage.univie.ac.at/l.ertl/swiggle/files/ \
		http://bsd-geek.de/FreeBSD/distfiles/

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Swiggle is a commandline web image gallery generator

LIB_DEPENDS=	jpeg.11:${PORTSDIR}/graphics/jpeg \
		exif.12:${PORTSDIR}/graphics/libexif

post-patch:
	${REINPLACE_CMD} -e 's,/usr/local,${LOCALBASE},g' ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/swiggle ${PREFIX}/bin

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
