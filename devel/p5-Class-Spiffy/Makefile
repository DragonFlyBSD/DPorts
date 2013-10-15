# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Class-Spiffy/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Spiffy
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Class::Spiffy - Spiffy Perl Interface Framework For You

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Class::Spiffy.3

NO_STAGE=	yes
.include <bsd.port.mk>
