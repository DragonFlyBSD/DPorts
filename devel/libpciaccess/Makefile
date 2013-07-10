# $FreeBSD: devel/libpciaccess/Makefile 322221 2013-07-03 11:43:03Z zeising $

PORTNAME=	libpciaccess
PORTVERSION=	0.13.1
PORTREVISION=	3
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Generic PCI access library

BUILD_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids
RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids

CONFIGURE_ARGS+=	--with-pciids-path=${LOCALBASE}/share/pciids

XORG_CAT=	lib

.include <bsd.port.mk>
