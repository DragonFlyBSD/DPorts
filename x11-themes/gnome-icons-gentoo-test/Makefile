# New ports collection makefile for:	Gnome iconset Gentoo-Test
# Date created:				29 Feb 2004
# Whom:					Tom McLaughlin <tmclaugh@sdf.lonestar.org>
#
# $FreeBSD: ports/x11-themes/gnome-icons-gentoo-test/Makefile,v 1.11 2012/11/17 06:03:31 svnexp Exp $
#

# Port logic gratuitously stolen from x11-themes/kde-icons-noia by
# lioux@.  If it's not defined here and you think it should be, check
# x11-themes/gnome-icons/bsd.gnome-icons.mk for it.

PORTNAME=	gentoo-test
PORTVERSION=	0.1
PORTREVISION=	3
CATEGORIES=	x11-themes gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	teams/art.gnome.org/archive/themes/icon
DISTNAME=	ICON-Gentoo-Test

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gentoo-Test Icons for Gnome

RESTRICTED=	${REASON}

USE_BZIP2=	yes
WRKSRC=		"${WRKDIR}/Gentoo-test"

.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
