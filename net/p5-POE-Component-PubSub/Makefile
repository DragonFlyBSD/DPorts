# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: net/p5-POE-Component-PubSub/Makefile 332868 2013-11-05 16:42:55Z vanilla $

PORTNAME=	POE-Component-PubSub
PORTVERSION=	0.05
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
#MASTER_SITE_SUBDIR=	CPAN:nperez
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A generic publish/subscribe POE::Component

BUILD_DEPENDS=	p5-POE>=0:${PORTSDIR}/devel/p5-POE
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
