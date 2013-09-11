# Created by: Alejandro Pulver <alejandro@varnet.biz>
# $FreeBSD: audio/xmms-fxt/Makefile 325727 2013-08-30 23:01:05Z bapt $

PORTNAME=	xmms-fxt
PORTVERSION=	0.4
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}oolbox/${PORTNAME}-${PORTVERSION}.tar.gz

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	Surround/Echo effect plugin for XMMS

LIB_DEPENDS=	xmms.4:${PORTSDIR}/multimedia/xmms

GNU_CONFIGURE=	yes
USES=		gmake
USE_GNOME=	gtk12

PLIST_FILES=	lib/xmms/Effect/libfxt.la \
		lib/xmms/Effect/libfxt.so

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' \
		${WRKSRC}/configure ${WRKSRC}/ltconfig

.include <bsd.port.mk>
