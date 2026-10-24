PORTNAME=	diva
PORTVERSION=	2.0.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	meta@FreeBSD.org
COMMENT=	Implementation of expression for handling things
WWW=		https://rubygems.org/gems/diva

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable>=2.5.2:www/rubygem-addressable

USES=		gem

NO_ARCH=	yes

dfly-patch:
	${REINPLACE_CMD} -e '/addressable>/s,"< 2.8","<= 2.8.0",g' \
		${WRKSRC}/diva.gemspec

.include <bsd.port.mk>
