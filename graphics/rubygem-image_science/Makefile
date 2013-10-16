# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: graphics/rubygem-image_science/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	image_science
PORTVERSION=	1.2.5
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library that generates thumbnails

RUN_DEPENDS=	rubygem-inline>=3.8.5:${PORTSDIR}/devel/rubygem-inline

LICENSE=		MIT

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/image_science_thumb

NO_STAGE=	yes
.include <bsd.port.mk>
