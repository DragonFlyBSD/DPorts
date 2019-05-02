# Created by: Mikhail Teterin <mi@aldan.algebra.com>
# $FreeBSD$

PORTNAME=	dht
PORTVERSION=	0.26
CATEGORIES=	devel
MASTER_SITES=	http://www.pps.univ-paris-diderot.fr/~jch/software/files/

MAINTAINER=	rigoletto@FreeBSD.org
COMMENT=	Mainline variant of Kademlia Distributed Hash Table (DHT)

LICENSE=	MIT

USES=		uidfix

USE_LDCONFIG=	yes
MAKE_ENV=	STAGEDIR="${STAGEDIR}"

MAKEFILE=	${FILESDIR}/BSDmakefile

MAKE_ARGS+=    NO_WERROR=yes

pre-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/include/dht

.include <bsd.port.mk>
