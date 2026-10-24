PORTNAME=	caps-lv2
PORTVERSION=	g20200529
CATEGORIES=	audio

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	LV2 version of the C* Audio Plugin Suite
WWW=		https://github.com/moddevices/caps-lv2

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	lv2>0:audio/lv2

USES=		gmake localbase
USE_CXXSTD=	c++14
USE_GITHUB=	yes
GH_ACCOUNT=	moddevices
GH_TAGNAME=	5d52a0c

dfly-patch:
	${REINPLACE_CMD} -e 's@\(defined(__FreeBSD__)\)@(\1||defined(__DragonFly__))@g' \
		${WRKSRC}/dsp/v4f_IIR2.h

.include <bsd.port.mk>
