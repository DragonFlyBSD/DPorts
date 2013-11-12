# Created by: lbr@FreeBSD.org
# $FreeBSD: www/p5-Catalyst-Plugin-Setenv/Makefile 333070 2013-11-07 08:28:22Z vanilla $

PORTNAME=	Catalyst-Plugin-Setenv
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Set up the environment from Catalyst's config file

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
