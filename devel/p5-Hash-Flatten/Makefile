# $FreeBSD: devel/p5-Hash-Flatten/Makefile 336507 2013-12-15 08:55:51Z az $

PORTNAME=	Hash-Flatten
PORTVERSION=	1.19
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	az@FreeBSD.org
COMMENT=	Flatten, unflatten complex data hashes

BUILD_DEPENDS=	p5-Log-Trace>0:${PORTSDIR}/devel/p5-Log-Trace \
		p5-Test-Assertions>0:${PORTSDIR}/devel/p5-Test-Assertions
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
