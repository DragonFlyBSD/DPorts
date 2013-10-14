# $FreeBSD: net/libkvkontakte/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	libkvkontakte
PORTVERSION=	${DIGIKAM_VER}
CATEGORIES=	net kde

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE4 library for accessing vk.com

NO_STAGE=	yes
.include "${.CURDIR}/../../graphics/digikam-kde4/Makefile.common"

LIB_DEPENDS=	qjson:${PORTSDIR}/devel/qjson
USE_LDCONFIG=	yes

.include <bsd.port.mk>
