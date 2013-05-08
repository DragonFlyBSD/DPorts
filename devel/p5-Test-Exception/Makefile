# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: devel/p5-Test-Exception/Makefile 316788 2013-04-29 09:13:02Z sunpoet $

PORTNAME=	Test-Exception
PORTVERSION=	0.32
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test::Exception - test functions for exception based code

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Sub-Uplevel>=0.18:${PORTSDIR}/devel/p5-Sub-Uplevel
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Test::Exception.3

.include <bsd.port.mk>
