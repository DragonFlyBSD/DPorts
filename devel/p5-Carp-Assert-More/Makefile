# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: ports/devel/p5-Carp-Assert-More/Makefile,v 1.11 2012/11/18 01:01:22 svnexp Exp $

PORTNAME=	Carp-Assert-More
PORTVERSION=	1.14
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convenience wrappers around Carp::Assert

LICENSE=	ART20

BUILD_DEPENDS=	p5-Carp-Assert>=0:${PORTSDIR}/devel/p5-Carp-Assert
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

MAN3=	Carp::Assert::More.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
