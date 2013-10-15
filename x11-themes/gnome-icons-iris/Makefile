# Created by: Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: x11-themes/gnome-icons-iris/Makefile 327783 2013-09-20 23:54:03Z bapt $

# Port logic gratuitously stolen from x11-themes/kde-icons-noia by
# lioux@.  If it's not defined here and you think it should be, check
# x11-themes/gnome-icons/bsd.gnome-icons.mk for it.

PORTNAME=	iris
PORTVERSION=	20050420
PORTREVISION=	1
CATEGORIES=	x11-themes gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	teams/art.gnome.org/themes/icon
DISTNAME=	ICON-Iris

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Iris SVG Icons for Gnome

RESTRICTED=	${REASON}

USE_BZIP2=	yes
WRKSRC=		"${WRKDIR}/Iris"

NO_STAGE=	yes
.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
