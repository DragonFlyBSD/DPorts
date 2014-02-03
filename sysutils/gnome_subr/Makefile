# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: sysutils/gnome_subr/Makefile 342262 2014-02-02 10:14:08Z kwm $

PORTNAME=	gnome_subr
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Common startup and shutdown subroutines used by GNOME scripts

NO_BUILD=	yes
PLIST_FILES=	etc/gnome.subr

do-install:
	${INSTALL_DATA} ${FILESDIR}/gnome.subr ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
