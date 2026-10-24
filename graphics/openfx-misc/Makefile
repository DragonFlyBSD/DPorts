PORTNAME=	openfx-misc
PORTVERSION=	2.4.3
DISTVERSIONPREFIX=	Natron-
CATEGORIES=	graphics

MAINTAINER=	olivier@FreeBSD.org
COMMENT=	Miscellaneous OpenFX Effects plugins
WWW=		https://github.com/devernay/openfx-misc

LICENSE=	GPLv2

ONLY_FOR_ARCHS=	amd64 powerpc64 powerpc64le

USES=		gl gmake
USE_GL=		gl
USE_GITHUB=	yes
GH_ACCOUNT=	NatronGitHub
GH_TUPLE=	NatronGitHub:openfx-supportext:79d8c22:openfx_supportext/SupportExt \
		NatronGitHub:openfx:d5db5d0:openfx/openfx \
		dtschump:CImg:b33dcc8f9f1acf1f276ded92c04f8231f6c23fcd:CImg

MAKE_ENV+=	CONFIG=release

PLIST_SUB= OPSYS=${OPSYS}
post-extract:
	${CP} ${WRKSRC_CImg}/CImg.h ${WRKSRC}/CImg/CImg.h
	${CP} ${WRKSRC_CImg}/plugins/inpaint.h ${WRKSRC}/CImg/Inpaint/inpaint.h

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/OFX/Plugins|${PREFIX}/OFX/Plugins|g' \
		${WRKSRC}/openfx/Examples/Makefile.master \
		${WRKSRC}/openfx/Support/Plugins/Makefile.master \
		${WRKSRC}/DebugProxy/DebugProxy.cpp \
		${WRKSRC}/openfx/HostSupport/src/ofxhPluginCache.cpp
	@${REINPLACE_CMD} -e 's|/Contents/$$(ARCH)|/Contents/${OPSYS}-x86-64/|g' \
		${WRKSRC}/openfx/Support/Plugins/Makefile.master

post-install:
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/OFX/Plugins/CImg.ofx.bundle/Contents/${OPSYS}-x86-64/CImg.ofx
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/OFX/Plugins/Misc.ofx.bundle/Contents/${OPSYS}-x86-64/Misc.ofx
	${STRIP_CMD} ${STAGEDIR}${LOCALBASE}/OFX/Plugins/Shadertoy.ofx.bundle/Contents/${OPSYS}-x86-64/Shadertoy.ofx

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/openfx/Support/Plugins/Makefile.master
	${REINPLACE_CMD} -e 's@__FreeBSD__@__DragonFly__@g' \
		${WRKSRC}/openfx/Documentation/sources/Guide/Code/Example1/basics.cpp \
		${WRKSRC}/openfx/Documentation/sources/Guide/Code/Example2/invert.cpp \
		${WRKSRC}/openfx/Documentation/sources/Guide/Code/Example3/gain.cpp \
		${WRKSRC}/openfx/Documentation/sources/Guide/Code/Example4/saturation.cpp \
		${WRKSRC}/openfx/Documentation/sources/Guide/Code/Example5/circle.cpp \
		${WRKSRC}/openfx/Examples/Basic/basic.cpp \
		${WRKSRC}/openfx/Examples/Custom/custom.cpp \
		${WRKSRC}/openfx/Examples/DepthConverter/depthConverter.cpp \
		${WRKSRC}/openfx/Examples/Invert/invert.cpp \
		${WRKSRC}/openfx/Examples/OpenGL/opengl.cpp \
		${WRKSRC}/openfx/Examples/Overlay/overlay.cpp \
		${WRKSRC}/openfx/Examples/Rectangle/rectangle.cpp \
		${WRKSRC}/openfx/Examples/Test/testProperties.cpp

.include <bsd.port.mk>
