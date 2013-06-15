# Created by: Cheng-Lung Sung <clsung@dragon2.net>
# $FreeBSD: math/p5-Statistics-Contingency/Makefile 320455 2013-06-10 10:22:44Z tobez $

PORTNAME=	Statistics-Contingency
PORTVERSION=	0.09
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Calculate precision, recall, F1, accuracy, etc

BUILD_DEPENDS=	p5-Params-Validate>=0:${PORTSDIR}/devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Statistics::Contingency.3

.include <bsd.port.mk>
