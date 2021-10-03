# Created by: Antonio Huete <tuxillo@dragonflybsd.org>

PORTNAME=	fog-libvirt
PORTVERSION=	0.9.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support libvirt platform

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-json>=0:devel/rubygem-json \
		rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-json>=0:devel/rubygem-fog-json \
		rubygem-fog-xml>=0:textproc/rubygem-fog-xml \
		rubygem-ruby-libvirt>=0.7.0:devel/rubygem-ruby-libvirt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
