# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/sysutils/gnome_subr/Makefile 465433 2018-03-24 08:33:22Z amdmi3 $

PORTNAME=	gnome_subr
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=	# none

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Common startup and shutdown subroutines used by GNOME scripts

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${PORTSDIR}/COPYRIGHT

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	etc/gnome.subr

do-install:
	${INSTALL_DATA} ${FILESDIR}/gnome.subr ${STAGEDIR}${PREFIX}/etc

.include <bsd.port.mk>
