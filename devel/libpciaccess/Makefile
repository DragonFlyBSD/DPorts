# $FreeBSD: devel/libpciaccess/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	libpciaccess
PORTVERSION=	0.13.2
CATEGORIES=	devel

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Generic PCI access library

BUILD_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids
RUN_DEPENDS=	${LOCALBASE}/share/pciids/pci.ids:${PORTSDIR}/misc/pciids

CONFIGURE_ARGS+=	--with-pciids-path=${LOCALBASE}/share/pciids

XORG_CAT=	lib

NO_STAGE=	yes
.include <bsd.port.mk>
