# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: devel/p5-Rose-DateTime/Makefile 329480 2013-10-05 16:59:51Z sunpoet $

PORTNAME=	Rose-DateTime
PORTVERSION=	0.539
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DateTime helper functions and objects

BUILD_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-Rose-Object>=0.82:${PORTSDIR}/devel/p5-Rose-Object
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
