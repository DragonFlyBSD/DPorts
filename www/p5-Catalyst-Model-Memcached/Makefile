# New ports collection makefile for:	p5-Catalyst-Model-Memcached
# Date created:	   24 Mar 2010
# Whom:		   Denis Pokataev <catone@cpan.org>
#
# $FreeBSD: ports/www/p5-Catalyst-Model-Memcached/Makefile,v 1.6 2012/12/16 06:16:59 svnexp Exp $
#

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

PERL_CONFIGURE=	yes

MAN3=		Catalyst::Model::Memcached.3

.include <bsd.port.mk>
