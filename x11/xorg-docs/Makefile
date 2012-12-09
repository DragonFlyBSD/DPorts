# New ports collection makefile for:	xorg-docs
# Date Created:				Nov 2 2006
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/x11/xorg-docs/Makefile,v 1.4 2012/11/17 06:03:22 svnexp Exp $
#

PORTNAME=	xorg-docs
PORTVERSION=	1.6
PORTEPOCH=	1
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.org documentation files

MAN7=	X.7 Standards.7 XProjectTeam.7 Consortium.7 Xsecurity.7 XOrgFoundation.7

CONFIGURE_ARGS+=	--without-xmlto --without-fop --disable-specs

XORG_CAT=	doc

.include <bsd.port.mk>
