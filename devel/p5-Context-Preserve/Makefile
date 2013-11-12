# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-Context-Preserve/Makefile 331856 2013-10-28 13:46:25Z vanilla $

PORTNAME=	Context-Preserve
PORTVERSION=	0.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JROCKWAY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Run code after a subroutine call, preserving the context the subroutine

TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok \
		p5-Test-Exception>0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
