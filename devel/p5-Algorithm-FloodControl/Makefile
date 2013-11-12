# Created by: Andrey <gugu@zoo.rambler.ru>
# $FreeBSD: devel/p5-Algorithm-FloodControl/Makefile 331766 2013-10-27 12:17:59Z vanilla $

PORTNAME=	Algorithm-FloodControl
PORTVERSION=	2.001000
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Robot protection

BUILD_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate \
		p5-Module-Load>=0:${PORTSDIR}/devel/p5-Module-Load \
		p5-Cache-FastMmap>=0:${PORTSDIR}/devel/p5-Cache-FastMmap \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-File-Temp>=0:${PORTSDIR}/devel/p5-File-Temp
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
