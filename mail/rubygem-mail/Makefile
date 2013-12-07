# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: mail/rubygem-mail/Makefile 335710 2013-12-05 20:28:42Z sunpoet $

PORTNAME=	mail
PORTVERSION=	2.5.4
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	mail rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby email handler

LICENSE=	MIT

RUN_DEPENDS=	rubygem-mime-types>=1.16:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-treetop>=1.4.8:${PORTSDIR}/devel/rubygem-treetop

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

.include <bsd.port.mk>
