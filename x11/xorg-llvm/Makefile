# zrj
PORTNAME=	xorg-llvm
PORTVERSION=	2.0
CATEGORIES=	x11
MASTER_SITES=	# none
DISTFILES=	# none
EXTRACT_ONLY=	# none

MAINTAINER=	zrj@efnet.irc
COMMENT=	X.Org complete distribution metaport with llvm components

LICENSE=	MIT # APACHE?

RUN_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/dri.pc:graphics/mesa-dri
RUN_DEPENDS+=	libosmesa-gallium>0:graphics/libosmesa-gallium
RUN_DEPENDS+=	mesa-dri-gallium>0:graphics/mesa-dri-gallium
RUN_DEPENDS+=	xorg>0:x11/xorg

NO_BUILD=	yes
NO_INSTALL=	yes
NO_MTREE=	yes

.include <bsd.port.mk>
