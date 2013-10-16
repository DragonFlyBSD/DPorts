# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: databases/p5-Dancer-Session-Memcached/Makefile 329842 2013-10-08 22:40:02Z gblach $

PORTNAME=	Dancer-Session-Memcached
PORTVERSION=	0.2.02
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XSAWYERX
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Memcached-based session backend for Dancer

BUILD_DEPENDS=	p5-Cache-Memcached>=0:${PORTSDIR}/databases/p5-Cache-Memcached \
		p5-Dancer>=0:${PORTSDIR}/www/p5-Dancer
RUN_DEPENDS=	p5-Cache-Memcached>=0:${PORTSDIR}/databases/p5-Cache-Memcached \
		p5-Dancer>=0:${PORTSDIR}/www/p5-Dancer

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
