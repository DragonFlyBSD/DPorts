# New ports collection makefile for:	gnome_subr
# Date created:				31 Oct 2006
# Whom:					Jean-Yves Lefort <jylefort@FreeBSD.org>
#
# $FreeBSD: ports/sysutils/gnome_subr/Makefile,v 1.2 2012/11/17 06:01:33 svnexp Exp $
#

PORTNAME=	gnome_subr
PORTVERSION=	1.0
CATEGORIES=	sysutils
DISTFILES=

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Common startup and shutdown subroutines used by GNOME scripts

NO_BUILD=	yes
PLIST_FILES=	etc/gnome.subr

do-install:
	${INSTALL_DATA} ${FILESDIR}/gnome.subr ${PREFIX}/etc

.include <bsd.port.mk>
