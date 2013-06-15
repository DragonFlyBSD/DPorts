# $FreeBSD: devel/p5-Hash-Flatten/Makefile 319465 2013-05-31 01:47:13Z miwi $

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

PERL_CONFIGURE=	yes

MAN3=	Hash::Flatten.3

.include <bsd.port.mk>
