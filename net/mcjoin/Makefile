PORTNAME=	mcjoin
DISTVERSIONPREFIX=	v
DISTVERSION=	2.12
CATEGORIES=	net

MAINTAINER=	john@saltant.com
COMMENT=	Simple multicast testing application for UNIX
WWW=		https://github.com/troglobit/mcjoin

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		autoreconf
USE_GITHUB=	yes
GH_ACCOUNT=	troglobit

GNU_CONFIGURE=	yes

BROKEN= missing struct group_source_req group_req
.include <bsd.port.mk>
