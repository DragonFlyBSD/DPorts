PORTNAME=	dht
DISTVERSIONPREFIX=	${PORTNAME}-
DISTVERSION=	0.27
CATEGORIES=	devel

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Mainline variant of Kademlia Distributed Hash Table (DHT)
WWW=		http://www.pps.univ-paris-diderot.fr/~jch/software/bittorrent/

LICENSE=	MIT

USES=		uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	jech

USE_LDCONFIG=	yes
MAKE_ENV=	STAGEDIR="${STAGEDIR}"

MAKEFILE=	${FILESDIR}/BSDmakefile

MAKE_ARGS+=    NO_WERROR=yes

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/dht

.include <bsd.port.mk>
