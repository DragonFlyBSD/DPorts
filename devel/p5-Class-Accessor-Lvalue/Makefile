# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Class-Accessor-Lvalue/Makefile 342699 2014-02-05 13:45:39Z miwi $

PORTNAME=	Class-Accessor-Lvalue
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Create Lvalue accessors

BUILD_DEPENDS=	p5-Want>=0:${PORTSDIR}/devel/p5-Want \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
