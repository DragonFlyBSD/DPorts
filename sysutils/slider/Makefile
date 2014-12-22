# Created by: olgeni@FreeBSD.org
# $FreeBSD$

PORTNAME=	slider
PORTVERSION=	1.00
CATEGORIES=	sysutils

MAINTAINER=	marino@FreeBSD.org
COMMENT=	HAMMER file system time slider utility

LICENSE=	BSD2CLAUSE   # actually ISC

BUILD_DEPENDS=	adacurses-config:${PORTSDIR}/devel/adacurses

USES=		ada ncurses:port
MAKE_ENV=	mode=release
PLIST_FILES=	bin/slider

USE_GITHUB=	yes
GH_ACCOUNT=	jrmarino
GH_PROJECT=	Slider
GH_COMMIT=	bcceb3c
GH_TAGNAME=	${GH_COMMIT}

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local/lib/gnat/||' ${WRKSRC}/slider.gpr

do-build:
	cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} gnatmake -P slider

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/slider ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
