# Created by: lbr@FreeBSD.org
# $FreeBSD: www/p5-Catalyst-Plugin-Session-Store-Cache/Makefile 333070 2013-11-07 08:28:22Z vanilla $

PORTNAME=	Catalyst-Plugin-Session-Store-Cache
PORTVERSION=	0.01
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store sessions using a Catalyst::Plugin::Cache

BUILD_DEPENDS=	p5-Catalyst-Plugin-Session>=0.06:${PORTSDIR}/www/p5-Catalyst-Plugin-Session
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
