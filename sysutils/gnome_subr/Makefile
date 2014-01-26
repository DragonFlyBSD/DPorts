# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: sysutils/gnome_subr/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	gnome_subr
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Common startup and shutdown subroutines used by GNOME scripts

NO_BUILD=	yes
PLIST_FILES=	etc/gnome.subr

NO_STAGE=	yes
do-install:
	${INSTALL_DATA} ${FILESDIR}/gnome.subr ${PREFIX}/etc

.include <bsd.port.mk>
