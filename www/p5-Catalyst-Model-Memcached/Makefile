# Created by: Denis Pokataev <catone@cpan.org>
# $FreeBSD: www/p5-Catalyst-Model-Memcached/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Catalyst-Model-Memcached
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	catone@cpan.org
COMMENT=	Wrapper for memcached imitating Catalyst models

RUN_DEPENDS=	p5-Cache-Memcached-Fast>=0.17:${PORTSDIR}/databases/p5-Cache-Memcached-Fast \
		p5-Catalyst-Runtime>=5.8:${PORTSDIR}/www/p5-Catalyst-Runtime
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Catalyst::Model::Memcached.3

NO_STAGE=	yes
.include <bsd.port.mk>
