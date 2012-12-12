# New ports collection makefile for:	libpciaccess
# Date Created:				May 11 2008
# Whom:					Florent Thoumie <flz@FreeBSD.org>
#
# $FreeBSD: ports/devel/libpciaccess/Makefile,v 1.15 2012/11/17 05:55:56 svnexp Exp $
#

PORTNAME=	libpciaccess
PORTVERSION=	0.12.1
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Generic PCI access library

BUILD_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids
# XXX - Is it a runtime dep too?
RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids

CONFIGURE_ARGS+=	--with-pciids-path=${LOCALBASE}/share/pciids

XORG_CAT=	lib

.include <bsd.port.mk>
