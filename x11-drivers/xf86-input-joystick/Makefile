# $FreeBSD: x11-drivers/xf86-input-joystick/Makefile 327779 2013-09-20 23:48:39Z bapt $

PORTNAME=	xf86-input-joystick
PORTVERSION=	${JOYVER}
PORTREVISION=	${JOYREVISION}
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org joystick input driver

XORG_CAT=	driver
MAN4=		joystick.4x

.if defined(WITH_NEW_XORG)
JOYVER=		1.6.2
JOYREVISION=	0
.else
JOYVER=		1.5.0
JOYREVISION=	1
.endif

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|[(]libdir[)]/pkgconfig|(prefix)/libdata/pkgconfig|g' \
		${WRKSRC}/Makefile.in

.include <bsd.port.mk>
