# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: devel/rubygem-listen/Makefile 317045 2013-05-01 19:39:15Z sunpoet $

PORTNAME=	listen
PORTVERSION=	1.0.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Listen to file modifications and notify about the changes

RUN_DEPENDS=	rubygem-rb-kqueue>=0.2.0:${PORTSDIR}/devel/rubygem-rb-kqueue

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

post-patch:
	@${REINPLACE_CMD} -e '14,41 d' ${WRKSRC}/${GEM_NAME}.gemspec

.include <bsd.port.mk>
