PORTNAME=	nextgo
PORTVERSION=	3.0
PORTREVISION=	12
CATEGORIES=	games gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	NeXTGo-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Classic Go game for OPENSTEP/GNUstep
WWW=		https://www.nongnu.org/gap/nextgo/index.html

LICENSE=	GPLv1
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnustep
USE_GNUSTEP=	back build

ADDITIONAL_CFLAGS= -Wno-error=implicit-int -Wno-error=implicit-function-declaration -Wno-error=int-conversion -Wno-error=incompatible-function-pointer-types
ADDITIONAL_OBJCFLAGS= -Wno-error=implicit-int -Wno-error=implicit-function-declaration -Wno-error=int-conversion -Wno-error=incompatible-function-pointer-types
post-patch:
	${REINPLACE_CMD} -e 's|^GNUSTEP_INSTALLATION_DIR|#GNUSTEP_INSTALLATION_DIR|' \
		${WRKSRC}/GNUmakefile
	${REINPLACE_CMD} -e 's|PSWait|myPSWait|' \
		${WRKSRC}/Board.m

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/NeXTGo.app/NeXTGo

.include <bsd.port.mk>
