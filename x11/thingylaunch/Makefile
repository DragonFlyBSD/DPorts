# Created by: Pietro Cerutti <gahr@FreeBSD.org>
# $FreeBSD: x11/thingylaunch/Makefile 318398 2013-05-17 19:28:04Z gahr $

PORTNAME=	thingylaunch
PORTVERSION=	1.1.5
CATEGORIES=	x11

MAINTAINER=	gahr@FreeBSD.org
COMMENT=	Lightweight tab-completing launcher for X

LICENSE=	MIT BSD
LICENSE_COMB=	multi

USE_XORG=	x11 xproto
USES=		cmake:outsource
MAKE_JOBS_SAFE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	gahr
GH_TAGNAME=	${PORTVERSION}
GH_COMMIT=	8acab93

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
