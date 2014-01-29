# $FreeBSD: x11-drivers/xf86-video-newport/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xf86-video-newport
PORTVERSION=	0.2.4
PORTREVISION=	1
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org newport display driver

XORG_CAT=	driver

post-patch:
		${REINPLACE_CMD} -e 's|values.h|sys/limits.h|' \
				 -e 's|MAXSHORT|SHRT_MAX|g' \
				 ${WRKSRC}/src/newport_accel.c

.include <bsd.port.mk>
