# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: devel/p5-Module-Manifest/Makefile 332120 2013-10-30 14:44:54Z vanilla $

PORTNAME=	Module-Manifest
PORTVERSION=	1.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Parse and examine a Perl distribution MANIFEST file

BUILD_DEPENDS=	p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util \
		p5-Test-Warn>=0:${PORTSDIR}/devel/p5-Test-Warn
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
