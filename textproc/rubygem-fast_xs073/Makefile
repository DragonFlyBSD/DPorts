# Created by: Scott Sanders <scott@jssjr.com>
# $FreeBSD: textproc/rubygem-fast_xs073/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	fast_xs
PORTVERSION=	0.7.3
PORTEPOCH=	1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A systems integration framework. Expander

RUN_DEPENDS=	rubygem-hoe>=2.3.2:${PORTSDIR}/devel/rubygem-hoe

NO_LATEST_LINK=	yes
PORTSCOUT=	limit:^0.7

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
