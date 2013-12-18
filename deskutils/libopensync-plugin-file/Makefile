# Created by: Alex Samorukov <samm@os2.kiev.ua>
# $FreeBSD: deskutils/libopensync-plugin-file/Makefile 336190 2013-12-11 18:28:10Z bapt $

PORTNAME=	libopensync-plugin-file
PORTVERSION=	0.22
CATEGORIES=	deskutils
MASTER_SITES=	http://www.opensync.org/download/releases/${PORTVERSION}/

MAINTAINER=	samm@os2.kiev.ua
COMMENT=	File-Sync plugin for the opensync framework

LIB_DEPENDS=	libopensync.so:${PORTSDIR}/devel/libopensync022

USES=		pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
