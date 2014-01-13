# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Test-Singleton/Makefile 338884 2014-01-06 14:40:31Z az $

PORTNAME=	Test-Singleton
PORTVERSION=	1.03
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:TPG
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Test for Singleton classes

RUN_DEPENDS=	p5-Class-Singleton>=0:${PORTSDIR}/devel/p5-Class-Singleton \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
