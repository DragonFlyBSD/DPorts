# Created by: Andrew Thompson <andy@fud.org.nz>
# $FreeBSD: net-mgmt/pads/Makefile 321037 2013-06-16 11:29:27Z wg $

PORTNAME=	pads
PORTVERSION=	1.2
PORTREVISION=	4
CATEGORIES=	net-mgmt
MASTER_SITES=	SF/passive/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Passively detect network assets

CFLAGS+=	-Wno-return-type
USE_CSTD=	gnu89

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

GNU_CONFIGURE=	yes

MAN8=		pads.8 pads-report.8 pads.conf.8

.include <bsd.port.mk>
