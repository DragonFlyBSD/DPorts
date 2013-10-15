# Created by: Tom McLaughlin <tmclaugh@sdf.lonestar.org>
# $FreeBSD: x11-themes/gnome-icons-noia-warm/Makefile 327783 2013-09-20 23:54:03Z bapt $

# Port logic gratuitously stolen from x11-themes/kde-icons-noia by
# lioux@.  If it's not defined here and you think it should be, check
# x11-themes/gnome-icons/bsd.gnome-icons.mk for it.

PORTNAME=	noia-warm
PORTVERSION=	20041102
PORTREVISION=	2
CATEGORIES=	x11-themes gnome
MASTER_SITES=	GNOME
MASTER_SITE_SUBDIR=	teams/art.gnome.org/archive/themes/icon
DISTNAME=	ICON-NoiaWarm

MAINTAINER=	ports@FreeBSD.org
COMMENT=	NoiaWarm Icons for Gnome

RESTRICTED=	${REASON}

USE_BZIP2=	yes
WRKSRC=		"${WRKDIR}/NoiaWarm"

NO_STAGE=	yes
.include "${.CURDIR}/../gnome-icons/bsd.gnome-icons.mk"
.include <bsd.port.mk>
