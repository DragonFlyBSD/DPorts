PORTNAME=	valgrind
PORTVERSION=	3.15.0
DISTNAME=	valgrind-dragonfly-${PORTVERSION}
DISTFILES=	v${PORTVERSION}.tar.gz
MASTER_SITES=	https://github.com/1338-1/valgrind-dragonfly/archive/refs/tags/
CATEGORIES=	devel
MAINTAINER=	dan_

USES=		autoreconf:build gmake libtool
GNU_CONFIGURE=	yes

pre-configure:
	cd ${WRKSRC} && sh autogen.sh

post-install:
	cd ${WRKSRC} && gmake install

.include <bsd.port.mk>
