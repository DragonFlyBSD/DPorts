# ex:ts=8
# Ports collection makefile for:  setcdboot
# Date created:			  Mon Jan 17, 1998
# Whom:				  David O'Brien (obrien@NUXI.com)
#
# $FreeBSD: ports/sysutils/setcdboot/Makefile,v 1.13 2012/11/17 06:01:45 svnexp Exp $
#

PORTNAME=	setcdboot
PORTVERSION=	1.0
CATEGORIES=	sysutils

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mark a file bootable within a DEC Alpha ISO-9660 image

DISTFILES=
NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/setcdboot

.include <bsd.port.pre.mk>

do-extract:
	${MKDIR} ${WRKDIR}
	${CP} ${FILESDIR}/setcdboot.c ${WRKDIR}

do-build:
	(cd ${WRKSRC} && ${CC} ${CFLAGS} -o setcdboot setcdboot.c)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/setcdboot ${PREFIX}/bin

.include <bsd.port.post.mk>
