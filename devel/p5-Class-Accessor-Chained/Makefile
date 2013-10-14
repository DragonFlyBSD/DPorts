# Created by: mat
# $FreeBSD: devel/p5-Class-Accessor-Chained/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Accessor-Chained
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make chained accessors

RUN_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Class::Accessor::Chained.3 \
		Class::Accessor::Chained::Fast.3

NO_STAGE=	yes
.include <bsd.port.mk>
