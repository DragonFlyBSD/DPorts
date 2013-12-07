# $FreeBSD: www/rubygem-chosen-rails/Makefile 335758 2013-12-06 15:23:44Z sunpoet $

PORTNAME=	chosen-rails
PORTVERSION=	1.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Box enhancer for jQuery and Protoype

LICENSE=	MIT

RUN_DEPENDS=	rubygem-coffee-rails>=3.2:${PORTSDIR}/devel/rubygem-coffee-rails \
		rubygem-compass-rails>=1.0:${PORTSDIR}/textproc/rubygem-compass-rails \
		rubygem-railties>=3.0:${PORTSDIR}/www/rubygem-railties \
		rubygem-sass-rails>=3.2:${PORTSDIR}/textproc/rubygem-sass-rails

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
